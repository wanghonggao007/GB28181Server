/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "sig_deviceRegisted"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "CameraDevice"
QT_MOC_LITERAL(4, 44, 10), // "deviceNode"
QT_MOC_LITERAL(5, 55, 16), // "sig_deviceUpdate"
QT_MOC_LITERAL(6, 72, 18), // "sig_receiveMessage"
QT_MOC_LITERAL(7, 91, 8), // "deviceID"
QT_MOC_LITERAL(8, 100, 11), // "MessageType"
QT_MOC_LITERAL(9, 112, 4), // "type"
QT_MOC_LITERAL(10, 117, 7), // "msgBody"
QT_MOC_LITERAL(11, 125, 18), // "slotDeviceRegisted"
QT_MOC_LITERAL(12, 144, 16), // "slotDeviceUpdate"
QT_MOC_LITERAL(13, 161, 18), // "slotReceiveMessage"
QT_MOC_LITERAL(14, 180, 14), // "slotBtnClicked"
QT_MOC_LITERAL(15, 195, 9), // "isChecked"
QT_MOC_LITERAL(16, 205, 15), // "slotItemClicked"
QT_MOC_LITERAL(17, 221, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(18, 238, 4), // "item"
QT_MOC_LITERAL(19, 243, 6), // "column"
QT_MOC_LITERAL(20, 250, 19), // "slotActionTriggered"
QT_MOC_LITERAL(21, 270, 7) // "checked"

    },
    "MainWindow\0sig_deviceRegisted\0\0"
    "CameraDevice\0deviceNode\0sig_deviceUpdate\0"
    "sig_receiveMessage\0deviceID\0MessageType\0"
    "type\0msgBody\0slotDeviceRegisted\0"
    "slotDeviceUpdate\0slotReceiveMessage\0"
    "slotBtnClicked\0isChecked\0slotItemClicked\0"
    "QTreeWidgetItem*\0item\0column\0"
    "slotActionTriggered\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       6,    3,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   72,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,
      13,    3,   78,    2, 0x08 /* Private */,
      14,    1,   85,    2, 0x08 /* Private */,
      16,    2,   88,    2, 0x08 /* Private */,
      20,    1,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8, QMetaType::QString,    7,    9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8, QMetaType::QString,    7,    9,   10,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int,   18,   19,
    QMetaType::Void, QMetaType::Bool,   21,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_deviceRegisted((*reinterpret_cast< const CameraDevice(*)>(_a[1]))); break;
        case 1: _t->sig_deviceUpdate((*reinterpret_cast< const CameraDevice(*)>(_a[1]))); break;
        case 2: _t->sig_receiveMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const MessageType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->slotDeviceRegisted((*reinterpret_cast< const CameraDevice(*)>(_a[1]))); break;
        case 4: _t->slotDeviceUpdate((*reinterpret_cast< const CameraDevice(*)>(_a[1]))); break;
        case 5: _t->slotReceiveMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const MessageType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->slotBtnClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slotItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->slotActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(const CameraDevice & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sig_deviceRegisted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(const CameraDevice & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sig_deviceUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(const QString & , const MessageType & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sig_receiveMessage)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "GB28181ServerEventHandle"))
        return static_cast< GB28181ServerEventHandle*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sig_deviceRegisted(const CameraDevice & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::sig_deviceUpdate(const CameraDevice & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::sig_receiveMessage(const QString & _t1, const MessageType & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
