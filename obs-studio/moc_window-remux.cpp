/****************************************************************************
** Meta object code from reading C++ file 'window-remux.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "window-remux.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-remux.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOBSRemuxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOBSRemuxENDCLASS = QtMocHelpers::stringData(
    "OBSRemux",
    "remux",
    "",
    "source",
    "target",
    "rowCountChanged",
    "QModelIndex",
    "parent",
    "first",
    "last",
    "updateProgress",
    "percent",
    "remuxFinished",
    "success",
    "beginRemux",
    "stopRemux",
    "clearFinished",
    "clearAll"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOBSRemuxENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[9];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[7];
    char stringdata5[16];
    char stringdata6[12];
    char stringdata7[7];
    char stringdata8[6];
    char stringdata9[5];
    char stringdata10[15];
    char stringdata11[8];
    char stringdata12[14];
    char stringdata13[8];
    char stringdata14[11];
    char stringdata15[10];
    char stringdata16[14];
    char stringdata17[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOBSRemuxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOBSRemuxENDCLASS_t qt_meta_stringdata_CLASSOBSRemuxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "OBSRemux"
        QT_MOC_LITERAL(9, 5),  // "remux"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 6),  // "source"
        QT_MOC_LITERAL(23, 6),  // "target"
        QT_MOC_LITERAL(30, 15),  // "rowCountChanged"
        QT_MOC_LITERAL(46, 11),  // "QModelIndex"
        QT_MOC_LITERAL(58, 6),  // "parent"
        QT_MOC_LITERAL(65, 5),  // "first"
        QT_MOC_LITERAL(71, 4),  // "last"
        QT_MOC_LITERAL(76, 14),  // "updateProgress"
        QT_MOC_LITERAL(91, 7),  // "percent"
        QT_MOC_LITERAL(99, 13),  // "remuxFinished"
        QT_MOC_LITERAL(113, 7),  // "success"
        QT_MOC_LITERAL(121, 10),  // "beginRemux"
        QT_MOC_LITERAL(132, 9),  // "stopRemux"
        QT_MOC_LITERAL(142, 13),  // "clearFinished"
        QT_MOC_LITERAL(156, 8)   // "clearAll"
    },
    "OBSRemux",
    "remux",
    "",
    "source",
    "target",
    "rowCountChanged",
    "QModelIndex",
    "parent",
    "first",
    "last",
    "updateProgress",
    "percent",
    "remuxFinished",
    "success",
    "beginRemux",
    "stopRemux",
    "clearFinished",
    "clearAll"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOBSRemuxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    3,   67,    2, 0x08,    4 /* Private */,
      10,    1,   74,    2, 0x0a,    8 /* Public */,
      12,    1,   77,    2, 0x0a,   10 /* Public */,
      14,    0,   80,    2, 0x0a,   12 /* Public */,
      15,    0,   81,    2, 0x0a,   13 /* Public */,
      16,    0,   82,    2, 0x0a,   14 /* Public */,
      17,    0,   83,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OBSRemux::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSOBSRemuxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOBSRemuxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOBSRemuxENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OBSRemux, std::true_type>,
        // method 'remux'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'rowCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'remuxFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'beginRemux'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopRemux'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'clearFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OBSRemux::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSRemux *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->remux((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->rowCountChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->updateProgress((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 3: _t->remuxFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->beginRemux(); break;
        case 5: { bool _r = _t->stopRemux();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->clearFinished(); break;
        case 7: _t->clearAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OBSRemux::*)(const QString & , const QString & );
            if (_t _q_method = &OBSRemux::remux; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *OBSRemux::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSRemux::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOBSRemuxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OBSRemux::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OBSRemux::remux(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSRemuxQueueModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRemuxQueueModelENDCLASS = QtMocHelpers::stringData(
    "RemuxQueueModel"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRemuxQueueModelENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRemuxQueueModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRemuxQueueModelENDCLASS_t qt_meta_stringdata_CLASSRemuxQueueModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15)   // "RemuxQueueModel"
    },
    "RemuxQueueModel"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRemuxQueueModelENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject RemuxQueueModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSRemuxQueueModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRemuxQueueModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRemuxQueueModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RemuxQueueModel, std::true_type>
    >,
    nullptr
} };

void RemuxQueueModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *RemuxQueueModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemuxQueueModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRemuxQueueModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int RemuxQueueModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSRemuxWorkerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRemuxWorkerENDCLASS = QtMocHelpers::stringData(
    "RemuxWorker",
    "updateProgress",
    "",
    "percent",
    "remuxFinished",
    "success",
    "remux",
    "source",
    "target"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRemuxWorkerENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[12];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[14];
    char stringdata5[8];
    char stringdata6[6];
    char stringdata7[7];
    char stringdata8[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRemuxWorkerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRemuxWorkerENDCLASS_t qt_meta_stringdata_CLASSRemuxWorkerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "RemuxWorker"
        QT_MOC_LITERAL(12, 14),  // "updateProgress"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 7),  // "percent"
        QT_MOC_LITERAL(36, 13),  // "remuxFinished"
        QT_MOC_LITERAL(50, 7),  // "success"
        QT_MOC_LITERAL(58, 5),  // "remux"
        QT_MOC_LITERAL(64, 6),  // "source"
        QT_MOC_LITERAL(71, 6)   // "target"
    },
    "RemuxWorker",
    "updateProgress",
    "",
    "percent",
    "remuxFinished",
    "success",
    "remux",
    "source",
    "target"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRemuxWorkerENDCLASS[] = {

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
       1,    1,   32,    2, 0x06,    1 /* Public */,
       4,    1,   35,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    2,   38,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject RemuxWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRemuxWorkerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRemuxWorkerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRemuxWorkerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RemuxWorker, std::true_type>,
        // method 'updateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'remuxFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'remux'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void RemuxWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemuxWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateProgress((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->remuxFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->remux((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RemuxWorker::*)(float );
            if (_t _q_method = &RemuxWorker::updateProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RemuxWorker::*)(bool );
            if (_t _q_method = &RemuxWorker::remuxFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *RemuxWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemuxWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRemuxWorkerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RemuxWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void RemuxWorker::updateProgress(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RemuxWorker::remuxFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSRemuxEntryPathItemDelegateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRemuxEntryPathItemDelegateENDCLASS = QtMocHelpers::stringData(
    "RemuxEntryPathItemDelegate",
    "updateText",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRemuxEntryPathItemDelegateENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[27];
    char stringdata1[11];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRemuxEntryPathItemDelegateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRemuxEntryPathItemDelegateENDCLASS_t qt_meta_stringdata_CLASSRemuxEntryPathItemDelegateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "RemuxEntryPathItemDelegate"
        QT_MOC_LITERAL(27, 10),  // "updateText"
        QT_MOC_LITERAL(38, 0)   // ""
    },
    "RemuxEntryPathItemDelegate",
    "updateText",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRemuxEntryPathItemDelegateENDCLASS[] = {

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
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject RemuxEntryPathItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_CLASSRemuxEntryPathItemDelegateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRemuxEntryPathItemDelegateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRemuxEntryPathItemDelegateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RemuxEntryPathItemDelegate, std::true_type>,
        // method 'updateText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RemuxEntryPathItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemuxEntryPathItemDelegate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateText(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *RemuxEntryPathItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemuxEntryPathItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRemuxEntryPathItemDelegateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int RemuxEntryPathItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
