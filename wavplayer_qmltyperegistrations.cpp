/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#include <QmlAqualizer.h>

#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif

Q_QMLTYPE_EXPORT void qml_register_types_Charts()
{
    qmlRegisterTypesAndRevisions<Aqualizer2>("Charts", 1);
    qmlRegisterAnonymousType<QQuickItem, 254>("Charts", 1);
    qmlRegisterModule("Charts", 1, 0);
}

static const QQmlModuleRegistration registration("Charts", qml_register_types_Charts);
