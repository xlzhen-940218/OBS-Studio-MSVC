/****************************************************************************
** Meta object code from reading C++ file 'window-basic-status-bar.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "window-basic-status-bar.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-status-bar.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSStatusBarWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSStatusBarWidgetENDCLASS = QtMocHelpers::stringData(
    "StatusBarWidget"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSStatusBarWidgetENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSStatusBarWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSStatusBarWidgetENDCLASS_t qt_meta_stringdata_CLASSStatusBarWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15)   // "StatusBarWidget"
    },
    "StatusBarWidget"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSStatusBarWidgetENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject StatusBarWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSStatusBarWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSStatusBarWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSStatusBarWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StatusBarWidget, std::true_type>
    >,
    nullptr
} };

void StatusBarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *StatusBarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusBarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSStatusBarWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StatusBarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOBSBasicStatusBarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOBSBasicStatusBarENDCLASS = QtMocHelpers::stringData(
    "OBSBasicStatusBar",
    "UpdateCPUUsage",
    "",
    "clearMessage",
    "showMessage",
    "message",
    "timeout",
    "Reconnect",
    "seconds",
    "ReconnectSuccess",
    "UpdateStatusBar",
    "UpdateCurrentFPS",
    "UpdateIcons"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOBSBasicStatusBarENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[18];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[12];
    char stringdata5[8];
    char stringdata6[8];
    char stringdata7[10];
    char stringdata8[8];
    char stringdata9[17];
    char stringdata10[16];
    char stringdata11[17];
    char stringdata12[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOBSBasicStatusBarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOBSBasicStatusBarENDCLASS_t qt_meta_stringdata_CLASSOBSBasicStatusBarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "OBSBasicStatusBar"
        QT_MOC_LITERAL(18, 14),  // "UpdateCPUUsage"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 12),  // "clearMessage"
        QT_MOC_LITERAL(47, 11),  // "showMessage"
        QT_MOC_LITERAL(59, 7),  // "message"
        QT_MOC_LITERAL(67, 7),  // "timeout"
        QT_MOC_LITERAL(75, 9),  // "Reconnect"
        QT_MOC_LITERAL(85, 7),  // "seconds"
        QT_MOC_LITERAL(93, 16),  // "ReconnectSuccess"
        QT_MOC_LITERAL(110, 15),  // "UpdateStatusBar"
        QT_MOC_LITERAL(126, 16),  // "UpdateCurrentFPS"
        QT_MOC_LITERAL(143, 11)   // "UpdateIcons"
    },
    "OBSBasicStatusBar",
    "UpdateCPUUsage",
    "",
    "clearMessage",
    "showMessage",
    "message",
    "timeout",
    "Reconnect",
    "seconds",
    "ReconnectSuccess",
    "UpdateStatusBar",
    "UpdateCurrentFPS",
    "UpdateIcons"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOBSBasicStatusBarENDCLASS[] = {

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
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    2,   70,    2, 0x0a,    3 /* Public */,
       4,    1,   75,    2, 0x2a,    6 /* Public | MethodCloned */,
       7,    1,   78,    2, 0x08,    8 /* Private */,
       9,    0,   81,    2, 0x08,   10 /* Private */,
      10,    0,   82,    2, 0x08,   11 /* Private */,
      11,    0,   83,    2, 0x08,   12 /* Private */,
      12,    0,   84,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OBSBasicStatusBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QStatusBar::staticMetaObject>(),
    qt_meta_stringdata_CLASSOBSBasicStatusBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOBSBasicStatusBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOBSBasicStatusBarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OBSBasicStatusBar, std::true_type>,
        // method 'UpdateCPUUsage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Reconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'ReconnectSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateStatusBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateCurrentFPS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateIcons'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OBSBasicStatusBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSBasicStatusBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateCPUUsage(); break;
        case 1: _t->clearMessage(); break;
        case 2: _t->showMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->showMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->Reconnect((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->ReconnectSuccess(); break;
        case 6: _t->UpdateStatusBar(); break;
        case 7: _t->UpdateCurrentFPS(); break;
        case 8: _t->UpdateIcons(); break;
        default: ;
        }
    }
}

const QMetaObject *OBSBasicStatusBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicStatusBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOBSBasicStatusBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QStatusBar::qt_metacast(_clname);
}

int OBSBasicStatusBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStatusBar::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
