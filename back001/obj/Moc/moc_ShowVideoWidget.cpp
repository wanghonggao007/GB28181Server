/****************************************************************************
** Meta object code from reading C++ file 'ShowVideoWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/widget/ShowVideoWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShowVideoWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ShowVideoWidget_t {
    QByteArrayData data[5];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShowVideoWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShowVideoWidget_t qt_meta_stringdata_ShowVideoWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ShowVideoWidget"
QT_MOC_LITERAL(1, 16, 16), // "sig_DisPlayVideo"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "img"
QT_MOC_LITERAL(4, 38, 16) // "slotDisPlayVideo"

    },
    "ShowVideoWidget\0sig_DisPlayVideo\0\0img\0"
    "slotDisPlayVideo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShowVideoWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    3,

       0        // eod
};

void ShowVideoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShowVideoWidget *_t = static_cast<ShowVideoWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_DisPlayVideo((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->slotDisPlayVideo((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ShowVideoWidget::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShowVideoWidget::sig_DisPlayVideo)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ShowVideoWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ShowVideoWidget.data,
      qt_meta_data_ShowVideoWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ShowVideoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShowVideoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ShowVideoWidget.stringdata0))
        return static_cast<void*>(const_cast< ShowVideoWidget*>(this));
    if (!strcmp(_clname, "VideoChannelEventHandle"))
        return static_cast< VideoChannelEventHandle*>(const_cast< ShowVideoWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ShowVideoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ShowVideoWidget::sig_DisPlayVideo(const QImage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
