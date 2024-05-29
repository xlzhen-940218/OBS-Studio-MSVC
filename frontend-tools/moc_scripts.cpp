/****************************************************************************
** Meta object code from reading C++ file 'scripts.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "scripts.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scripts.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSScriptLogWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSScriptLogWindowENDCLASS = QtMocHelpers::stringData(
    "ScriptLogWindow",
    "AddLogMsg",
    "",
    "log_level",
    "msg",
    "ClearWindow",
    "Clear",
    "ScrollChanged",
    "val"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSScriptLogWindowENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[16];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[4];
    char stringdata5[12];
    char stringdata6[6];
    char stringdata7[14];
    char stringdata8[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSScriptLogWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSScriptLogWindowENDCLASS_t qt_meta_stringdata_CLASSScriptLogWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "ScriptLogWindow"
        QT_MOC_LITERAL(16, 9),  // "AddLogMsg"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 9),  // "log_level"
        QT_MOC_LITERAL(37, 3),  // "msg"
        QT_MOC_LITERAL(41, 11),  // "ClearWindow"
        QT_MOC_LITERAL(53, 5),  // "Clear"
        QT_MOC_LITERAL(59, 13),  // "ScrollChanged"
        QT_MOC_LITERAL(73, 3)   // "val"
    },
    "ScriptLogWindow",
    "AddLogMsg",
    "",
    "log_level",
    "msg",
    "ClearWindow",
    "Clear",
    "ScrollChanged",
    "val"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSScriptLogWindowENDCLASS[] = {

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
       1,    2,   38,    2, 0x0a,    1 /* Public */,
       5,    0,   43,    2, 0x0a,    4 /* Public */,
       6,    0,   44,    2, 0x0a,    5 /* Public */,
       7,    1,   45,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject ScriptLogWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSScriptLogWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSScriptLogWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSScriptLogWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScriptLogWindow, std::true_type>,
        // method 'AddLogMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'ClearWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ScrollChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ScriptLogWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScriptLogWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AddLogMsg((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->ClearWindow(); break;
        case 2: _t->Clear(); break;
        case 3: _t->ScrollChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ScriptLogWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptLogWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSScriptLogWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ScriptLogWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSScriptsToolENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSScriptsToolENDCLASS = QtMocHelpers::stringData(
    "ScriptsTool",
    "on_close_clicked",
    "",
    "on_addScripts_clicked",
    "on_removeScripts_clicked",
    "on_reloadScripts_clicked",
    "on_editScript_clicked",
    "on_scriptLog_clicked",
    "on_defaults_clicked",
    "OpenScriptParentDirectory",
    "on_scripts_currentRowChanged",
    "row",
    "on_pythonPathBrowse_clicked",
    "on_description_linkActivated",
    "link",
    "on_scripts_customContextMenuRequested",
    "pos"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSScriptsToolENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[12];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[25];
    char stringdata5[25];
    char stringdata6[22];
    char stringdata7[21];
    char stringdata8[20];
    char stringdata9[26];
    char stringdata10[29];
    char stringdata11[4];
    char stringdata12[28];
    char stringdata13[29];
    char stringdata14[5];
    char stringdata15[38];
    char stringdata16[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSScriptsToolENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSScriptsToolENDCLASS_t qt_meta_stringdata_CLASSScriptsToolENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "ScriptsTool"
        QT_MOC_LITERAL(12, 16),  // "on_close_clicked"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 21),  // "on_addScripts_clicked"
        QT_MOC_LITERAL(52, 24),  // "on_removeScripts_clicked"
        QT_MOC_LITERAL(77, 24),  // "on_reloadScripts_clicked"
        QT_MOC_LITERAL(102, 21),  // "on_editScript_clicked"
        QT_MOC_LITERAL(124, 20),  // "on_scriptLog_clicked"
        QT_MOC_LITERAL(145, 19),  // "on_defaults_clicked"
        QT_MOC_LITERAL(165, 25),  // "OpenScriptParentDirectory"
        QT_MOC_LITERAL(191, 28),  // "on_scripts_currentRowChanged"
        QT_MOC_LITERAL(220, 3),  // "row"
        QT_MOC_LITERAL(224, 27),  // "on_pythonPathBrowse_clicked"
        QT_MOC_LITERAL(252, 28),  // "on_description_linkActivated"
        QT_MOC_LITERAL(281, 4),  // "link"
        QT_MOC_LITERAL(286, 37),  // "on_scripts_customContextMenuR..."
        QT_MOC_LITERAL(324, 3)   // "pos"
    },
    "ScriptsTool",
    "on_close_clicked",
    "",
    "on_addScripts_clicked",
    "on_removeScripts_clicked",
    "on_reloadScripts_clicked",
    "on_editScript_clicked",
    "on_scriptLog_clicked",
    "on_defaults_clicked",
    "OpenScriptParentDirectory",
    "on_scripts_currentRowChanged",
    "row",
    "on_pythonPathBrowse_clicked",
    "on_description_linkActivated",
    "link",
    "on_scripts_customContextMenuRequested",
    "pos"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSScriptsToolENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x0a,    1 /* Public */,
       3,    0,   87,    2, 0x0a,    2 /* Public */,
       4,    0,   88,    2, 0x0a,    3 /* Public */,
       5,    0,   89,    2, 0x0a,    4 /* Public */,
       6,    0,   90,    2, 0x0a,    5 /* Public */,
       7,    0,   91,    2, 0x0a,    6 /* Public */,
       8,    0,   92,    2, 0x0a,    7 /* Public */,
       9,    0,   93,    2, 0x0a,    8 /* Public */,
      10,    1,   94,    2, 0x0a,    9 /* Public */,
      12,    0,   97,    2, 0x0a,   11 /* Public */,
      13,    1,   98,    2, 0x08,   12 /* Private */,
      15,    1,  101,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QPoint,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject ScriptsTool::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSScriptsToolENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSScriptsToolENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSScriptsToolENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScriptsTool, std::true_type>,
        // method 'on_close_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addScripts_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_removeScripts_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_reloadScripts_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_editScript_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_scriptLog_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_defaults_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenScriptParentDirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_scripts_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pythonPathBrowse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_description_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_scripts_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>
    >,
    nullptr
} };

void ScriptsTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScriptsTool *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_close_clicked(); break;
        case 1: _t->on_addScripts_clicked(); break;
        case 2: _t->on_removeScripts_clicked(); break;
        case 3: _t->on_reloadScripts_clicked(); break;
        case 4: _t->on_editScript_clicked(); break;
        case 5: _t->on_scriptLog_clicked(); break;
        case 6: _t->on_defaults_clicked(); break;
        case 7: _t->OpenScriptParentDirectory(); break;
        case 8: _t->on_scripts_currentRowChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_pythonPathBrowse_clicked(); break;
        case 10: _t->on_description_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->on_scripts_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ScriptsTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptsTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSScriptsToolENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ScriptsTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
