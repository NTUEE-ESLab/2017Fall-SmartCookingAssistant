/****************************************************************************
** Meta object code from reading C++ file 'QmlProvider.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/QuickStreams/src/QmlProvider.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmlProvider.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_quickstreams__qml__QmlProvider_t {
    QByteArrayData data[10];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_quickstreams__qml__QmlProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_quickstreams__qml__QmlProvider_t qt_meta_stringdata_quickstreams__qml__QmlProvider = {
    {
QT_MOC_LITERAL(0, 0, 30), // "quickstreams::qml::QmlProvider"
QT_MOC_LITERAL(1, 31, 6), // "create"
QT_MOC_LITERAL(2, 38, 10), // "QmlStream*"
QT_MOC_LITERAL(3, 49, 0), // ""
QT_MOC_LITERAL(4, 50, 8), // "QJSValue"
QT_MOC_LITERAL(5, 59, 6), // "target"
QT_MOC_LITERAL(6, 66, 26), // "quickstreams::Stream::Type"
QT_MOC_LITERAL(7, 93, 4), // "type"
QT_MOC_LITERAL(8, 98, 6), // "Atomic"
QT_MOC_LITERAL(9, 105, 9) // "Abortable"

    },
    "quickstreams::qml::QmlProvider\0create\0"
    "QmlStream*\0\0QJSValue\0target\0"
    "quickstreams::Stream::Type\0type\0Atomic\0"
    "Abortable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_quickstreams__qml__QmlProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   24,    3, 0x02 /* Public */,
       1,    1,   29,    3, 0x22 /* Public | MethodCloned */,

 // methods: parameters
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    0x80000000 | 2, 0x80000000 | 4,    5,

 // properties: name, type, flags
       8, 0x80000000 | 6, 0x00095409,
       9, 0x80000000 | 6, 0x00095409,

       0        // eod
};

void quickstreams::qml::QmlProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlProvider *_t = static_cast<QmlProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QmlStream* _r = _t->create((*reinterpret_cast< const QJSValue(*)>(_a[1])),(*reinterpret_cast< quickstreams::Stream::Type(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QmlStream**>(_a[0]) = std::move(_r); }  break;
        case 1: { QmlStream* _r = _t->create((*reinterpret_cast< const QJSValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QmlStream**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< quickstreams::Stream::Type >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< quickstreams::Stream::Type >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlProvider *_t = static_cast<QmlProvider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quickstreams::Stream::Type*>(_v) = _t->Atomic(); break;
        case 1: *reinterpret_cast< quickstreams::Stream::Type*>(_v) = _t->Abortable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_quickstreams__qml__QmlProvider[] = {
        &quickstreams::Stream::staticMetaObject,
    nullptr
};

const QMetaObject quickstreams::qml::QmlProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_quickstreams__qml__QmlProvider.data,
      qt_meta_data_quickstreams__qml__QmlProvider,  qt_static_metacall, qt_meta_extradata_quickstreams__qml__QmlProvider, nullptr}
};


const QMetaObject *quickstreams::qml::QmlProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *quickstreams::qml::QmlProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_quickstreams__qml__QmlProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int quickstreams::qml::QmlProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
