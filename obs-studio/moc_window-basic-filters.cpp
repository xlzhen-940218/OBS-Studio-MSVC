/****************************************************************************
** Meta object code from reading C++ file 'window-basic-filters.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "window-basic-filters.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-filters.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOBSBasicFiltersENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOBSBasicFiltersENDCLASS = QtMocHelpers::stringData(
    "OBSBasicFilters",
    "AddFilter",
    "",
    "OBSSource",
    "filter",
    "focus",
    "RemoveFilter",
    "ReorderFilters",
    "RenameAsyncFilter",
    "RenameEffectFilter",
    "ResetFilters",
    "on_addAsyncFilter_clicked",
    "on_removeAsyncFilter_clicked",
    "on_moveAsyncFilterUp_clicked",
    "on_moveAsyncFilterDown_clicked",
    "on_asyncFilters_currentRowChanged",
    "row",
    "on_asyncFilters_customContextMenuRequested",
    "pos",
    "on_asyncFilters_GotFocus",
    "on_addEffectFilter_clicked",
    "on_removeEffectFilter_clicked",
    "on_moveEffectFilterUp_clicked",
    "on_moveEffectFilterDown_clicked",
    "on_effectFilters_currentRowChanged",
    "on_effectFilters_customContextMenuRequested",
    "on_effectFilters_GotFocus",
    "on_actionRemoveFilter_triggered",
    "on_actionMoveUp_triggered",
    "on_actionMoveDown_triggered",
    "on_actionRenameFilter_triggered",
    "CopyFilter",
    "PasteFilter",
    "FiltersMoved",
    "QModelIndex",
    "srcParent",
    "srcIdxStart",
    "srcIdxEnd",
    "dstParent",
    "dstIdx"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOBSBasicFiltersENDCLASS_t {
    uint offsetsAndSizes[80];
    char stringdata0[16];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[7];
    char stringdata5[6];
    char stringdata6[13];
    char stringdata7[15];
    char stringdata8[18];
    char stringdata9[19];
    char stringdata10[13];
    char stringdata11[26];
    char stringdata12[29];
    char stringdata13[29];
    char stringdata14[31];
    char stringdata15[34];
    char stringdata16[4];
    char stringdata17[43];
    char stringdata18[4];
    char stringdata19[25];
    char stringdata20[27];
    char stringdata21[30];
    char stringdata22[30];
    char stringdata23[32];
    char stringdata24[35];
    char stringdata25[44];
    char stringdata26[26];
    char stringdata27[32];
    char stringdata28[26];
    char stringdata29[28];
    char stringdata30[32];
    char stringdata31[11];
    char stringdata32[12];
    char stringdata33[13];
    char stringdata34[12];
    char stringdata35[10];
    char stringdata36[12];
    char stringdata37[10];
    char stringdata38[10];
    char stringdata39[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOBSBasicFiltersENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOBSBasicFiltersENDCLASS_t qt_meta_stringdata_CLASSOBSBasicFiltersENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "OBSBasicFilters"
        QT_MOC_LITERAL(16, 9),  // "AddFilter"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 9),  // "OBSSource"
        QT_MOC_LITERAL(37, 6),  // "filter"
        QT_MOC_LITERAL(44, 5),  // "focus"
        QT_MOC_LITERAL(50, 12),  // "RemoveFilter"
        QT_MOC_LITERAL(63, 14),  // "ReorderFilters"
        QT_MOC_LITERAL(78, 17),  // "RenameAsyncFilter"
        QT_MOC_LITERAL(96, 18),  // "RenameEffectFilter"
        QT_MOC_LITERAL(115, 12),  // "ResetFilters"
        QT_MOC_LITERAL(128, 25),  // "on_addAsyncFilter_clicked"
        QT_MOC_LITERAL(154, 28),  // "on_removeAsyncFilter_clicked"
        QT_MOC_LITERAL(183, 28),  // "on_moveAsyncFilterUp_clicked"
        QT_MOC_LITERAL(212, 30),  // "on_moveAsyncFilterDown_clicked"
        QT_MOC_LITERAL(243, 33),  // "on_asyncFilters_currentRowCha..."
        QT_MOC_LITERAL(277, 3),  // "row"
        QT_MOC_LITERAL(281, 42),  // "on_asyncFilters_customContext..."
        QT_MOC_LITERAL(324, 3),  // "pos"
        QT_MOC_LITERAL(328, 24),  // "on_asyncFilters_GotFocus"
        QT_MOC_LITERAL(353, 26),  // "on_addEffectFilter_clicked"
        QT_MOC_LITERAL(380, 29),  // "on_removeEffectFilter_clicked"
        QT_MOC_LITERAL(410, 29),  // "on_moveEffectFilterUp_clicked"
        QT_MOC_LITERAL(440, 31),  // "on_moveEffectFilterDown_clicked"
        QT_MOC_LITERAL(472, 34),  // "on_effectFilters_currentRowCh..."
        QT_MOC_LITERAL(507, 43),  // "on_effectFilters_customContex..."
        QT_MOC_LITERAL(551, 25),  // "on_effectFilters_GotFocus"
        QT_MOC_LITERAL(577, 31),  // "on_actionRemoveFilter_triggered"
        QT_MOC_LITERAL(609, 25),  // "on_actionMoveUp_triggered"
        QT_MOC_LITERAL(635, 27),  // "on_actionMoveDown_triggered"
        QT_MOC_LITERAL(663, 31),  // "on_actionRenameFilter_triggered"
        QT_MOC_LITERAL(695, 10),  // "CopyFilter"
        QT_MOC_LITERAL(706, 11),  // "PasteFilter"
        QT_MOC_LITERAL(718, 12),  // "FiltersMoved"
        QT_MOC_LITERAL(731, 11),  // "QModelIndex"
        QT_MOC_LITERAL(743, 9),  // "srcParent"
        QT_MOC_LITERAL(753, 11),  // "srcIdxStart"
        QT_MOC_LITERAL(765, 9),  // "srcIdxEnd"
        QT_MOC_LITERAL(775, 9),  // "dstParent"
        QT_MOC_LITERAL(785, 6)   // "dstIdx"
    },
    "OBSBasicFilters",
    "AddFilter",
    "",
    "OBSSource",
    "filter",
    "focus",
    "RemoveFilter",
    "ReorderFilters",
    "RenameAsyncFilter",
    "RenameEffectFilter",
    "ResetFilters",
    "on_addAsyncFilter_clicked",
    "on_removeAsyncFilter_clicked",
    "on_moveAsyncFilterUp_clicked",
    "on_moveAsyncFilterDown_clicked",
    "on_asyncFilters_currentRowChanged",
    "row",
    "on_asyncFilters_customContextMenuRequested",
    "pos",
    "on_asyncFilters_GotFocus",
    "on_addEffectFilter_clicked",
    "on_removeEffectFilter_clicked",
    "on_moveEffectFilterUp_clicked",
    "on_moveEffectFilterDown_clicked",
    "on_effectFilters_currentRowChanged",
    "on_effectFilters_customContextMenuRequested",
    "on_effectFilters_GotFocus",
    "on_actionRemoveFilter_triggered",
    "on_actionMoveUp_triggered",
    "on_actionMoveDown_triggered",
    "on_actionRenameFilter_triggered",
    "CopyFilter",
    "PasteFilter",
    "FiltersMoved",
    "QModelIndex",
    "srcParent",
    "srcIdxStart",
    "srcIdxEnd",
    "dstParent",
    "dstIdx"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOBSBasicFiltersENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  182,    2, 0x08,    1 /* Private */,
       1,    1,  187,    2, 0x28,    4 /* Private | MethodCloned */,
       6,    1,  190,    2, 0x08,    6 /* Private */,
       7,    0,  193,    2, 0x08,    8 /* Private */,
       8,    0,  194,    2, 0x08,    9 /* Private */,
       9,    0,  195,    2, 0x08,   10 /* Private */,
      10,    0,  196,    2, 0x08,   11 /* Private */,
      11,    0,  197,    2, 0x08,   12 /* Private */,
      12,    0,  198,    2, 0x08,   13 /* Private */,
      13,    0,  199,    2, 0x08,   14 /* Private */,
      14,    0,  200,    2, 0x08,   15 /* Private */,
      15,    1,  201,    2, 0x08,   16 /* Private */,
      17,    1,  204,    2, 0x08,   18 /* Private */,
      19,    0,  207,    2, 0x08,   20 /* Private */,
      20,    0,  208,    2, 0x08,   21 /* Private */,
      21,    0,  209,    2, 0x08,   22 /* Private */,
      22,    0,  210,    2, 0x08,   23 /* Private */,
      23,    0,  211,    2, 0x08,   24 /* Private */,
      24,    1,  212,    2, 0x08,   25 /* Private */,
      25,    1,  215,    2, 0x08,   27 /* Private */,
      26,    0,  218,    2, 0x08,   29 /* Private */,
      27,    0,  219,    2, 0x08,   30 /* Private */,
      28,    0,  220,    2, 0x08,   31 /* Private */,
      29,    0,  221,    2, 0x08,   32 /* Private */,
      30,    0,  222,    2, 0x08,   33 /* Private */,
      31,    0,  223,    2, 0x08,   34 /* Private */,
      32,    0,  224,    2, 0x08,   35 /* Private */,
      33,    5,  225,    2, 0x08,   36 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QPoint,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QPoint,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34, QMetaType::Int, QMetaType::Int, 0x80000000 | 34, QMetaType::Int,   35,   36,   37,   38,   39,

       0        // eod
};

