/****************************************************************************
** Meta object code from reading C++ file 'LayerKeyborad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/ui/LayerKeyborad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LayerKeyborad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LayerKeyborad_t {
    QByteArrayData data[21];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayerKeyborad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayerKeyborad_t qt_meta_stringdata_LayerKeyborad = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LayerKeyborad"
QT_MOC_LITERAL(1, 14, 10), // "signalText"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "sText"
QT_MOC_LITERAL(4, 32, 15), // "slotWordPressed"
QT_MOC_LITERAL(5, 48, 16), // "slotWordReleased"
QT_MOC_LITERAL(6, 65, 13), // "slotAniFinish"
QT_MOC_LITERAL(7, 79, 11), // "callToolTip"
QT_MOC_LITERAL(8, 91, 5), // "bShow"
QT_MOC_LITERAL(9, 97, 12), // "QPushButton*"
QT_MOC_LITERAL(10, 110, 6), // "target"
QT_MOC_LITERAL(11, 117, 20), // "on_btnChange_clicked"
QT_MOC_LITERAL(12, 138, 7), // "checked"
QT_MOC_LITERAL(13, 146, 19), // "on_btnSpace_clicked"
QT_MOC_LITERAL(14, 166, 20), // "on_btnReturn_clicked"
QT_MOC_LITERAL(15, 187, 22), // "on_btnSpChange_clicked"
QT_MOC_LITERAL(16, 210, 19), // "on_btnShift_clicked"
QT_MOC_LITERAL(17, 230, 18), // "on_btnSub2_clicked"
QT_MOC_LITERAL(18, 249, 17), // "on_btnSub_clicked"
QT_MOC_LITERAL(19, 267, 9), // "slotClear"
QT_MOC_LITERAL(20, 277, 20) // "on_btnCancel_clicked"

    },
    "LayerKeyborad\0signalText\0\0sText\0"
    "slotWordPressed\0slotWordReleased\0"
    "slotAniFinish\0callToolTip\0bShow\0"
    "QPushButton*\0target\0on_btnChange_clicked\0"
    "checked\0on_btnSpace_clicked\0"
    "on_btnReturn_clicked\0on_btnSpChange_clicked\0"
    "on_btnShift_clicked\0on_btnSub2_clicked\0"
    "on_btnSub_clicked\0slotClear\0"
    "on_btnCancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayerKeyborad[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   92,    2, 0x08 /* Private */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    2,   95,    2, 0x08 /* Private */,
       7,    1,  100,    2, 0x28 /* Private | MethodCloned */,
      11,    1,  103,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    1,  108,    2, 0x08 /* Private */,
      16,    1,  111,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,
      19,    0,  116,    2, 0x08 /* Private */,
      20,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 9,    8,   10,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LayerKeyborad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayerKeyborad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->slotWordPressed(); break;
        case 2: _t->slotWordReleased(); break;
        case 3: _t->slotAniFinish(); break;
        case 4: _t->callToolTip((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QPushButton*(*)>(_a[2]))); break;
        case 5: _t->callToolTip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_btnChange_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_btnSpace_clicked(); break;
        case 8: _t->on_btnReturn_clicked(); break;
        case 9: _t->on_btnSpChange_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_btnShift_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_btnSub2_clicked(); break;
        case 12: _t->on_btnSub_clicked(); break;
        case 13: _t->slotClear(); break;
        case 14: _t->on_btnCancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPushButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LayerKeyborad::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayerKeyborad::signalText)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LayerKeyborad::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LayerKeyborad.data,
    qt_meta_data_LayerKeyborad,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LayerKeyborad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayerKeyborad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LayerKeyborad.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LayerKeyborad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void LayerKeyborad::signalText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
