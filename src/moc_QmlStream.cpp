/****************************************************************************
** Meta object code from reading C++ file 'QmlStream.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QuickStreams/src/QmlStream.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmlStream.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_quickstreams__qml__QmlStream_t {
    QByteArrayData data[22];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_quickstreams__qml__QmlStream_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_quickstreams__qml__QmlStream_t qt_meta_stringdata_quickstreams__qml__QmlStream = {
    {
QT_MOC_LITERAL(0, 0, 28), // "quickstreams::qml::QmlStream"
QT_MOC_LITERAL(1, 29, 5), // "delay"
QT_MOC_LITERAL(2, 35, 10), // "QmlStream*"
QT_MOC_LITERAL(3, 46, 0), // ""
QT_MOC_LITERAL(4, 47, 8), // "QJSValue"
QT_MOC_LITERAL(5, 56, 8), // "duration"
QT_MOC_LITERAL(6, 65, 5), // "retry"
QT_MOC_LITERAL(7, 71, 7), // "samples"
QT_MOC_LITERAL(8, 79, 9), // "maxTrials"
QT_MOC_LITERAL(9, 89, 6), // "repeat"
QT_MOC_LITERAL(10, 96, 9), // "condition"
QT_MOC_LITERAL(11, 106, 6), // "attach"
QT_MOC_LITERAL(12, 113, 6), // "target"
QT_MOC_LITERAL(13, 120, 4), // "bind"
QT_MOC_LITERAL(14, 125, 5), // "event"
QT_MOC_LITERAL(15, 131, 4), // "name"
QT_MOC_LITERAL(16, 136, 8), // "callback"
QT_MOC_LITERAL(17, 145, 7), // "failure"
QT_MOC_LITERAL(18, 153, 8), // "abortion"
QT_MOC_LITERAL(19, 162, 5), // "abort"
QT_MOC_LITERAL(20, 168, 11), // "isAbortable"
QT_MOC_LITERAL(21, 180, 9) // "isAborted"

    },
    "quickstreams::qml::QmlStream\0delay\0"
    "QmlStream*\0\0QJSValue\0duration\0retry\0"
    "samples\0maxTrials\0repeat\0condition\0"
    "attach\0target\0bind\0event\0name\0callback\0"
    "failure\0abortion\0abort\0isAbortable\0"
    "isAborted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_quickstreams__qml__QmlStream[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   74,    3, 0x02 /* Public */,
       6,    2,   77,    3, 0x02 /* Public */,
       6,    1,   82,    3, 0x22 /* Public | MethodCloned */,
       9,    1,   85,    3, 0x02 /* Public */,
      11,    1,   88,    3, 0x02 /* Public */,
      13,    1,   91,    3, 0x02 /* Public */,
      14,    2,   94,    3, 0x02 /* Public */,
      17,    1,   99,    3, 0x02 /* Public */,
      18,    1,  102,    3, 0x02 /* Public */,
      19,    0,  105,    3, 0x02 /* Public */,
      20,    0,  106,    3, 0x02 /* Public */,
      21,    0,  107,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::QVariant, 0x80000000 | 4,    7,    8,
    0x80000000 | 2, QMetaType::QVariant,    7,
    0x80000000 | 2, 0x80000000 | 4,   10,
    0x80000000 | 2, 0x80000000 | 4,   12,
    0x80000000 | 2, 0x80000000 | 4,   12,
    0x80000000 | 2, QMetaType::QVariant, 0x80000000 | 4,   15,   16,
    0x80000000 | 2, 0x80000000 | 4,   12,
    0x80000000 | 2, 0x80000000 | 4,   12,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,

       0        // eod
};

void quickstreams::qml::QmlStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlStream *_t = static_cast<QmlStream *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QmlStream* _r = _t->delay((*reinterpret_cast< const QJSValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QmlStream**>(_a[0]) = std::move(_r); }  break;
        case 1: { QmlStream* _r = _t->retry((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QJSValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QmlStream**>(_a[0]) = std::move(_r); }  break;
        case 2: { QmlStream* _r = _t->retry((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QmlStream**>(_a[0]) = std::move(_r); }  break;
        case 3: { QmlStream* _r = _t->repeat((*reinterpret_cast< const QJSValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QmlStream**>(_a[0]) = std::move(_r); }  break;
        case 4: { QmlStream* _r = _t->attach((*reinterpret_cast< const QJSValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QmlStream**>(_a[0]) = std::move(_r); }  break;
        case 5: { QmlStream* _r = _t->bind((*reinterpret_cast< const QJSValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QmlStream**>(_a[0]) = std::move(_r); }  break;
        case 6: { QmlStream* _r = _t->event((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QJSValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QmlStream**>(_a[0]) = std::move(_r); }  break;
        case 7: { QmlStream* _r = _t->failure((*reinterpret_cast< const QJSValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QmlStream**>(_a[0]) = std::move(_r); }  break;
        case 8: { QmlStream* _r = _t->abortion((*reinterpret_cast< const QJSValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QmlStream**>(_a[0]) = std::move(_r); }  break;
        case 9: _t->abort(); break;
        case 10: { bool _r = _t->isAbortable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->isAborted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
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
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    }
}

const QMetaObject quickstreams::qml::QmlStream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_quickstreams__qml__QmlStream.data,
      qt_meta_data_quickstreams__qml__QmlStream,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *quickstreams::qml::QmlStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *quickstreams::qml::QmlStream::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_quickstreams__qml__QmlStream.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int quickstreams::qml::QmlStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
