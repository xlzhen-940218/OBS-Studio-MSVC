/****************************************************************************
** Meta object code from reading C++ file 'window-basic-adv-audio.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "window-basic-adv-audio.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-adv-audio.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOBSBasicAdvAudioENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOBSBasicAdvAudioENDCLASS = QtMocHelpers::stringData(
    "OBSBasicAdvAudio",
    "SourceAdded",
    "",
    "OBSSource",
    "source",
    "SourceRemoved",
    "on_usePercent_toggled",
    "checked",
    "on_activeOnly_toggled"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOBSBasicAdvAudioENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[17];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[7];
    char stringdata5[14];
    char stringdata6[22];
    char stringdata7[8];
    char stringdata8[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOBSBasicAdvAudioENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOBSBasicAdvAudioENDCLASS_t qt_meta_stringdata_CLASSOBSBasicAdvAudioENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "OBSBasicAdvAudio"
        QT_MOC_LITERAL(17, 11),  // "SourceAdded"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 9),  // "OBSSource"
        QT_MOC_LITERAL(40, 6),  // "source"
        QT_MOC_LITERAL(47, 13),  // "SourceRemoved"
        QT_MOC_LITERAL(61, 21),  // "on_usePercent_toggled"
        QT_MOC_LITERAL(83, 7),  // "checked"
        QT_MOC_LITERAL(91, 21)   // "on_activeOnly_toggled"
    },
    "OBSBasicAdvAudio",
    "SourceAdded",
    "",
    "OBSSource",
    "source",
    "SourceRemoved",
    "on_usePercent_toggled",
    "checked",
    "on_activeOnly_toggled"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOBSBasicAdvAudioENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x0a,    1 /* Public */,
       5,    1,   41,    2, 0x0a,    3 /* Public */,
       6,    1,   44,    2, 0x0a,    5 /* Public */,
       8,    1,   47,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject OBSBasicAdvAudio::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSOBSBasicAdvAudioENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOBSBasicAdvAudioENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOBSBasicAdvAudioENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OBSBasicAdvAudio, std::true_type>,
        // method 'SourceAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'SourceRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'on_usePercent_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_activeOnly_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void OBSBasicAdvAudio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSBasicAdvAudio *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SourceAdded((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 1: _t->SourceRemoved((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 2: _t->on_usePercent_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_activeOnly_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *OBSBasicAdvAudio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicAdvAudio::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOBSBasicAdvAudioENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OBSBasicAdvAudio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
