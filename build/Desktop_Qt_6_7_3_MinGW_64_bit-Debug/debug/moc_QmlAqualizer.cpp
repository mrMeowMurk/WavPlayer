/****************************************************************************
** Meta object code from reading C++ file 'QmlAqualizer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/QmlLibs/QmlAqualizer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmlAqualizer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAqualizer2ENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAqualizer2ENDCLASS = QtMocHelpers::stringData(
    "Aqualizer2",
    "QML.Element",
    "auto"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAqualizer2ENDCLASS[] = {

 // content:
      12,       // revision
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
    qt_meta_stringdata_CLASSAqualizer2ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAqualizer2ENDCLASS,
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
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAqualizer2ENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int Aqualizer2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
