/****************************************************************************
** Meta object code from reading C++ file 'properties-view.moc.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "properties-view.moc.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'properties-view.moc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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
struct qt_meta_stringdata_CLASSOBSFrameRatePropertyWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOBSFrameRatePropertyWidgetENDCLASS = QtMocHelpers::stringData(
    "OBSFrameRatePropertyWidget"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOBSFrameRatePropertyWidgetENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOBSFrameRatePropertyWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOBSFrameRatePropertyWidgetENDCLASS_t qt_meta_stringdata_CLASSOBSFrameRatePropertyWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26)   // "OBSFrameRatePropertyWidget"
    },
    "OBSFrameRatePropertyWidget"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOBSFrameRatePropertyWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject OBSFrameRatePropertyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSOBSFrameRatePropertyWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOBSFrameRatePropertyWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOBSFrameRatePropertyWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OBSFrameRatePropertyWidget, std::true_type>
    >,
    nullptr
} };

void OBSFrameRatePropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OBSFrameRatePropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSFrameRatePropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOBSFrameRatePropertyWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OBSFrameRatePropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
