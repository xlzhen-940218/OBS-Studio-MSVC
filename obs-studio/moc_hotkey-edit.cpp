/****************************************************************************
** Meta object code from reading C++ file 'hotkey-edit.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "hotkey-edit.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hotkey-edit.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOBSHotkeyLabelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOBSHotkeyLabelENDCLASS = QtMocHelpers::stringData(
    "OBSHotkeyLabel"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOBSHotkeyLabelENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOBSHotkeyLabelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOBSHotkeyLabelENDCLASS_t qt_meta_stringdata_CLASSOBSHotkeyLabelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14)   // "OBSHotkeyLabel"
    },
    "OBSHotkeyLabel"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOBSHotkeyLabelENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject OBSHotkeyLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_CLASSOBSHotkeyLabelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOBSHotkeyLabelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOBSHotkeyLabelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OBSHotkeyLabel, std::true_type>
    >,
    nullptr
} };

void OBSHotkeyLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OBSHotkeyLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSHotkeyLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOBSHotkeyLabelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int OBSHotkeyLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOBSHotkeyEditENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOBSHotkeyEditENDCLASS = QtMocHelpers::stringData(
    "OBSHotkeyEdit",
    "KeyChanged",
    "",
    "obs_key_combination_t",
    "SearchKey",
    "HandleNewKey",
    "new_key",
    "ReloadKeyLayout",
    "ResetKey",
    "ClearKey"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOBSHotkeyEditENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[14];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[10];
    char stringdata5[13];
    char stringdata6[8];
    char stringdata7[16];
    char stringdata8[9];
    char stringdata9[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOBSHotkeyEditENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOBSHotkeyEditENDCLASS_t qt_meta_stringdata_CLASSOBSHotkeyEditENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "OBSHotkeyEdit"
        QT_MOC_LITERAL(14, 10),  // "KeyChanged"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 21),  // "obs_key_combination_t"
        QT_MOC_LITERAL(48, 9),  // "SearchKey"
        QT_MOC_LITERAL(58, 12),  // "HandleNewKey"
        QT_MOC_LITERAL(71, 7),  // "new_key"
        QT_MOC_LITERAL(79, 15),  // "ReloadKeyLayout"
        QT_MOC_LITERAL(95, 8),  // "ResetKey"
        QT_MOC_LITERAL(104, 8)   // "ClearKey"
    },
    "OBSHotkeyEdit",
    "KeyChanged",
    "",
    "obs_key_combination_t",
    "SearchKey",
    "HandleNewKey",
    "new_key",
    "ReloadKeyLayout",
    "ResetKey",
    "ClearKey"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOBSHotkeyEditENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    1,   53,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   56,    2, 0x0a,    5 /* Public */,
       7,    0,   59,    2, 0x0a,    7 /* Public */,
       8,    0,   60,    2, 0x0a,    8 /* Public */,
       9,    0,   61,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OBSHotkeyEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_CLASSOBSHotkeyEditENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOBSHotkeyEditENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOBSHotkeyEditENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OBSHotkeyEdit, std::true_type>,
        // method 'KeyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<obs_key_combination_t, std::false_type>,
        // method 'SearchKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<obs_key_combination_t, std::false_type>,
        // method 'HandleNewKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<obs_key_combination_t, std::false_type>,
        // method 'ReloadKeyLayout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ResetKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ClearKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OBSHotkeyEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSHotkeyEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->KeyChanged((*reinterpret_cast< std::add_pointer_t<obs_key_combination_t>>(_a[1]))); break;
        case 1: _t->SearchKey((*reinterpret_cast< std::add_pointer_t<obs_key_combination_t>>(_a[1]))); break;
        case 2: _t->HandleNewKey((*reinterpret_cast< std::add_pointer_t<obs_key_combination_t>>(_a[1]))); break;
        case 3: _t->ReloadKeyLayout(); break;
        case 4: _t->ResetKey(); break;
        case 5: _t->ClearKey(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OBSHotkeyEdit::*)(obs_key_combination_t );
            if (_t _q_method = &OBSHotkeyEdit::KeyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OBSHotkeyEdit::*)(obs_key_combination_t );
            if (_t _q_method = &OBSHotkeyEdit::SearchKey; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OBSHotkeyEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSHotkeyEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOBSHotkeyEditENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int OBSHotkeyEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OBSHotkeyEdit::KeyChanged(obs_key_combination_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OBSHotkeyEdit::SearchKey(obs_key_combination_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOBSHotkeyWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOBSHotkeyWidgetENDCLASS = QtMocHelpers::stringData(
    "OBSHotkeyWidget",
    "KeyChanged",
    "",
    "SearchKey",
    "obs_key_combination_t",
    "HandleChangedBindings",
    "obs_hotkey_id",
    "id_"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOBSHotkeyWidgetENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[16];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[22];
    char stringdata5[22];
    char stringdata6[14];
    char stringdata7[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOBSHotkeyWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOBSHotkeyWidgetENDCLASS_t qt_meta_stringdata_CLASSOBSHotkeyWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "OBSHotkeyWidget"
        QT_MOC_LITERAL(16, 10),  // "KeyChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 9),  // "SearchKey"
        QT_MOC_LITERAL(38, 21),  // "obs_key_combination_t"
        QT_MOC_LITERAL(60, 21),  // "HandleChangedBindings"
        QT_MOC_LITERAL(82, 13),  // "obs_hotkey_id"
        QT_MOC_LITERAL(96, 3)   // "id_"
    },
    "OBSHotkeyWidget",
    "KeyChanged",
    "",
    "SearchKey",
    "obs_key_combination_t",
    "HandleChangedBindings",
    "obs_hotkey_id",
    "id_"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOBSHotkeyWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,
       3,    1,   33,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   36,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject OBSHotkeyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSOBSHotkeyWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOBSHotkeyWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOBSHotkeyWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OBSHotkeyWidget, std::true_type>,
        // method 'KeyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SearchKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<obs_key_combination_t, std::false_type>,
        // method 'HandleChangedBindings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<obs_hotkey_id, std::false_type>
    >,
    nullptr
} };

void OBSHotkeyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSHotkeyWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->KeyChanged(); break;
        case 1: _t->SearchKey((*reinterpret_cast< std::add_pointer_t<obs_key_combination_t>>(_a[1]))); break;
        case 2: _t->HandleChangedBindings((*reinterpret_cast< std::add_pointer_t<obs_hotkey_id>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OBSHotkeyWidget::*)();
            if (_t _q_method = &OBSHotkeyWidget::KeyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OBSHotkeyWidget::*)(obs_key_combination_t );
            if (_t _q_method = &OBSHotkeyWidget::SearchKey; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OBSHotkeyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSHotkeyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOBSHotkeyWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OBSHotkeyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OBSHotkeyWidget::KeyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OBSHotkeyWidget::SearchKey(obs_key_combination_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
