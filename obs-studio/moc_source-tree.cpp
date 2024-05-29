/****************************************************************************
** Meta object code from reading C++ file 'source-tree.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "source-tree.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'source-tree.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSourceTreeItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSourceTreeItemENDCLASS = QtMocHelpers::stringData(
    "SourceTreeItem",
    "Clear",
    "",
    "EnterEditMode",
    "ExitEditMode",
    "save",
    "VisibilityChanged",
    "visible",
    "LockedChanged",
    "locked",
    "Renamed",
    "name",
    "ExpandClicked",
    "checked",
    "Select",
    "Deselect"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSourceTreeItemENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[15];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[13];
    char stringdata5[5];
    char stringdata6[18];
    char stringdata7[8];
    char stringdata8[14];
    char stringdata9[7];
    char stringdata10[8];
    char stringdata11[5];
    char stringdata12[14];
    char stringdata13[8];
    char stringdata14[7];
    char stringdata15[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSourceTreeItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSourceTreeItemENDCLASS_t qt_meta_stringdata_CLASSSourceTreeItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "SourceTreeItem"
        QT_MOC_LITERAL(15, 5),  // "Clear"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 13),  // "EnterEditMode"
        QT_MOC_LITERAL(36, 12),  // "ExitEditMode"
        QT_MOC_LITERAL(49, 4),  // "save"
        QT_MOC_LITERAL(54, 17),  // "VisibilityChanged"
        QT_MOC_LITERAL(72, 7),  // "visible"
        QT_MOC_LITERAL(80, 13),  // "LockedChanged"
        QT_MOC_LITERAL(94, 6),  // "locked"
        QT_MOC_LITERAL(101, 7),  // "Renamed"
        QT_MOC_LITERAL(109, 4),  // "name"
        QT_MOC_LITERAL(114, 13),  // "ExpandClicked"
        QT_MOC_LITERAL(128, 7),  // "checked"
        QT_MOC_LITERAL(136, 6),  // "Select"
        QT_MOC_LITERAL(143, 8)   // "Deselect"
    },
    "SourceTreeItem",
    "Clear",
    "",
    "EnterEditMode",
    "ExitEditMode",
    "save",
    "VisibilityChanged",
    "visible",
    "LockedChanged",
    "locked",
    "Renamed",
    "name",
    "ExpandClicked",
    "checked",
    "Select",
    "Deselect"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSourceTreeItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    1,   70,    2, 0x08,    3 /* Private */,
       6,    1,   73,    2, 0x08,    5 /* Private */,
       8,    1,   76,    2, 0x08,    7 /* Private */,
      10,    1,   79,    2, 0x08,    9 /* Private */,
      12,    1,   82,    2, 0x08,   11 /* Private */,
      14,    0,   85,    2, 0x08,   13 /* Private */,
      15,    0,   86,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SourceTreeItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSSourceTreeItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSourceTreeItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSourceTreeItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SourceTreeItem, std::true_type>,
        // method 'Clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'EnterEditMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ExitEditMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'VisibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'LockedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'Renamed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ExpandClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'Select'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Deselect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SourceTreeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SourceTreeItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Clear(); break;
        case 1: _t->EnterEditMode(); break;
        case 2: _t->ExitEditMode((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->VisibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->LockedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->Renamed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->ExpandClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->Select(); break;
        case 8: _t->Deselect(); break;
        default: ;
        }
    }
}

const QMetaObject *SourceTreeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTreeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSourceTreeItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int SourceTreeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSourceTreeModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSourceTreeModelENDCLASS = QtMocHelpers::stringData(
    "SourceTreeModel"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSourceTreeModelENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSourceTreeModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSourceTreeModelENDCLASS_t qt_meta_stringdata_CLASSSourceTreeModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15)   // "SourceTreeModel"
    },
    "SourceTreeModel"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSourceTreeModelENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject SourceTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSSourceTreeModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSourceTreeModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSourceTreeModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SourceTreeModel, std::true_type>
    >,
    nullptr
} };

void SourceTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *SourceTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSourceTreeModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int SourceTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSourceTreeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSourceTreeENDCLASS = QtMocHelpers::stringData(
    "SourceTree",
    "ReorderItems",
    "",
    "RefreshItems",
    "Remove",
    "OBSSceneItem",
    "item",
    "OBSScene",
    "scene",
    "GroupSelectedItems",
    "UngroupSelectedGroups",
    "AddGroup",
    "Edit",
    "idx",
    "NewGroupEdit"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSourceTreeENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[7];
    char stringdata5[13];
    char stringdata6[5];
    char stringdata7[9];
    char stringdata8[6];
    char stringdata9[19];
    char stringdata10[22];
    char stringdata11[9];
    char stringdata12[5];
    char stringdata13[4];
    char stringdata14[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSourceTreeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSourceTreeENDCLASS_t qt_meta_stringdata_CLASSSourceTreeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "SourceTree"
        QT_MOC_LITERAL(11, 12),  // "ReorderItems"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 12),  // "RefreshItems"
        QT_MOC_LITERAL(38, 6),  // "Remove"
        QT_MOC_LITERAL(45, 12),  // "OBSSceneItem"
        QT_MOC_LITERAL(58, 4),  // "item"
        QT_MOC_LITERAL(63, 8),  // "OBSScene"
        QT_MOC_LITERAL(72, 5),  // "scene"
        QT_MOC_LITERAL(78, 18),  // "GroupSelectedItems"
        QT_MOC_LITERAL(97, 21),  // "UngroupSelectedGroups"
        QT_MOC_LITERAL(119, 8),  // "AddGroup"
        QT_MOC_LITERAL(128, 4),  // "Edit"
        QT_MOC_LITERAL(133, 3),  // "idx"
        QT_MOC_LITERAL(137, 12)   // "NewGroupEdit"
    },
    "SourceTree",
    "ReorderItems",
    "",
    "RefreshItems",
    "Remove",
    "OBSSceneItem",
    "item",
    "OBSScene",
    "scene",
    "GroupSelectedItems",
    "UngroupSelectedGroups",
    "AddGroup",
    "Edit",
    "idx",
    "NewGroupEdit"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSourceTreeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    0,   63,    2, 0x0a,    2 /* Public */,
       4,    2,   64,    2, 0x0a,    3 /* Public */,
       9,    0,   69,    2, 0x0a,    6 /* Public */,
      10,    0,   70,    2, 0x0a,    7 /* Public */,
      11,    0,   71,    2, 0x0a,    8 /* Public */,
      12,    1,   72,    2, 0x0a,    9 /* Public */,
      14,    1,   75,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject SourceTree::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_meta_stringdata_CLASSSourceTreeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSourceTreeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSourceTreeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SourceTree, std::true_type>,
        // method 'ReorderItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RefreshItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Remove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSceneItem, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSScene, std::false_type>,
        // method 'GroupSelectedItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UngroupSelectedGroups'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AddGroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Edit'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'NewGroupEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void SourceTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SourceTree *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ReorderItems(); break;
        case 1: _t->RefreshItems(); break;
        case 2: _t->Remove((*reinterpret_cast< std::add_pointer_t<OBSSceneItem>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OBSScene>>(_a[2]))); break;
        case 3: _t->GroupSelectedItems(); break;
        case 4: _t->UngroupSelectedGroups(); break;
        case 5: _t->AddGroup(); break;
        case 6: { bool _r = _t->Edit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->NewGroupEdit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SourceTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSourceTreeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int SourceTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSourceTreeDelegateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSourceTreeDelegateENDCLASS = QtMocHelpers::stringData(
    "SourceTreeDelegate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSourceTreeDelegateENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSourceTreeDelegateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSourceTreeDelegateENDCLASS_t qt_meta_stringdata_CLASSSourceTreeDelegateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18)   // "SourceTreeDelegate"
    },
    "SourceTreeDelegate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSourceTreeDelegateENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject SourceTreeDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_CLASSSourceTreeDelegateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSourceTreeDelegateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSourceTreeDelegateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SourceTreeDelegate, std::true_type>
    >,
    nullptr
} };

void SourceTreeDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *SourceTreeDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTreeDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSourceTreeDelegateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int SourceTreeDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
