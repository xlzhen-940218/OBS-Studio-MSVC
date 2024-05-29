/****************************************************************************
** Meta object code from reading C++ file 'adv-audio-control.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "adv-audio-control.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adv-audio-control.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOBSAdvAudioCtrlENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOBSAdvAudioCtrlENDCLASS = QtMocHelpers::stringData(
    "OBSAdvAudioCtrl",
    "SourceActiveChanged",
    "",
    "active",
    "SourceFlagsChanged",
    "uint32_t",
    "flags",
    "SourceVolumeChanged",
    "volume",
    "SourceSyncChanged",
    "int64_t",
    "offset",
    "SourceMonitoringTypeChanged",
    "type",
    "SourceMixersChanged",
    "mixers",
    "SourceBalanceChanged",
    "balance",
    "SetSourceName",
    "newName",
    "volumeChanged",
    "db",
    "percentChanged",
    "percent",
    "downmixMonoChanged",
    "checked",
    "balanceChanged",
    "val",
    "syncOffsetChanged",
    "milliseconds",
    "monitoringTypeChanged",
    "index",
    "ResetBalance"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOBSAdvAudioCtrlENDCLASS_t {
    uint offsetsAndSizes[66];
    char stringdata0[16];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[19];
    char stringdata5[9];
    char stringdata6[6];
    char stringdata7[20];
    char stringdata8[7];
    char stringdata9[18];
    char stringdata10[8];
    char stringdata11[7];
    char stringdata12[28];
    char stringdata13[5];
    char stringdata14[20];
    char stringdata15[7];
    char stringdata16[21];
    char stringdata17[8];
    char stringdata18[14];
    char stringdata19[8];
    char stringdata20[14];
    char stringdata21[3];
    char stringdata22[15];
    char stringdata23[8];
    char stringdata24[19];
    char stringdata25[8];
    char stringdata26[15];
    char stringdata27[4];
    char stringdata28[18];
    char stringdata29[13];
    char stringdata30[22];
    char stringdata31[6];
    char stringdata32[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOBSAdvAudioCtrlENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOBSAdvAudioCtrlENDCLASS_t qt_meta_stringdata_CLASSOBSAdvAudioCtrlENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "OBSAdvAudioCtrl"
        QT_MOC_LITERAL(16, 19),  // "SourceActiveChanged"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 6),  // "active"
        QT_MOC_LITERAL(44, 18),  // "SourceFlagsChanged"
        QT_MOC_LITERAL(63, 8),  // "uint32_t"
        QT_MOC_LITERAL(72, 5),  // "flags"
        QT_MOC_LITERAL(78, 19),  // "SourceVolumeChanged"
        QT_MOC_LITERAL(98, 6),  // "volume"
        QT_MOC_LITERAL(105, 17),  // "SourceSyncChanged"
        QT_MOC_LITERAL(123, 7),  // "int64_t"
        QT_MOC_LITERAL(131, 6),  // "offset"
        QT_MOC_LITERAL(138, 27),  // "SourceMonitoringTypeChanged"
        QT_MOC_LITERAL(166, 4),  // "type"
        QT_MOC_LITERAL(171, 19),  // "SourceMixersChanged"
        QT_MOC_LITERAL(191, 6),  // "mixers"
        QT_MOC_LITERAL(198, 20),  // "SourceBalanceChanged"
        QT_MOC_LITERAL(219, 7),  // "balance"
        QT_MOC_LITERAL(227, 13),  // "SetSourceName"
        QT_MOC_LITERAL(241, 7),  // "newName"
        QT_MOC_LITERAL(249, 13),  // "volumeChanged"
        QT_MOC_LITERAL(263, 2),  // "db"
        QT_MOC_LITERAL(266, 14),  // "percentChanged"
        QT_MOC_LITERAL(281, 7),  // "percent"
        QT_MOC_LITERAL(289, 18),  // "downmixMonoChanged"
        QT_MOC_LITERAL(308, 7),  // "checked"
        QT_MOC_LITERAL(316, 14),  // "balanceChanged"
        QT_MOC_LITERAL(331, 3),  // "val"
        QT_MOC_LITERAL(335, 17),  // "syncOffsetChanged"
        QT_MOC_LITERAL(353, 12),  // "milliseconds"
        QT_MOC_LITERAL(366, 21),  // "monitoringTypeChanged"
        QT_MOC_LITERAL(388, 5),  // "index"
        QT_MOC_LITERAL(394, 12)   // "ResetBalance"
    },
    "OBSAdvAudioCtrl",
    "SourceActiveChanged",
    "",
    "active",
    "SourceFlagsChanged",
    "uint32_t",
    "flags",
    "SourceVolumeChanged",
    "volume",
    "SourceSyncChanged",
    "int64_t",
    "offset",
    "SourceMonitoringTypeChanged",
    "type",
    "SourceMixersChanged",
    "mixers",
    "SourceBalanceChanged",
    "balance",
    "SetSourceName",
    "newName",
    "volumeChanged",
    "db",
    "percentChanged",
    "percent",
    "downmixMonoChanged",
    "checked",
    "balanceChanged",
    "val",
    "syncOffsetChanged",
    "milliseconds",
    "monitoringTypeChanged",
    "index",
    "ResetBalance"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOBSAdvAudioCtrlENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x0a,    1 /* Public */,
       4,    1,  107,    2, 0x0a,    3 /* Public */,
       7,    1,  110,    2, 0x0a,    5 /* Public */,
       9,    1,  113,    2, 0x0a,    7 /* Public */,
      12,    1,  116,    2, 0x0a,    9 /* Public */,
      14,    1,  119,    2, 0x0a,   11 /* Public */,
      16,    1,  122,    2, 0x0a,   13 /* Public */,
      18,    1,  125,    2, 0x0a,   15 /* Public */,
      20,    1,  128,    2, 0x0a,   17 /* Public */,
      22,    1,  131,    2, 0x0a,   19 /* Public */,
      24,    1,  134,    2, 0x0a,   21 /* Public */,
      26,    1,  137,    2, 0x0a,   23 /* Public */,
      28,    1,  140,    2, 0x0a,   25 /* Public */,
      30,    1,  143,    2, 0x0a,   27 /* Public */,
      32,    0,  146,    2, 0x0a,   29 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, 0x80000000 | 5,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Double,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OBSAdvAudioCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOBSAdvAudioCtrlENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOBSAdvAudioCtrlENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOBSAdvAudioCtrlENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OBSAdvAudioCtrl, std::true_type>,
        // method 'SourceActiveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'SourceFlagsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'SourceVolumeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'SourceSyncChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int64_t, std::false_type>,
        // method 'SourceMonitoringTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SourceMixersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'SourceBalanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SetSourceName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'volumeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'percentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'downmixMonoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'balanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'syncOffsetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'monitoringTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'ResetBalance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OBSAdvAudioCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSAdvAudioCtrl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SourceActiveChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->SourceFlagsChanged((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 2: _t->SourceVolumeChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 3: _t->SourceSyncChanged((*reinterpret_cast< std::add_pointer_t<int64_t>>(_a[1]))); break;
        case 4: _t->SourceMonitoringTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->SourceMixersChanged((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 6: _t->SourceBalanceChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->SetSourceName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->volumeChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 9: _t->percentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->downmixMonoChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->balanceChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->syncOffsetChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->monitoringTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->ResetBalance(); break;
        default: ;
        }
    }
}

const QMetaObject *OBSAdvAudioCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSAdvAudioCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOBSAdvAudioCtrlENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OBSAdvAudioCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
