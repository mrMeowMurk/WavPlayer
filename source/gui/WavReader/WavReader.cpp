#include "WavReader.h"

struct Sample16s {
    qint16 left;
    qint16 right;
};

inline float int16toFloat(quint16 value) {
    static constexpr float K = 1.0/0x80FF;
    return K*static_cast<float>(value);
}

inline PortAudio::Sample sample16toFloat(Sample16s value) {
    static constexpr float K = 1.0/0x80FF;
    return {K*static_cast<float>(value.left), K*static_cast<float>(value.right)};
}

inline convert(gsl::span<quint16> src, gsl::span<float> dst) {
    std::transform(src.begin(), src.end(), dst.begin(), [](auto value) {
       return int16toFloat(value);
    });
}

inline convert(gsl::span<Sample16s> src, gsl::span<PortAudio::Sample> dst) {
    std::transform(src.begin(), src.end(), dst.begin(), [](auto value) {
       return sample16toFloat(value);
    });
}

struct WavReader::impl {

    struct wav_header
    {
        char                RIFF[4];        // RIFF Header      Magic header
        unsigned long       ChunkSize;      // RIFF Chunk Size
        char                WAVE[4];        // WAVE Header
        char                fmt[4];         // FMT header
        unsigned long       Subchunk1Size;  // Size of the fmt chunk
        unsigned short      AudioFormat;    // Audio format 1=PCM,6=mulaw,7=alaw, 257=IBM Mu-Law, 258=IBM A-Law, 259=ADPCM
        unsigned short      NumOfChan;      // Number of channels 1=Mono 2=Sterio
        unsigned long       SamplesPerSec;  // Sampling Frequency in Hz
        unsigned long       bytesPerSec;    // bytes per second
        unsigned short      blockAlign;     // 2=16-bit mono, 4=16-bit stereo
        unsigned short      bitsPerSample;  // Number of bits per sample
        char                Subchunk2ID[4]; // "data"  string
        unsigned long       Subchunk2Size;  // Sampled data length
    };

    impl() {

    }

    ~impl() {

    }

    bool open(const QString &fileName_src)
    {
        m_fileWav.setFileName(fileName_src);
        if (m_fileWav.open(QIODevice::ReadOnly))
        {
            m_fileWav.read((char*)&m_header, sizeof(m_header));
            m_sampleRate   = m_header.SamplesPerSec;

            uint16_t bytesPerSample = m_header.bitsPerSample / 8;
            m_countSamples = m_header.ChunkSize / bytesPerSample;

            qDebug() << m_countSamples;


            float sec = 1.f * m_header.Subchunk2Size / (m_header.bitsPerSample / 8) / m_header.NumOfChan / m_header.SamplesPerSec;
            m_percentSec = sec / 100;

            int min = (int) floor(sec) / 60;
            sec = floor(sec - (min * 60));

            m_durationSec = sec;
            m_durationMin = min;

            return true;
        }
        else {
            qDebug() << m_fileWav.errorString();
            return false;
        }
    }

    void close()
    {
        if (openned) {
            qDebug() << "File is close";
            m_fileWav.close();
            m_readSamples = 0;
        }
    }

    quint32 sampleRate() const
    {
        return m_sampleRate;
    }

    quint32 channels() const
    {
        return m_channels;
    }

    bool read(gsl::span<PortAudio::Sample> dst)
    {
        if (m_fileWav.isOpen())
        {
            if (m_fileWav.atEnd())
            {
                m_readSamples = 0;
                qDebug() << "File is finished";
                return false;
            }

            m_data.resize(dst.size());
            m_fileWav.read((char*)m_data.data(), sizeof(Sample16s)*dst.size());

            convert(m_data,dst);
            m_readSamples += dst.size();

            return true;
        }
        else
        {
            qDebug() << "File is not open now";
            return false;
        }
    }

    int countSamples() const {
        return m_countSamples;
    }

    int countReadSamples() const {
        return m_readSamples;
    }

    int durationMin() const {
        return m_durationMin;
    }

    float durationSec() const {
        return m_durationSec;
    }

    float percentSec() const {
        return m_percentSec;
    }

    void setReadSamples(int count) {
        m_readSamples = count;
    }

    void setSeekFile(int count) {
        m_fileWav.seek(count * 4);
    }

private:
    QFile m_fileWav;

    wav_header m_header;

    quint32 m_sampleRate;
    quint32 m_channels;

    int m_durationMin {0};
    float m_durationSec {0};

    int m_countSamples;
    int m_readSamples {0};

    float m_percentSec;

    std::vector<Sample16s> m_data;

    bool openned = false;
};


WavReader::WavReader()
    : pImpl{std::make_unique<impl>()}
{

}

WavReader::~WavReader() {

}

bool WavReader::open(const QString &fileName_src)
{
    return pImpl->open(fileName_src);
}

void WavReader::close()
{
    return pImpl->close();
}

quint32 WavReader::sampleRate() const
{
    return pImpl->sampleRate();
}

quint32 WavReader::channels() const
{
    return pImpl->channels();
}

bool WavReader::read(gsl::span<PortAudio::Sample> dst)
{
    return pImpl->read(dst);
}

int WavReader::countSamples() const
{
    return pImpl->countSamples();
}

int WavReader::countReadSamples() const
{
    return pImpl->countReadSamples();
}

void WavReader::setReadSamples(int count)
{
    return pImpl->setReadSamples(count);
}

void WavReader::setSeekFile(int count)
{
    return pImpl->setSeekFile(count);
}

int WavReader::durationMin() const
{
    return pImpl->durationMin();
}

float WavReader::durationSec() const
{
    return pImpl->durationSec();
}

float WavReader::percentSec() const
{
    return pImpl->percentSec();
}
