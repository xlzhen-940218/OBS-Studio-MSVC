/****************************************************************************
** Meta object code from reading C++ file 'window-projector.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "window-projector.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-projector.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOBSProjectorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOBSProjectorENDCLASS = QtMocHelpers::stringData(
    "OBSProjector",
    "EscapeTriggered",
    "",
    "OpenFullScreenProjector",
    "ResizeToContent",
    "OpenWindowedProjector",
    "AlwaysOnTopToggled",
    "alwaysOnTop",
    "ScreenRemoved",
    "QScreen*",
    "screen_"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOBSProjectorENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[13];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[16];
    char stringdata5[22];
    char stringdata6[19];
    char stringdata7[12];
    char stringdata8[14];
    char stringdata9[9];
    char stringdata10[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOBSProjectorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOBSProjectorENDCLASS_t qt_meta_stringdata_CLASSOBSProjectorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "OBSProjector"
        QT_MOC_LITERAL(13, 15),  // "EscapeTriggered"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 23),  // "OpenFullScreenProjector"
        QT_MOC_LITERAL(54, 15),  // "ResizeToContent"
        QT_MOC_LITERAL(70, 21),  // "OpenWindowedProjector"
        QT_MOC_LITERAL(92, 18),  // "AlwaysOnTopToggled"
        QT_MOC_LITERAL(111, 11),  // "alwaysOnTop"
        QT_MOC_LITERAL(123, 13),  // "ScreenRemoved"
        QT_MOC_LITERAL(137, 8),  // "QScreen*"
        QT_MOC_LITERAL(146, 7)   // "screen_"
    },
    "OBSProjector",
    "EscapeTriggered",
    "",
    "OpenFullScreenProjector",
    "ResizeToContent",
    "OpenWindowedProjector",
    "AlwaysOnTopToggled",
    "alwaysOnTop",
    "ScreenRemoved",
    "QScreen*",
    "screen_"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOBSProjectorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    1,   54,    2, 0x08,    5 /* Private */,
       8,    1,   57,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject OBSProjector::staticMetaObject = { {
    QMetaObject::SuperData::link<OBSQTDisplay::staticMetaObject>(),
    qt_meta_stringdata_CLASSOBSProjectorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOBSProjectorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOBSProjectorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OBSProjector, std::true_type>,
        // method 'EscapeTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenFullScreenProjector'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ResizeToContent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenWindowedProjector'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AlwaysOnTopToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ScreenRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QScreen *, std::false_type>
    >,
    nullptr
} };

void OBSProjector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSProjector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->EscapeTriggered(); break;
        case 1: _t->OpenFullScreenProjector(); break;
        case 2: _t->ResizeToContent(); break;
        case 3: _t->OpenWindowedProjector(); break;
        case 4: _t->AlwaysOnTopToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->ScreenRemoved((*reinterpret_cast< std::add_pointer_t<QScreen*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *OBSProjector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSProjector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOBSProjectorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return OBSQTDisplay::qt_metacast(_clname);
}

int OBSProjector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OBSQTDisplay::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
