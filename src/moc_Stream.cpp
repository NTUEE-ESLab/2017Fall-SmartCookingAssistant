/****************************************************************************
** Meta object code from reading C++ file 'Stream.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QuickStreams/src/Stream.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Stream.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_quickstreams__Stream_t {
    QByteArrayData data[54];
    char stringdata0[660];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_quickstreams__Stream_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_quickstreams__Stream_t qt_meta_stringdata_quickstreams__Stream = {
    {
QT_MOC_LITERAL(0, 0, 20), // "quickstreams::Stream"
QT_MOC_LITERAL(1, 21, 12), // "eventEmitted"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "name"
QT_MOC_LITERAL(4, 40, 4), // "data"
QT_MOC_LITERAL(5, 45, 6), // "closed"
QT_MOC_LITERAL(6, 52, 13), // "WakeCondition"
QT_MOC_LITERAL(7, 66, 13), // "wakeCondition"
QT_MOC_LITERAL(8, 80, 6), // "failed"
QT_MOC_LITERAL(9, 87, 5), // "error"
QT_MOC_LITERAL(10, 93, 7), // "aborted"
QT_MOC_LITERAL(11, 101, 6), // "reason"
QT_MOC_LITERAL(12, 108, 14), // "retryIteration"
QT_MOC_LITERAL(13, 123, 15), // "repeatIteration"
QT_MOC_LITERAL(14, 139, 16), // "abortSubordinate"
QT_MOC_LITERAL(15, 156, 22), // "propagateFailureStream"
QT_MOC_LITERAL(16, 179, 7), // "Stream*"
QT_MOC_LITERAL(17, 187, 13), // "failureStream"
QT_MOC_LITERAL(18, 201, 23), // "propagateAbortionStream"
QT_MOC_LITERAL(19, 225, 14), // "abortionStream"
QT_MOC_LITERAL(20, 240, 20), // "eliminateSubordinate"
QT_MOC_LITERAL(21, 261, 17), // "eliminateSequence"
QT_MOC_LITERAL(22, 279, 24), // "eliminateFailureSequence"
QT_MOC_LITERAL(23, 304, 25), // "eliminateAbortionSequence"
QT_MOC_LITERAL(24, 330, 10), // "initialize"
QT_MOC_LITERAL(25, 341, 23), // "registerFailureSequence"
QT_MOC_LITERAL(26, 365, 24), // "registerAbortionSequence"
QT_MOC_LITERAL(27, 390, 5), // "awake"
QT_MOC_LITERAL(28, 396, 35), // "quickstreams::Stream::WakeCon..."
QT_MOC_LITERAL(29, 432, 19), // "onEliminateSequence"
QT_MOC_LITERAL(30, 452, 5), // "State"
QT_MOC_LITERAL(31, 458, 3), // "New"
QT_MOC_LITERAL(32, 462, 8), // "Canceled"
QT_MOC_LITERAL(33, 471, 6), // "Active"
QT_MOC_LITERAL(34, 478, 13), // "AwaitingDelay"
QT_MOC_LITERAL(35, 492, 7), // "Aborted"
QT_MOC_LITERAL(36, 500, 4), // "Dead"
QT_MOC_LITERAL(37, 505, 7), // "Default"
QT_MOC_LITERAL(38, 513, 5), // "Abort"
QT_MOC_LITERAL(39, 519, 14), // "DefaultNoDelay"
QT_MOC_LITERAL(40, 534, 12), // "AbortNoDelay"
QT_MOC_LITERAL(41, 547, 4), // "Type"
QT_MOC_LITERAL(42, 552, 6), // "Atomic"
QT_MOC_LITERAL(43, 559, 9), // "Abortable"
QT_MOC_LITERAL(44, 569, 8), // "Captured"
QT_MOC_LITERAL(45, 578, 4), // "None"
QT_MOC_LITERAL(46, 583, 8), // "Attached"
QT_MOC_LITERAL(47, 592, 5), // "Bound"
QT_MOC_LITERAL(48, 598, 13), // "CaptionStatus"
QT_MOC_LITERAL(49, 612, 4), // "Free"
QT_MOC_LITERAL(50, 617, 20), // "ControlFlowBranching"
QT_MOC_LITERAL(51, 638, 7), // "Failure"
QT_MOC_LITERAL(52, 646, 8), // "Abortion"
QT_MOC_LITERAL(53, 655, 4) // "Both"

    },
    "quickstreams::Stream\0eventEmitted\0\0"
    "name\0data\0closed\0WakeCondition\0"
    "wakeCondition\0failed\0error\0aborted\0"
    "reason\0retryIteration\0repeatIteration\0"
    "abortSubordinate\0propagateFailureStream\0"
    "Stream*\0failureStream\0propagateAbortionStream\0"
    "abortionStream\0eliminateSubordinate\0"
    "eliminateSequence\0eliminateFailureSequence\0"
    "eliminateAbortionSequence\0initialize\0"
    "registerFailureSequence\0"
    "registerAbortionSequence\0awake\0"
    "quickstreams::Stream::WakeCondition\0"
    "onEliminateSequence\0State\0New\0Canceled\0"
    "Active\0AwaitingDelay\0Aborted\0Dead\0"
    "Default\0Abort\0DefaultNoDelay\0AbortNoDelay\0"
    "Type\0Atomic\0Abortable\0Captured\0None\0"
    "Attached\0Bound\0CaptionStatus\0Free\0"
    "ControlFlowBranching\0Failure\0Abortion\0"
    "Both"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_quickstreams__Stream[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       6,  172, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  114,    2, 0x06 /* Public */,
       5,    2,  119,    2, 0x06 /* Public */,
       8,    2,  124,    2, 0x06 /* Public */,
      10,    2,  129,    2, 0x06 /* Public */,
      12,    2,  134,    2, 0x06 /* Public */,
      13,    2,  139,    2, 0x06 /* Public */,
      14,    0,  144,    2, 0x06 /* Public */,
      15,    1,  145,    2, 0x06 /* Public */,
      18,    1,  148,    2, 0x06 /* Public */,
      20,    0,  151,    2, 0x06 /* Public */,
      21,    0,  152,    2, 0x06 /* Public */,
      22,    0,  153,    2, 0x06 /* Public */,
      23,    0,  154,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    0,  155,    2, 0x09 /* Protected */,
      25,    1,  156,    2, 0x09 /* Protected */,
      26,    1,  159,    2, 0x09 /* Protected */,
      27,    2,  162,    2, 0x09 /* Protected */,
      27,    1,  167,    2, 0x29 /* Protected | MethodCloned */,
      27,    0,  170,    2, 0x29 /* Protected | MethodCloned */,
      29,    0,  171,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    4,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 6,    4,    7,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 6,    9,    7,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 6,   11,    7,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 6,    4,    7,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 6,    4,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   19,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 28,    4,    7,
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      30, 0x2,    6,  196,
       6, 0x2,    4,  208,
      41, 0x2,    2,  216,
      44, 0x2,    3,  220,
      48, 0x2,    3,  226,
      50, 0x2,    4,  232,

 // enum data: key, value
      31, uint(quickstreams::Stream::State::New),
      32, uint(quickstreams::Stream::State::Canceled),
      33, uint(quickstreams::Stream::State::Active),
      34, uint(quickstreams::Stream::State::AwaitingDelay),
      35, uint(quickstreams::Stream::State::Aborted),
      36, uint(quickstreams::Stream::State::Dead),
      37, uint(quickstreams::Stream::WakeCondition::Default),
      38, uint(quickstreams::Stream::WakeCondition::Abort),
      39, uint(quickstreams::Stream::WakeCondition::DefaultNoDelay),
      40, uint(quickstreams::Stream::WakeCondition::AbortNoDelay),
      42, uint(quickstreams::Stream::Type::Atomic),
      43, uint(quickstreams::Stream::Type::Abortable),
      45, uint(quickstreams::Stream::Captured::None),
      46, uint(quickstreams::Stream::Captured::Attached),
      47, uint(quickstreams::Stream::Captured::Bound),
      49, uint(quickstreams::Stream::CaptionStatus::Free),
      46, uint(quickstreams::Stream::CaptionStatus::Attached),
      47, uint(quickstreams::Stream::CaptionStatus::Bound),
      45, uint(quickstreams::Stream::ControlFlowBranching::None),
      51, uint(quickstreams::Stream::ControlFlowBranching::Failure),
      52, uint(quickstreams::Stream::ControlFlowBranching::Abortion),
      53, uint(quickstreams::Stream::ControlFlowBranching::Both),

       0        // eod
};

