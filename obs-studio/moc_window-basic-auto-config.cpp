/****************************************************************************
** Meta object code from reading C++ file 'window-basic-auto-config.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "window-basic-auto-config.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-auto-config.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAutoConfigENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAutoConfigENDCLASS = QtMocHelpers::stringData(
    "AutoConfig"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAutoConfigENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAutoConfigENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAutoConfigENDCLASS_t qt_meta_stringdata_CLASSAutoConfigENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10)   // "AutoConfig"
    },
    "AutoConfig"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAutoConfigENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject AutoConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizard::staticMetaObject>(),
    qt_meta_stringdata_CLASSAutoConfigENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAutoConfigENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAutoConfigENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AutoConfig, std::true_type>
    >,
    nullptr
} };

void AutoConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *AutoConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAutoConfigENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizard::qt_metacast(_clname);
}

int AutoConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAutoConfigStartPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAutoConfigStartPageENDCLASS = QtMocHelpers::stringData(
    "AutoConfigStartPage",
    "on_prioritizeStreaming_clicked",
    "",
    "on_prioritizeRecording_clicked",
    "PrioritizeVCam"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAutoConfigStartPageENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[20];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[31];
    char stringdata4[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAutoConfigStartPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAutoConfigStartPageENDCLASS_t qt_meta_stringdata_CLASSAutoConfigStartPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "AutoConfigStartPage"
        QT_MOC_LITERAL(20, 30),  // "on_prioritizeStreaming_clicked"
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 30),  // "on_prioritizeRecording_clicked"
        QT_MOC_LITERAL(83, 14)   // "PrioritizeVCam"
    },
    "AutoConfigStartPage",
    "on_prioritizeStreaming_clicked",
    "",
    "on_prioritizeRecording_clicked",
    "PrioritizeVCam"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAutoConfigStartPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    1 /* Public */,
       3,    0,   33,    2, 0x0a,    2 /* Public */,
       4,    0,   34,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AutoConfigStartPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSAutoConfigStartPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAutoConfigStartPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAutoConfigStartPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AutoConfigStartPage, std::true_type>,
        // method 'on_prioritizeStreaming_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_prioritizeRecording_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PrioritizeVCam'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AutoConfigStartPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutoConfigStartPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_prioritizeStreaming_clicked(); break;
        case 1: _t->on_prioritizeRecording_clicked(); break;
        case 2: _t->PrioritizeVCam(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *AutoConfigStartPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoConfigStartPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAutoConfigStartPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AutoConfigStartPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAutoConfigVideoPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAutoConfigVideoPageENDCLASS = QtMocHelpers::stringData(
    "AutoConfigVideoPage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAutoConfigVideoPageENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAutoConfigVideoPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAutoConfigVideoPageENDCLASS_t qt_meta_stringdata_CLASSAutoConfigVideoPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19)   // "AutoConfigVideoPage"
    },
    "AutoConfigVideoPage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAutoConfigVideoPageENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject AutoConfigVideoPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSAutoConfigVideoPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAutoConfigVideoPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAutoConfigVideoPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AutoConfigVideoPage, std::true_type>
    >,
    nullptr
} };

void AutoConfigVideoPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *AutoConfigVideoPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoConfigVideoPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAutoConfigVideoPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AutoConfigVideoPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAutoConfigStreamPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAutoConfigStreamPageENDCLASS = QtMocHelpers::stringData(
    "AutoConfigStreamPage",
    "on_show_clicked",
    "",
    "on_connectAccount_clicked",
    "on_disconnectAccount_clicked",
    "on_useStreamKey_clicked",
    "ServiceChanged",
    "UpdateKeyLink",
    "UpdateMoreInfoLink",
    "UpdateServerList",
    "UpdateCompleted",
    "reset_service_ui_fields",
    "std::string&",
    "service"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAutoConfigStreamPageENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[21];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[29];
    char stringdata5[24];
    char stringdata6[15];
    char stringdata7[14];
    char stringdata8[19];
    char stringdata9[17];
    char stringdata10[16];
    char stringdata11[24];
    char stringdata12[13];
    char stringdata13[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAutoConfigStreamPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAutoConfigStreamPageENDCLASS_t qt_meta_stringdata_CLASSAutoConfigStreamPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "AutoConfigStreamPage"
        QT_MOC_LITERAL(21, 15),  // "on_show_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 25),  // "on_connectAccount_clicked"
        QT_MOC_LITERAL(64, 28),  // "on_disconnectAccount_clicked"
        QT_MOC_LITERAL(93, 23),  // "on_useStreamKey_clicked"
        QT_MOC_LITERAL(117, 14),  // "ServiceChanged"
        QT_MOC_LITERAL(132, 13),  // "UpdateKeyLink"
        QT_MOC_LITERAL(146, 18),  // "UpdateMoreInfoLink"
        QT_MOC_LITERAL(165, 16),  // "UpdateServerList"
        QT_MOC_LITERAL(182, 15),  // "UpdateCompleted"
        QT_MOC_LITERAL(198, 23),  // "reset_service_ui_fields"
        QT_MOC_LITERAL(222, 12),  // "std::string&"
        QT_MOC_LITERAL(235, 7)   // "service"
    },
    "AutoConfigStreamPage",
    "on_show_clicked",
    "",
    "on_connectAccount_clicked",
    "on_disconnectAccount_clicked",
    "on_useStreamKey_clicked",
    "ServiceChanged",
    "UpdateKeyLink",
    "UpdateMoreInfoLink",
    "UpdateServerList",
    "UpdateCompleted",
    "reset_service_ui_fields",
    "std::string&",
    "service"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAutoConfigStreamPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x0a,    1 /* Public */,
       3,    0,   75,    2, 0x0a,    2 /* Public */,
       4,    0,   76,    2, 0x0a,    3 /* Public */,
       5,    0,   77,    2, 0x0a,    4 /* Public */,
       6,    0,   78,    2, 0x0a,    5 /* Public */,
       7,    0,   79,    2, 0x0a,    6 /* Public */,
       8,    0,   80,    2, 0x0a,    7 /* Public */,
       9,    0,   81,    2, 0x0a,    8 /* Public */,
      10,    0,   82,    2, 0x0a,    9 /* Public */,
      11,    1,   83,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject AutoConfigStreamPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSAutoConfigStreamPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAutoConfigStreamPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAutoConfigStreamPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AutoConfigStreamPage, std::true_type>,
        // method 'on_show_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_connectAccount_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_disconnectAccount_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_useStreamKey_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ServiceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateKeyLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateMoreInfoLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateServerList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_service_ui_fields'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::string &, std::false_type>
    >,
    nullptr
} };

void AutoConfigStreamPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutoConfigStreamPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_show_clicked(); break;
        case 1: _t->on_connectAccount_clicked(); break;
        case 2: _t->on_disconnectAccount_clicked(); break;
        case 3: _t->on_useStreamKey_clicked(); break;
        case 4: _t->ServiceChanged(); break;
        case 5: _t->UpdateKeyLink(); break;
        case 6: _t->UpdateMoreInfoLink(); break;
        case 7: _t->UpdateServerList(); break;
        case 8: _t->UpdateCompleted(); break;
        case 9: _t->reset_service_ui_fields((*reinterpret_cast< std::add_pointer_t<std::string&>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *AutoConfigStreamPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoConfigStreamPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAutoConfigStreamPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AutoConfigStreamPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAutoConfigTestPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAutoConfigTestPageENDCLASS = QtMocHelpers::stringData(
    "AutoConfigTestPage",
    "NextStage",
    "",
    "UpdateMessage",
    "message",
    "Failure",
    "Progress",
    "percentage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAutoConfigTestPageENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[19];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[8];
    char stringdata5[8];
    char stringdata6[9];
    char stringdata7[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAutoConfigTestPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAutoConfigTestPageENDCLASS_t qt_meta_stringdata_CLASSAutoConfigTestPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "AutoConfigTestPage"
        QT_MOC_LITERAL(19, 9),  // "NextStage"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 13),  // "UpdateMessage"
        QT_MOC_LITERAL(44, 7),  // "message"
        QT_MOC_LITERAL(52, 7),  // "Failure"
        QT_MOC_LITERAL(60, 8),  // "Progress"
        QT_MOC_LITERAL(69, 10)   // "percentage"
    },
    "AutoConfigTestPage",
    "NextStage",
    "",
    "UpdateMessage",
    "message",
    "Failure",
    "Progress",
    "percentage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAutoConfigTestPageENDCLASS[] = {

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
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    1,   39,    2, 0x0a,    2 /* Public */,
       5,    1,   42,    2, 0x0a,    4 /* Public */,
       6,    1,   45,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject AutoConfigTestPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSAutoConfigTestPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAutoConfigTestPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAutoConfigTestPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AutoConfigTestPage, std::true_type>,
        // method 'NextStage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'Failure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'Progress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void AutoConfigTestPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutoConfigTestPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->NextStage(); break;
        case 1: _t->UpdateMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->Failure((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->Progress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *AutoConfigTestPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoConfigTestPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAutoConfigTestPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AutoConfigTestPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
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
