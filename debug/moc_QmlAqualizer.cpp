/****************************************************************************
** Meta object code from reading C++ file 'QmlAqualizer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../libs/QmlLibs/QmlAqualizer.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmlAqualizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Aqualizer2_t {
    uint offsetsAndSizes[6];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Aqualizer2_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Aqualizer2_t qt_meta_stringdata_Aqualizer2 = {
    {
        QT_MOC_LITERAL(0, 10),  // "Aqualizer2"
        QT_MOC_LITERAL(11, 11),  // "QML.Element"
        QT_MOC_LITERAL(23, 4)   // "auto"
    },
    "Aqualizer2",
    "QML.Element",
    "auto"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Aqualizer2[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject Aqualizer2::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_Aqualizer2.offsetsAndSizes,
    qt_meta_data_Aqualizer2,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // Q_OBJECT / Q_GADGET
        Aqualizer2
    >,
    nullptr
} };

void Aqualizer2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Aqualizer2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Aqualizer2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Aqualizer2.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int Aqualizer2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
