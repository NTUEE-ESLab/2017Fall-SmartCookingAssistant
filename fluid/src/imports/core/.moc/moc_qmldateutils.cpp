/****************************************************************************
** Meta object code from reading C++ file 'qmldateutils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmldateutils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmldateutils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DateUtils_t {
    QByteArrayData data[20];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DateUtils_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DateUtils_t qt_meta_stringdata_DateUtils = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DateUtils"
QT_MOC_LITERAL(1, 10, 13), // "formattedDate"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "date"
QT_MOC_LITERAL(4, 30, 14), // "formatDuration"
QT_MOC_LITERAL(5, 45, 8), // "duration"
QT_MOC_LITERAL(6, 54, 14), // "DurationFormat"
QT_MOC_LITERAL(7, 69, 6), // "format"
QT_MOC_LITERAL(8, 76, 12), // "DurationType"
QT_MOC_LITERAL(9, 89, 4), // "type"
QT_MOC_LITERAL(10, 94, 12), // "friendlyTime"
QT_MOC_LITERAL(11, 107, 4), // "time"
QT_MOC_LITERAL(12, 112, 10), // "standalone"
QT_MOC_LITERAL(13, 123, 9), // "dayOfWeek"
QT_MOC_LITERAL(14, 133, 4), // "Long"
QT_MOC_LITERAL(15, 138, 5), // "Short"
QT_MOC_LITERAL(16, 144, 7), // "Seconds"
QT_MOC_LITERAL(17, 152, 7), // "Minutes"
QT_MOC_LITERAL(18, 160, 5), // "Hours"
QT_MOC_LITERAL(19, 166, 3) // "Any"

    },
    "DateUtils\0formattedDate\0\0date\0"
    "formatDuration\0duration\0DurationFormat\0"
    "format\0DurationType\0type\0friendlyTime\0"
    "time\0standalone\0dayOfWeek\0Long\0Short\0"
    "Seconds\0Minutes\0Hours\0Any"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DateUtils[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       2,   70, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x02 /* Public */,
       4,    3,   47,    2, 0x02 /* Public */,
       4,    2,   54,    2, 0x22 /* Public | MethodCloned */,
       4,    1,   59,    2, 0x22 /* Public | MethodCloned */,
      10,    2,   62,    2, 0x02 /* Public */,
      13,    1,   67,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, QMetaType::QDate,    3,
    QMetaType::QString, QMetaType::LongLong, 0x80000000 | 6, 0x80000000 | 8,    5,    7,    9,
    QMetaType::QString, QMetaType::LongLong, 0x80000000 | 6,    5,    7,
    QMetaType::QString, QMetaType::LongLong,    5,
    QMetaType::QString, QMetaType::QDateTime, QMetaType::Bool,   11,   12,
    QMetaType::QString, QMetaType::QDate,    3,

 // enums: name, flags, count, data
       6, 0x0,    2,   78,
       8, 0x0,    4,   82,

 // enum data: key, value
      14, uint(DateUtils::Long),
      15, uint(DateUtils::Short),
      16, uint(DateUtils::Seconds),
      17, uint(DateUtils::Minutes),
      18, uint(DateUtils::Hours),
      19, uint(DateUtils::Any),

       0        // eod
};

void DateUtils::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DateUtils *_t = static_cast<DateUtils *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->formattedDate((*reinterpret_cast< const QDate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->formatDuration((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< DurationFormat(*)>(_a[2])),(*reinterpret_cast< DurationType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->formatDuration((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< DurationFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->formatDuration((*reinterpret_cast< qlonglong(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->friendlyTime((*reinterpret_cast< const QDateTime(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->dayOfWeek((*reinterpret_cast< const QDate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject DateUtils::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DateUtils.data,
      qt_meta_data_DateUtils,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DateUtils::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DateUtils::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DateUtils.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DateUtils::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
