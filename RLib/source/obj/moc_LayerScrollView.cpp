/****************************************************************************
** Meta object code from reading C++ file 'LayerScrollView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/ui/LayerScrollView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LayerScrollView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TouchObj_t {
    QByteArrayData data[8];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TouchObj_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TouchObj_t qt_meta_stringdata_TouchObj = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TouchObj"
QT_MOC_LITERAL(1, 9, 11), // "signalPress"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 35, 5), // "event"
QT_MOC_LITERAL(5, 41, 10), // "signalMove"
QT_MOC_LITERAL(6, 52, 13), // "signalRelease"
QT_MOC_LITERAL(7, 66, 11) // "signalClick"

    },
    "TouchObj\0signalPress\0\0QMouseEvent*\0"
    "event\0signalMove\0signalRelease\0"
    "signalClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TouchObj[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       7,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void TouchObj::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TouchObj *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalPress((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->signalMove((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->signalRelease((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->signalClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TouchObj::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TouchObj::signalPress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TouchObj::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TouchObj::signalMove)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TouchObj::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TouchObj::signalRelease)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TouchObj::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TouchObj::signalClick)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TouchObj::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TouchObj.data,
    qt_meta_data_TouchObj,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TouchObj::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TouchObj::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TouchObj.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TouchObj::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void TouchObj::signalPress(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TouchObj::signalMove(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TouchObj::signalRelease(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TouchObj::signalClick(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_LayerScrollView_t {
    QByteArrayData data[13];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayerScrollView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayerScrollView_t qt_meta_stringdata_LayerScrollView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "LayerScrollView"
QT_MOC_LITERAL(1, 16, 11), // "signalClick"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "iCellIdx"
QT_MOC_LITERAL(4, 38, 8), // "iPageIdx"
QT_MOC_LITERAL(5, 47, 7), // "iColIdx"
QT_MOC_LITERAL(6, 55, 7), // "iRowIdx"
QT_MOC_LITERAL(7, 63, 15), // "touchPressEvent"
QT_MOC_LITERAL(8, 79, 12), // "QMouseEvent*"
QT_MOC_LITERAL(9, 92, 5), // "event"
QT_MOC_LITERAL(10, 98, 14), // "touchMoveEvent"
QT_MOC_LITERAL(11, 113, 17), // "touchReleaseEvent"
QT_MOC_LITERAL(12, 131, 10) // "touchClick"

    },
    "LayerScrollView\0signalClick\0\0iCellIdx\0"
    "iPageIdx\0iColIdx\0iRowIdx\0touchPressEvent\0"
    "QMouseEvent*\0event\0touchMoveEvent\0"
    "touchReleaseEvent\0touchClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayerScrollView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       1,    3,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   54,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x0a /* Public */,
      11,    1,   60,    2, 0x0a /* Public */,
      12,    1,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void LayerScrollView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayerScrollView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->signalClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->touchPressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->touchMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->touchReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->touchClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LayerScrollView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayerScrollView::signalClick)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LayerScrollView::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayerScrollView::signalClick)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LayerScrollView::staticMetaObject = { {
    QMetaObject::SuperData::link<LayerWheel::staticMetaObject>(),
    qt_meta_stringdata_LayerScrollView.data,
    qt_meta_data_LayerScrollView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LayerScrollView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayerScrollView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LayerScrollView.stringdata0))
        return static_cast<void*>(this);
    return LayerWheel::qt_metacast(_clname);
}

int LayerScrollView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LayerWheel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void LayerScrollView::signalClick(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LayerScrollView::signalClick(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
