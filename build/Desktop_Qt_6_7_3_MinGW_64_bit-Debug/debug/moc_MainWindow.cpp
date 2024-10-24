/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../source/gui/MainWindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "testSignal",
    "",
    "timeChange",
    "notification",
    "title",
    "description",
    "testOpen",
    "checked",
    "indexInp",
    "indexOut",
    "inputDevice",
    "outputDevice",
    "openFile",
    "file",
    "closeFile",
    "test_setVolumeTarget",
    "value",
    "currentVolume",
    "setPainter",
    "Aqualizer2*",
    "painter",
    "onDrawSpectrum",
    "currentProgress",
    "m_time"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    3 /* Public */,
       3,    0,   87,    2, 0x06,    4 /* Public */,
       4,    2,   88,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    3,   93,    2, 0x0a,    8 /* Public */,
      11,    0,  100,    2, 0x10a,   12 /* Public | MethodIsConst  */,
      12,    0,  101,    2, 0x10a,   13 /* Public | MethodIsConst  */,
      13,    2,  102,    2, 0x0a,   14 /* Public */,
      15,    1,  107,    2, 0x0a,   17 /* Public */,
      16,    1,  110,    2, 0x0a,   19 /* Public */,
      18,    0,  113,    2, 0x0a,   21 /* Public */,
      19,    1,  114,    2, 0x0a,   22 /* Public */,
      22,    0,  117,    2, 0x0a,   24 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::QString, QMetaType::Bool, QMetaType::QString,    8,   14,
    QMetaType::Bool, QMetaType::Bool,    8,
    QMetaType::QString, QMetaType::Float,   17,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,

 // properties: name, type, flags
      23, QMetaType::Int, 0x00015003, uint(0), 0,
      24, QMetaType::QString, 0x00015003, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // property 'currentProgress'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'm_time'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'testSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timeChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'notification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'testOpen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'inputDevice'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'outputDevice'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'openFile'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'closeFile'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'test_setVolumeTarget'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'currentVolume'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setPainter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Aqualizer2 *, std::false_type>,
        // method 'onDrawSpectrum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->testSignal(); break;
        case 1: _t->timeChange(); break;
        case 2: _t->notification((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->testOpen((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 4: { QStringList _r = _t->inputDevice();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 5: { QStringList _r = _t->outputDevice();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->openFile((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->closeFile((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->test_setVolumeTarget((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->currentVolume();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setPainter((*reinterpret_cast< std::add_pointer_t<Aqualizer2*>>(_a[1]))); break;
        case 11: _t->onDrawSpectrum(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Aqualizer2* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::testSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::timeChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString , QString );
            if (_t _q_method = &MainWindow::notification; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getProgress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setProgress(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTime(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::testSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::timeChange()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::notification(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
