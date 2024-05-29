/****************************************************************************
** Meta object code from reading C++ file 'auto-scene-switcher.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "auto-scene-switcher.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auto-scene-switcher.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSceneSwitcherENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSceneSwitcherENDCLASS = QtMocHelpers::stringData(
    "SceneSwitcher",
    "on_switches_currentRowChanged",
    "",
    "idx",
    "on_close_clicked",
    "on_add_clicked",
    "on_remove_clicked",
    "on_noMatchDontSwitch_clicked",
    "on_noMatchSwitch_clicked",
    "on_noMatchSwitchScene_currentTextChanged",
    "text",
    "on_checkInterval_valueChanged",
    "value",
    "on_toggleStartButton_clicked",
    "finished"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSceneSwitcherENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[14];
    char stringdata1[30];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[17];
    char stringdata5[15];
    char stringdata6[18];
    char stringdata7[29];
    char stringdata8[25];
    char stringdata9[41];
    char stringdata10[5];
    char stringdata11[30];
    char stringdata12[6];
    char stringdata13[29];
    char stringdata14[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSceneSwitcherENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSceneSwitcherENDCLASS_t qt_meta_stringdata_CLASSSceneSwitcherENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "SceneSwitcher"
        QT_MOC_LITERAL(14, 29),  // "on_switches_currentRowChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 3),  // "idx"
        QT_MOC_LITERAL(49, 16),  // "on_close_clicked"
        QT_MOC_LITERAL(66, 14),  // "on_add_clicked"
        QT_MOC_LITERAL(81, 17),  // "on_remove_clicked"
        QT_MOC_LITERAL(99, 28),  // "on_noMatchDontSwitch_clicked"
        QT_MOC_LITERAL(128, 24),  // "on_noMatchSwitch_clicked"
        QT_MOC_LITERAL(153, 40),  // "on_noMatchSwitchScene_current..."
        QT_MOC_LITERAL(194, 4),  // "text"
        QT_MOC_LITERAL(199, 29),  // "on_checkInterval_valueChanged"
        QT_MOC_LITERAL(229, 5),  // "value"
        QT_MOC_LITERAL(235, 28),  // "on_toggleStartButton_clicked"
        QT_MOC_LITERAL(264, 8)   // "finished"
    },
    "SceneSwitcher",
    "on_switches_currentRowChanged",
    "",
    "idx",
    "on_close_clicked",
    "on_add_clicked",
    "on_remove_clicked",
    "on_noMatchDontSwitch_clicked",
    "on_noMatchSwitch_clicked",
    "on_noMatchSwitchScene_currentTextChanged",
    "text",
    "on_checkInterval_valueChanged",
    "value",
    "on_toggleStartButton_clicked",
    "finished"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSceneSwitcherENDCLASS[] = {

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
       1,    1,   74,    2, 0x0a,    1 /* Public */,
       4,    0,   77,    2, 0x0a,    3 /* Public */,
       5,    0,   78,    2, 0x0a,    4 /* Public */,
       6,    0,   79,    2, 0x0a,    5 /* Public */,
       7,    0,   80,    2, 0x0a,    6 /* Public */,
       8,    0,   81,    2, 0x0a,    7 /* Public */,
       9,    1,   82,    2, 0x0a,    8 /* Public */,
      11,    1,   85,    2, 0x0a,   10 /* Public */,
      13,    0,   88,    2, 0x0a,   12 /* Public */,
      14,    0,   89,    2, 0x0a,   13 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SceneSwitcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSceneSwitcherENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSceneSwitcherENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSceneSwitcherENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SceneSwitcher, std::true_type>,
        // method 'on_switches_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_close_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_remove_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_noMatchDontSwitch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_noMatchSwitch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_noMatchSwitchScene_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_checkInterval_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_toggleStartButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SceneSwitcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SceneSwitcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_switches_currentRowChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_close_clicked(); break;
        case 2: _t->on_add_clicked(); break;
        case 3: _t->on_remove_clicked(); break;
        case 4: _t->on_noMatchDontSwitch_clicked(); break;
        case 5: _t->on_noMatchSwitch_clicked(); break;
        case 6: _t->on_noMatchSwitchScene_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->on_checkInterval_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_toggleStartButton_clicked(); break;
        case 9: _t->finished(); break;
        default: ;
        }
    }
}

const QMetaObject *SceneSwitcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneSwitcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSceneSwitcherENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SceneSwitcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