void quickstreams::Stream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Stream *_t = static_cast<Stream *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->eventEmitted((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 1: _t->closed((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< WakeCondition(*)>(_a[2]))); break;
        case 2: _t->failed((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< WakeCondition(*)>(_a[2]))); break;
        case 3: _t->aborted((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< WakeCondition(*)>(_a[2]))); break;
        case 4: _t->retryIteration((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< WakeCondition(*)>(_a[2]))); break;
        case 5: _t->repeatIteration((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< WakeCondition(*)>(_a[2]))); break;
        case 6: _t->abortSubordinate(); break;
        case 7: _t->propagateFailureStream((*reinterpret_cast< Stream*(*)>(_a[1]))); break;
        case 8: _t->propagateAbortionStream((*reinterpret_cast< Stream*(*)>(_a[1]))); break;
        case 9: _t->eliminateSubordinate(); break;
        case 10: _t->eliminateSequence(); break;
        case 11: _t->eliminateFailureSequence(); break;
        case 12: _t->eliminateAbortionSequence(); break;
        case 13: _t->initialize(); break;
        case 14: _t->registerFailureSequence((*reinterpret_cast< Stream*(*)>(_a[1]))); break;
        case 15: _t->registerAbortionSequence((*reinterpret_cast< Stream*(*)>(_a[1]))); break;
        case 16: _t->awake((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< quickstreams::Stream::WakeCondition(*)>(_a[2]))); break;
        case 17: _t->awake((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 18: _t->awake(); break;
        case 19: _t->onEliminateSequence(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Stream* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Stream* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Stream* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Stream* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Stream::*_t)(QString , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::eventEmitted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Stream::*_t)(QVariant , WakeCondition );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::closed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Stream::*_t)(QVariant , WakeCondition );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::failed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Stream::*_t)(QVariant , WakeCondition );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::aborted)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Stream::*_t)(QVariant , WakeCondition );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::retryIteration)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Stream::*_t)(QVariant , WakeCondition );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::repeatIteration)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Stream::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::abortSubordinate)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Stream::*_t)(Stream * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::propagateFailureStream)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Stream::*_t)(Stream * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::propagateAbortionStream)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Stream::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::eliminateSubordinate)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Stream::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::eliminateSequence)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Stream::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::eliminateFailureSequence)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Stream::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::eliminateAbortionSequence)) {
                *result = 12;
                return;
            }
        }
    }
}

const QMetaObject quickstreams::Stream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_quickstreams__Stream.data,
      qt_meta_data_quickstreams__Stream,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *quickstreams::Stream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *quickstreams::Stream::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_quickstreams__Stream.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int quickstreams::Stream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void quickstreams::Stream::eventEmitted(QString _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void quickstreams::Stream::closed(QVariant _t1, WakeCondition _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void quickstreams::Stream::failed(QVariant _t1, WakeCondition _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void quickstreams::Stream::aborted(QVariant _t1, WakeCondition _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void quickstreams::Stream::retryIteration(QVariant _t1, WakeCondition _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void quickstreams::Stream::repeatIteration(QVariant _t1, WakeCondition _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void quickstreams::Stream::abortSubordinate()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void quickstreams::Stream::propagateFailureStream(Stream * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void quickstreams::Stream::propagateAbortionStream(Stream * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void quickstreams::Stream::eliminateSubordinate()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void quickstreams::Stream::eliminateSequence()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void quickstreams::Stream::eliminateFailureSequence()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void quickstreams::Stream::eliminateAbortionSequence()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
