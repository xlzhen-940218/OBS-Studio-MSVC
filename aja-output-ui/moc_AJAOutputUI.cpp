/****************************************************************************
** Meta object code from reading C++ file 'AJAOutputUI.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AJAOutputUI.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AJAOutputUI.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAJAOutputUIENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAJAOutputUIENDCLASS = QtMocHelpers::stringData(
    "AJAOutputUI",
    "on_outputButton_clicked",
    "",
    "PropertiesChanged",
    "OutputStateChanged",
    "on_previewOutputButton_clicked",
    "PreviewPropertiesChanged",
    "PreviewOutputStateChanged",
    "MiscPropertiesChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAJAOutputUIENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[12];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[19];
    char stringdata5[31];
    char stringdata6[25];
    char stringdata7[26];
    char stringdata8[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAJAOutputUIENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAJAOutputUIENDCLASS_t qt_meta_stringdata_CLASSAJAOutputUIENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "AJAOutputUI"
        QT_MOC_LITERAL(12, 23),  // "on_outputButton_clicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 17),  // "PropertiesChanged"
        QT_MOC_LITERAL(55, 18),  // "OutputStateChanged"
        QT_MOC_LITERAL(74, 30),  // "on_previewOutputButton_clicked"
        QT_MOC_LITERAL(105, 24),  // "PreviewPropertiesChanged"
        QT_MOC_LITERAL(130, 25),  // "PreviewOutputStateChanged"
        QT_MOC_LITERAL(156, 21)   // "MiscPropertiesChanged"
    },
    "AJAOutputUI",
    "on_outputButton_clicked",
    "",
    "PropertiesChanged",
    "OutputStateChanged",
    "on_previewOutputButton_clicked",
    "PreviewPropertiesChanged",
    "PreviewOutputStateChanged",
    "MiscPropertiesChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAJAOutputUIENDCLASS[] = {

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
       1,    0,   56,    2, 0x0a,    1 /* Public */,
       3,    0,   57,    2, 0x0a,    2 /* Public */,
       4,    1,   58,    2, 0x0a,    3 /* Public */,
       5,    0,   61,    2, 0x0a,    5 /* Public */,
       6,    0,   62,    2, 0x0a,    6 /* Public */,
       7,    1,   63,    2, 0x0a,    7 /* Public */,
       8,    0,   66,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AJAOutputUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSAJAOutputUIENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAJAOutputUIENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAJAOutputUIENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AJAOutputUI, std::true_type>,
        // method 'on_outputButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PropertiesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OutputStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_previewOutputButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PreviewPropertiesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PreviewOutputStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'MiscPropertiesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AJAOutputUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AJAOutputUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_outputButton_clicked(); break;
        case 1: _t->PropertiesChanged(); break;
        case 2: _t->OutputStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_previewOutputButton_clicked(); break;
        case 4: _t->PreviewPropertiesChanged(); break;
        case 5: _t->PreviewOutputStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->MiscPropertiesChanged(); break;
        default: ;
        }
    }
}

const QMetaObject *AJAOutputUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AJAOutputUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAJAOutputUIENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AJAOutputUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
