/****************************************************************************
** Meta object code from reading C++ file 'QmlStreamHandle.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QuickStreams/src/QmlStreamHandle.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmlStreamHandle.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_quickstreams__qml__QmlStreamHandle_t {
    QByteArrayData data[12];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_quickstreams__qml__QmlStreamHandle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_quickstreams__qml__QmlStreamHandle_t qt_meta_stringdata_quickstreams__qml__QmlStreamHandle = {
    {
QT_MOC_LITERAL(0, 0, 34), // "quickstreams::qml::QmlStreamH..."
QT_MOC_LITERAL(1, 35, 5), // "event"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "name"
QT_MOC_LITERAL(4, 47, 4), // "data"
QT_MOC_LITERAL(5, 52, 5), // "close"
QT_MOC_LITERAL(6, 58, 4), // "fail"
QT_MOC_LITERAL(7, 63, 5), // "adopt"
QT_MOC_LITERAL(8, 69, 10), // "QmlStream*"
QT_MOC_LITERAL(9, 80, 6), // "stream"
QT_MOC_LITERAL(10, 87, 11), // "isAbortable"
QT_MOC_LITERAL(11, 99, 9) // "isAborted"

    },
    "quickstreams::qml::QmlStreamHandle\0"
    "event\0\0name\0data\0close\0fail\0adopt\0"
    "QmlStream*\0stream\0isAbortable\0isAborted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_quickstreams__qml__QmlStreamHandle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x02 /* Public */,
       1,    1,   54,    2, 0x22 /* Public | MethodCloned */,
       5,    1,   57,    2, 0x02 /* Public */,
       5,    0,   60,    2, 0x22 /* Public | MethodCloned */,
       6,    1,   61,    2, 0x02 /* Public */,
       6,    0,   64,    2, 0x22 /* Public | MethodCloned */,
       7,    1,   65,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant,    3,    4,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void,
    0x80000000 | 8, 0x80000000 | 8,    9,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00095001,
      11, QMetaType::Bool, 0x00095001,

       0        // eod
};

void quickstreams::qml::QmlStreamHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlStreamHandle *_t = reinterpret_cast<QmlStreamHandle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->event((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->event((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->close((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->close(); break;
        case 4: _t->fail((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 5: _t->fail(); break;
        case 6: { QmlStream* _r = _t->adopt((*reinterpret_cast< QmlStream*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QmlStream**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlStreamHandle *_t = reinterpret_cast<QmlStreamHandle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAbortable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isAborted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject quickstreams::qml::QmlStreamHandle::staticMetaObject = {
    { nullptr, qt_meta_stringdata_quickstreams__qml__QmlStreamHandle.data,
      qt_meta_data_quickstreams__qml__QmlStreamHandle,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
