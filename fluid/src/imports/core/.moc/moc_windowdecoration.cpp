/****************************************************************************
** Meta object code from reading C++ file 'windowdecoration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../windowdecoration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowdecoration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowDecoration_t {
    QByteArrayData data[13];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowDecoration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowDecoration_t qt_meta_stringdata_WindowDecoration = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WindowDecoration"
QT_MOC_LITERAL(1, 17, 13), // "windowChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "themeChanged"
QT_MOC_LITERAL(4, 45, 12), // "colorChanged"
QT_MOC_LITERAL(5, 58, 21), // "updateDecorationColor"
QT_MOC_LITERAL(6, 80, 6), // "window"
QT_MOC_LITERAL(7, 87, 8), // "QWindow*"
QT_MOC_LITERAL(8, 96, 5), // "theme"
QT_MOC_LITERAL(9, 102, 5), // "Theme"
QT_MOC_LITERAL(10, 108, 5), // "color"
QT_MOC_LITERAL(11, 114, 5), // "Light"
QT_MOC_LITERAL(12, 120, 4) // "Dark"

    },
    "WindowDecoration\0windowChanged\0\0"
    "themeChanged\0colorChanged\0"
    "updateDecorationColor\0window\0QWindow*\0"
    "theme\0Theme\0color\0Light\0Dark"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowDecoration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   38, // properties
       1,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0049510b,
       8, 0x80000000 | 9, 0x0049510b,
      10, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
       9, 0x0,    2,   54,

 // enum data: key, value
      11, uint(WindowDecoration::Light),
      12, uint(WindowDecoration::Dark),

       0        // eod
};

void WindowDecoration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowDecoration *_t = static_cast<WindowDecoration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->windowChanged(); break;
        case 1: _t->themeChanged(); break;
        case 2: _t->colorChanged(); break;
        case 3: _t->updateDecorationColor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WindowDecoration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowDecoration::windowChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WindowDecoration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowDecoration::themeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WindowDecoration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowDecoration::colorChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWindow* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        WindowDecoration *_t = static_cast<WindowDecoration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QWindow**>(_v) = _t->window(); break;
        case 1: *reinterpret_cast< Theme*>(_v) = _t->theme(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        WindowDecoration *_t = static_cast<WindowDecoration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWindow(*reinterpret_cast< QWindow**>(_v)); break;
        case 1: _t->setTheme(*reinterpret_cast< Theme*>(_v)); break;
        case 2: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject WindowDecoration::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WindowDecoration.data,
      qt_meta_data_WindowDecoration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WindowDecoration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowDecoration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowDecoration.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int WindowDecoration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WindowDecoration::windowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WindowDecoration::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WindowDecoration::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
