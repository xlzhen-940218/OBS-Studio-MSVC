/****************************************************************************
** Meta object code from reading C++ file 'SettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SettingsDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSettingsDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSettingsDialogENDCLASS = QtMocHelpers::stringData(
    "SettingsDialog",
    "DialogButtonClicked",
    "",
    "QAbstractButton*",
    "button",
    "SaveFormData",
    "FillSessionTable",
    "EnableAuthenticationCheckBoxChanged",
    "GeneratePasswordButtonClicked",
    "ShowConnectInfoButtonClicked",
    "PasswordEdited"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSettingsDialogENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[15];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[7];
    char stringdata5[13];
    char stringdata6[17];
    char stringdata7[36];
    char stringdata8[30];
    char stringdata9[29];
    char stringdata10[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSettingsDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSettingsDialogENDCLASS_t qt_meta_stringdata_CLASSSettingsDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "SettingsDialog"
        QT_MOC_LITERAL(15, 19),  // "DialogButtonClicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(53, 6),  // "button"
        QT_MOC_LITERAL(60, 12),  // "SaveFormData"
        QT_MOC_LITERAL(73, 16),  // "FillSessionTable"
        QT_MOC_LITERAL(90, 35),  // "EnableAuthenticationCheckBoxC..."
        QT_MOC_LITERAL(126, 29),  // "GeneratePasswordButtonClicked"
        QT_MOC_LITERAL(156, 28),  // "ShowConnectInfoButtonClicked"
        QT_MOC_LITERAL(185, 14)   // "PasswordEdited"
    },
    "SettingsDialog",
    "DialogButtonClicked",
    "",
    "QAbstractButton*",
    "button",
    "SaveFormData",
    "FillSessionTable",
    "EnableAuthenticationCheckBoxChanged",
    "GeneratePasswordButtonClicked",
    "ShowConnectInfoButtonClicked",
    "PasswordEdited"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSettingsDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x08,    1 /* Private */,
       5,    0,   59,    2, 0x08,    3 /* Private */,
       6,    0,   60,    2, 0x08,    4 /* Private */,
       7,    0,   61,    2, 0x08,    5 /* Private */,
       8,    0,   62,    2, 0x08,    6 /* Private */,
       9,    0,   63,    2, 0x08,    7 /* Private */,
      10,    0,   64,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSettingsDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSettingsDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSettingsDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SettingsDialog, std::true_type>,
        // method 'DialogButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method 'SaveFormData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'FillSessionTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'EnableAuthenticationCheckBoxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GeneratePasswordButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowConnectInfoButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PasswordEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DialogButtonClicked((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 1: _t->SaveFormData(); break;
        case 2: _t->FillSessionTable(); break;
        case 3: _t->EnableAuthenticationCheckBoxChanged(); break;
        case 4: _t->GeneratePasswordButtonClicked(); break;
        case 5: _t->ShowConnectInfoButtonClicked(); break;
        case 6: _t->PasswordEdited(); break;
        default: ;
        }
    }
}

const QMetaObject *SettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSettingsDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
