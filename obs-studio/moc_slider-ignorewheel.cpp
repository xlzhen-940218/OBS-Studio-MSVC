/****************************************************************************
** Meta object code from reading C++ file 'slider-ignorewheel.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "slider-ignorewheel.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slider-ignorewheel.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSliderIgnoreScrollENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSliderIgnoreScrollENDCLASS = QtMocHelpers::stringData(
    "SliderIgnoreScroll"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSliderIgnoreScrollENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSliderIgnoreScrollENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSliderIgnoreScrollENDCLASS_t qt_meta_stringdata_CLASSSliderIgnoreScrollENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18)   // "SliderIgnoreScroll"
    },
    "SliderIgnoreScroll"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSliderIgnoreScrollENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject SliderIgnoreScroll::staticMetaObject = { {
    QMetaObject::SuperData::link<QSlider::staticMetaObject>(),
    qt_meta_stringdata_CLASSSliderIgnoreScrollENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSliderIgnoreScrollENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSliderIgnoreScrollENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SliderIgnoreScroll, std::true_type>
    >,
    nullptr
} };

void SliderIgnoreScroll::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *SliderIgnoreScroll::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SliderIgnoreScroll::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSliderIgnoreScrollENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QSlider::qt_metacast(_clname);
}

int SliderIgnoreScroll::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSVolumeSliderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVolumeSliderENDCLASS = QtMocHelpers::stringData(
    "VolumeSlider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVolumeSliderENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVolumeSliderENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVolumeSliderENDCLASS_t qt_meta_stringdata_CLASSVolumeSliderENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12)   // "VolumeSlider"
    },
    "VolumeSlider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVolumeSliderENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject VolumeSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<SliderIgnoreScroll::staticMetaObject>(),
    qt_meta_stringdata_CLASSVolumeSliderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVolumeSliderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVolumeSliderENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VolumeSlider, std::true_type>
    >,
    nullptr
} };

void VolumeSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *VolumeSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolumeSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVolumeSliderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SliderIgnoreScroll::qt_metacast(_clname);
}

int VolumeSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SliderIgnoreScroll::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
