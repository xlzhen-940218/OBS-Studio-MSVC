/****************************************************************************
** Meta object code from reading C++ file 'context-bar-controls.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "context-bar-controls.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'context-bar-controls.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSourceToolbarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSourceToolbarENDCLASS = QtMocHelpers::stringData(
    "SourceToolbar",
    "Update",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSourceToolbarENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[14];
    char stringdata1[7];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSourceToolbarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSourceToolbarENDCLASS_t qt_meta_stringdata_CLASSSourceToolbarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "SourceToolbar"
        QT_MOC_LITERAL(14, 6),  // "Update"
        QT_MOC_LITERAL(21, 0)   // ""
    },
    "SourceToolbar",
    "Update",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSourceToolbarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SourceToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSSourceToolbarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSourceToolbarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSourceToolbarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SourceToolbar, std::true_type>,
        // method 'Update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SourceToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SourceToolbar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Update(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *SourceToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSourceToolbarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SourceToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSBrowserToolbarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSBrowserToolbarENDCLASS = QtMocHelpers::stringData(
    "BrowserToolbar",
    "on_refresh_clicked",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBrowserToolbarENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[15];
    char stringdata1[19];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBrowserToolbarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBrowserToolbarENDCLASS_t qt_meta_stringdata_CLASSBrowserToolbarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "BrowserToolbar"
        QT_MOC_LITERAL(15, 18),  // "on_refresh_clicked"
        QT_MOC_LITERAL(34, 0)   // ""
    },
    "BrowserToolbar",
    "on_refresh_clicked",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBrowserToolbarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject BrowserToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<SourceToolbar::staticMetaObject>(),
    qt_meta_stringdata_CLASSBrowserToolbarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBrowserToolbarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBrowserToolbarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BrowserToolbar, std::true_type>,
        // method 'on_refresh_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BrowserToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowserToolbar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_refresh_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *BrowserToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrowserToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBrowserToolbarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SourceToolbar::qt_metacast(_clname);
}

int BrowserToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SourceToolbar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSComboSelectToolbarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSComboSelectToolbarENDCLASS = QtMocHelpers::stringData(
    "ComboSelectToolbar",
    "on_device_currentIndexChanged",
    "",
    "idx"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSComboSelectToolbarENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[19];
    char stringdata1[30];
    char stringdata2[1];
    char stringdata3[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSComboSelectToolbarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSComboSelectToolbarENDCLASS_t qt_meta_stringdata_CLASSComboSelectToolbarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "ComboSelectToolbar"
        QT_MOC_LITERAL(19, 29),  // "on_device_currentIndexChanged"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 3)   // "idx"
    },
    "ComboSelectToolbar",
    "on_device_currentIndexChanged",
    "",
    "idx"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSComboSelectToolbarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject ComboSelectToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<SourceToolbar::staticMetaObject>(),
    qt_meta_stringdata_CLASSComboSelectToolbarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSComboSelectToolbarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSComboSelectToolbarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ComboSelectToolbar, std::true_type>,
        // method 'on_device_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ComboSelectToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComboSelectToolbar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_device_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ComboSelectToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComboSelectToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSComboSelectToolbarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SourceToolbar::qt_metacast(_clname);
}

int ComboSelectToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SourceToolbar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAudioCaptureToolbarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAudioCaptureToolbarENDCLASS = QtMocHelpers::stringData(
    "AudioCaptureToolbar"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAudioCaptureToolbarENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAudioCaptureToolbarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAudioCaptureToolbarENDCLASS_t qt_meta_stringdata_CLASSAudioCaptureToolbarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19)   // "AudioCaptureToolbar"
    },
    "AudioCaptureToolbar"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAudioCaptureToolbarENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject AudioCaptureToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<ComboSelectToolbar::staticMetaObject>(),
    qt_meta_stringdata_CLASSAudioCaptureToolbarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAudioCaptureToolbarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAudioCaptureToolbarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AudioCaptureToolbar, std::true_type>
    >,
    nullptr
} };

void AudioCaptureToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *AudioCaptureToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioCaptureToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAudioCaptureToolbarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ComboSelectToolbar::qt_metacast(_clname);
}

int AudioCaptureToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComboSelectToolbar::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWindowCaptureToolbarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWindowCaptureToolbarENDCLASS = QtMocHelpers::stringData(
    "WindowCaptureToolbar"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWindowCaptureToolbarENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWindowCaptureToolbarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWindowCaptureToolbarENDCLASS_t qt_meta_stringdata_CLASSWindowCaptureToolbarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20)   // "WindowCaptureToolbar"
    },
    "WindowCaptureToolbar"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWindowCaptureToolbarENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject WindowCaptureToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<ComboSelectToolbar::staticMetaObject>(),
    qt_meta_stringdata_CLASSWindowCaptureToolbarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWindowCaptureToolbarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWindowCaptureToolbarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WindowCaptureToolbar, std::true_type>
    >,
    nullptr
} };

void WindowCaptureToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *WindowCaptureToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowCaptureToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWindowCaptureToolbarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ComboSelectToolbar::qt_metacast(_clname);
}

int WindowCaptureToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComboSelectToolbar::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSApplicationAudioCaptureToolbarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSApplicationAudioCaptureToolbarENDCLASS = QtMocHelpers::stringData(
    "ApplicationAudioCaptureToolbar"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSApplicationAudioCaptureToolbarENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSApplicationAudioCaptureToolbarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSApplicationAudioCaptureToolbarENDCLASS_t qt_meta_stringdata_CLASSApplicationAudioCaptureToolbarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30)   // "ApplicationAudioCaptureToolbar"
    },
    "ApplicationAudioCaptureToolbar"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSApplicationAudioCaptureToolbarENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject ApplicationAudioCaptureToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<ComboSelectToolbar::staticMetaObject>(),
    qt_meta_stringdata_CLASSApplicationAudioCaptureToolbarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSApplicationAudioCaptureToolbarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSApplicationAudioCaptureToolbarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ApplicationAudioCaptureToolbar, std::true_type>
    >,
    nullptr
} };

void ApplicationAudioCaptureToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *ApplicationAudioCaptureToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplicationAudioCaptureToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSApplicationAudioCaptureToolbarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ComboSelectToolbar::qt_metacast(_clname);
}

int ApplicationAudioCaptureToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComboSelectToolbar::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDisplayCaptureToolbarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDisplayCaptureToolbarENDCLASS = QtMocHelpers::stringData(
    "DisplayCaptureToolbar"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDisplayCaptureToolbarENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDisplayCaptureToolbarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDisplayCaptureToolbarENDCLASS_t qt_meta_stringdata_CLASSDisplayCaptureToolbarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21)   // "DisplayCaptureToolbar"
    },
    "DisplayCaptureToolbar"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDisplayCaptureToolbarENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject DisplayCaptureToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<ComboSelectToolbar::staticMetaObject>(),
    qt_meta_stringdata_CLASSDisplayCaptureToolbarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDisplayCaptureToolbarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDisplayCaptureToolbarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DisplayCaptureToolbar, std::true_type>
    >,
    nullptr
} };

void DisplayCaptureToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *DisplayCaptureToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayCaptureToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDisplayCaptureToolbarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ComboSelectToolbar::qt_metacast(_clname);
}

int DisplayCaptureToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComboSelectToolbar::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDeviceCaptureToolbarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDeviceCaptureToolbarENDCLASS = QtMocHelpers::stringData(
    "DeviceCaptureToolbar",
    "on_activateButton_clicked",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDeviceCaptureToolbarENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[21];
    char stringdata1[26];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDeviceCaptureToolbarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDeviceCaptureToolbarENDCLASS_t qt_meta_stringdata_CLASSDeviceCaptureToolbarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "DeviceCaptureToolbar"
        QT_MOC_LITERAL(21, 25),  // "on_activateButton_clicked"
        QT_MOC_LITERAL(47, 0)   // ""
    },
    "DeviceCaptureToolbar",
    "on_activateButton_clicked",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDeviceCaptureToolbarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DeviceCaptureToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSDeviceCaptureToolbarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDeviceCaptureToolbarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDeviceCaptureToolbarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DeviceCaptureToolbar, std::true_type>,
        // method 'on_activateButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DeviceCaptureToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceCaptureToolbar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_activateButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *DeviceCaptureToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceCaptureToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDeviceCaptureToolbarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DeviceCaptureToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGameCaptureToolbarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGameCaptureToolbarENDCLASS = QtMocHelpers::stringData(
    "GameCaptureToolbar",
    "on_mode_currentIndexChanged",
    "",
    "idx",
    "on_window_currentIndexChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGameCaptureToolbarENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[19];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGameCaptureToolbarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGameCaptureToolbarENDCLASS_t qt_meta_stringdata_CLASSGameCaptureToolbarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "GameCaptureToolbar"
        QT_MOC_LITERAL(19, 27),  // "on_mode_currentIndexChanged"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 3),  // "idx"
        QT_MOC_LITERAL(52, 29)   // "on_window_currentIndexChanged"
    },
    "GameCaptureToolbar",
    "on_mode_currentIndexChanged",
    "",
    "idx",
    "on_window_currentIndexChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGameCaptureToolbarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x0a,    1 /* Public */,
       4,    1,   29,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject GameCaptureToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<SourceToolbar::staticMetaObject>(),
    qt_meta_stringdata_CLASSGameCaptureToolbarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGameCaptureToolbarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGameCaptureToolbarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GameCaptureToolbar, std::true_type>,
        // method 'on_mode_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_window_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void GameCaptureToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameCaptureToolbar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_mode_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_window_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *GameCaptureToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameCaptureToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGameCaptureToolbarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SourceToolbar::qt_metacast(_clname);
}

int GameCaptureToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SourceToolbar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSImageSourceToolbarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSImageSourceToolbarENDCLASS = QtMocHelpers::stringData(
    "ImageSourceToolbar",
    "on_browse_clicked",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSImageSourceToolbarENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[19];
    char stringdata1[18];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSImageSourceToolbarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSImageSourceToolbarENDCLASS_t qt_meta_stringdata_CLASSImageSourceToolbarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "ImageSourceToolbar"
        QT_MOC_LITERAL(19, 17),  // "on_browse_clicked"
        QT_MOC_LITERAL(37, 0)   // ""
    },
    "ImageSourceToolbar",
    "on_browse_clicked",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSImageSourceToolbarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ImageSourceToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<SourceToolbar::staticMetaObject>(),
    qt_meta_stringdata_CLASSImageSourceToolbarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSImageSourceToolbarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSImageSourceToolbarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ImageSourceToolbar, std::true_type>,
        // method 'on_browse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ImageSourceToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageSourceToolbar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_browse_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ImageSourceToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageSourceToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSImageSourceToolbarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SourceToolbar::qt_metacast(_clname);
}

int ImageSourceToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SourceToolbar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSColorSourceToolbarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSColorSourceToolbarENDCLASS = QtMocHelpers::stringData(
    "ColorSourceToolbar",
    "on_choose_clicked",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSColorSourceToolbarENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[19];
    char stringdata1[18];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSColorSourceToolbarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSColorSourceToolbarENDCLASS_t qt_meta_stringdata_CLASSColorSourceToolbarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "ColorSourceToolbar"
        QT_MOC_LITERAL(19, 17),  // "on_choose_clicked"
        QT_MOC_LITERAL(37, 0)   // ""
    },
    "ColorSourceToolbar",
    "on_choose_clicked",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSColorSourceToolbarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ColorSourceToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<SourceToolbar::staticMetaObject>(),
    qt_meta_stringdata_CLASSColorSourceToolbarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSColorSourceToolbarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSColorSourceToolbarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ColorSourceToolbar, std::true_type>,
        // method 'on_choose_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ColorSourceToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorSourceToolbar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_choose_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ColorSourceToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorSourceToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSColorSourceToolbarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SourceToolbar::qt_metacast(_clname);
}

int ColorSourceToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SourceToolbar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTextSourceToolbarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTextSourceToolbarENDCLASS = QtMocHelpers::stringData(
    "TextSourceToolbar",
    "on_selectFont_clicked",
    "",
    "on_selectColor_clicked",
    "on_text_textChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTextSourceToolbarENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[18];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTextSourceToolbarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTextSourceToolbarENDCLASS_t qt_meta_stringdata_CLASSTextSourceToolbarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "TextSourceToolbar"
        QT_MOC_LITERAL(18, 21),  // "on_selectFont_clicked"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 22),  // "on_selectColor_clicked"
        QT_MOC_LITERAL(64, 19)   // "on_text_textChanged"
    },
    "TextSourceToolbar",
    "on_selectFont_clicked",
    "",
    "on_selectColor_clicked",
    "on_text_textChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTextSourceToolbarENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject TextSourceToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<SourceToolbar::staticMetaObject>(),
    qt_meta_stringdata_CLASSTextSourceToolbarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTextSourceToolbarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTextSourceToolbarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TextSourceToolbar, std::true_type>,
        // method 'on_selectFont_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_selectColor_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_text_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TextSourceToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextSourceToolbar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_selectFont_clicked(); break;
        case 1: _t->on_selectColor_clicked(); break;
        case 2: _t->on_text_textChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TextSourceToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextSourceToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTextSourceToolbarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SourceToolbar::qt_metacast(_clname);
}

int TextSourceToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SourceToolbar::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
