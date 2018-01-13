/****************************************************************************
** Meta object code from reading C++ file 'standardpaths.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../fluid/src/imports/core/standardpaths.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'standardpaths.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StandardPaths_t {
    QByteArrayData data[25];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StandardPaths_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StandardPaths_t qt_meta_stringdata_StandardPaths = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StandardPaths"
QT_MOC_LITERAL(1, 14, 10), // "locateFile"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "StandardLocation"
QT_MOC_LITERAL(4, 43, 4), // "type"
QT_MOC_LITERAL(5, 48, 8), // "fileName"
QT_MOC_LITERAL(6, 57, 15), // "locateDirectory"
QT_MOC_LITERAL(7, 73, 7), // "dirName"
QT_MOC_LITERAL(8, 81, 15), // "DesktopLocation"
QT_MOC_LITERAL(9, 97, 17), // "DocumentsLocation"
QT_MOC_LITERAL(10, 115, 13), // "FontsLocation"
QT_MOC_LITERAL(11, 129, 20), // "ApplicationsLocation"
QT_MOC_LITERAL(12, 150, 13), // "MusicLocation"
QT_MOC_LITERAL(13, 164, 14), // "MoviesLocation"
QT_MOC_LITERAL(14, 179, 16), // "PicturesLocation"
QT_MOC_LITERAL(15, 196, 12), // "TempLocation"
QT_MOC_LITERAL(16, 209, 12), // "HomeLocation"
QT_MOC_LITERAL(17, 222, 12), // "DataLocation"
QT_MOC_LITERAL(18, 235, 13), // "CacheLocation"
QT_MOC_LITERAL(19, 249, 19), // "GenericDataLocation"
QT_MOC_LITERAL(20, 269, 15), // "RuntimeLocation"
QT_MOC_LITERAL(21, 285, 14), // "ConfigLocation"
QT_MOC_LITERAL(22, 300, 16), // "DownloadLocation"
QT_MOC_LITERAL(23, 317, 20), // "GenericCacheLocation"
QT_MOC_LITERAL(24, 338, 21) // "GenericConfigLocation"

    },
    "StandardPaths\0locateFile\0\0StandardLocation\0"
    "type\0fileName\0locateDirectory\0dirName\0"
    "DesktopLocation\0DocumentsLocation\0"
    "FontsLocation\0ApplicationsLocation\0"
    "MusicLocation\0MoviesLocation\0"
    "PicturesLocation\0TempLocation\0"
    "HomeLocation\0DataLocation\0CacheLocation\0"
    "GenericDataLocation\0RuntimeLocation\0"
    "ConfigLocation\0DownloadLocation\0"
    "GenericCacheLocation\0GenericConfigLocation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StandardPaths[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x02 /* Public */,
       6,    2,   29,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::QString, 0x80000000 | 3, QMetaType::QString,    4,    7,

 // enums: name, flags, count, data
       3, 0x0,   17,   38,

 // enum data: key, value
       8, uint(StandardPaths::DesktopLocation),
       9, uint(StandardPaths::DocumentsLocation),
      10, uint(StandardPaths::FontsLocation),
      11, uint(StandardPaths::ApplicationsLocation),
      12, uint(StandardPaths::MusicLocation),
      13, uint(StandardPaths::MoviesLocation),
      14, uint(StandardPaths::PicturesLocation),
      15, uint(StandardPaths::TempLocation),
      16, uint(StandardPaths::HomeLocation),
      17, uint(StandardPaths::DataLocation),
      18, uint(StandardPaths::CacheLocation),
      19, uint(StandardPaths::GenericDataLocation),
      20, uint(StandardPaths::RuntimeLocation),
      21, uint(StandardPaths::ConfigLocation),
      22, uint(StandardPaths::DownloadLocation),
      23, uint(StandardPaths::GenericCacheLocation),
      24, uint(StandardPaths::GenericConfigLocation),

       0        // eod
};

void StandardPaths::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StandardPaths *_t = static_cast<StandardPaths *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->locateFile((*reinterpret_cast< StandardLocation(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->locateDirectory((*reinterpret_cast< StandardLocation(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject StandardPaths::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StandardPaths.data,
      qt_meta_data_StandardPaths,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StandardPaths::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StandardPaths::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StandardPaths.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StandardPaths::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