Q_CONSTINIT const QMetaObject OBSBasicFilters::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSOBSBasicFiltersENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOBSBasicFiltersENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOBSBasicFiltersENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OBSBasicFilters, std::true_type>,
        // method 'AddFilter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'AddFilter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'RemoveFilter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'ReorderFilters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RenameAsyncFilter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RenameEffectFilter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ResetFilters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addAsyncFilter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_removeAsyncFilter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moveAsyncFilterUp_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moveAsyncFilterDown_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_asyncFilters_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_asyncFilters_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_asyncFilters_GotFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addEffectFilter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_removeEffectFilter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moveEffectFilterUp_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_moveEffectFilterDown_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_effectFilters_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_effectFilters_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_effectFilters_GotFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRemoveFilter_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMoveUp_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMoveDown_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRenameFilter_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CopyFilter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PasteFilter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'FiltersMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void OBSBasicFilters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSBasicFilters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AddFilter((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->AddFilter((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 2: _t->RemoveFilter((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 3: _t->ReorderFilters(); break;
        case 4: _t->RenameAsyncFilter(); break;
        case 5: _t->RenameEffectFilter(); break;
        case 6: _t->ResetFilters(); break;
        case 7: _t->on_addAsyncFilter_clicked(); break;
        case 8: _t->on_removeAsyncFilter_clicked(); break;
        case 9: _t->on_moveAsyncFilterUp_clicked(); break;
        case 10: _t->on_moveAsyncFilterDown_clicked(); break;
        case 11: _t->on_asyncFilters_currentRowChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_asyncFilters_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 13: _t->on_asyncFilters_GotFocus(); break;
        case 14: _t->on_addEffectFilter_clicked(); break;
        case 15: _t->on_removeEffectFilter_clicked(); break;
        case 16: _t->on_moveEffectFilterUp_clicked(); break;
        case 17: _t->on_moveEffectFilterDown_clicked(); break;
        case 18: _t->on_effectFilters_currentRowChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->on_effectFilters_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 20: _t->on_effectFilters_GotFocus(); break;
        case 21: _t->on_actionRemoveFilter_triggered(); break;
        case 22: _t->on_actionMoveUp_triggered(); break;
        case 23: _t->on_actionMoveDown_triggered(); break;
        case 24: _t->on_actionRenameFilter_triggered(); break;
        case 25: _t->CopyFilter(); break;
        case 26: _t->PasteFilter(); break;
        case 27: _t->FiltersMoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObject *OBSBasicFilters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicFilters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOBSBasicFiltersENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OBSBasicFilters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
