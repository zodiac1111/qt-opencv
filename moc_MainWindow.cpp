/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   12,   11,   11, 0x05,
      65,   56,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      87,   11,   11,   11, 0x0a,
     105,   11,   11,   11, 0x0a,
     124,   11,   11,   11, 0x0a,
     132,   11,   11,   11, 0x0a,
     151,   11,   11,   11, 0x0a,
     170,   11,   11,   11, 0x0a,
     186,   11,   11,   11, 0x0a,
     202,   11,   11,   11, 0x0a,
     217,   11,   11,   11, 0x0a,
     231,   11,   11,   11, 0x0a,
     246,   11,   11,   11, 0x0a,
     266,   11,   11,   11, 0x0a,
     290,   11,   11,   11, 0x0a,
     318,   11,   11,   11, 0x0a,
     348,  342,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0p_flags\0"
    "newProcessingFlags(ProcessingFlags)\0"
    "taskData\0newTaskData(TaskData)\0"
    "connectToCamera()\0disconnectCamera()\0"
    "about()\0clearImageBuffer()\0"
    "setGrayscale(bool)\0setSmooth(bool)\0"
    "setDilate(bool)\0setErode(bool)\0"
    "setFlip(bool)\0setCanny(bool)\0"
    "setFacedetect(bool)\0setProcessingSettings()\0"
    "updateMouseCursorPosLabel()\0"
    "newMouseData(MouseData)\0frame\0"
    "updateFrame(QImage)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->newProcessingFlags((*reinterpret_cast< ProcessingFlags(*)>(_a[1]))); break;
        case 1: _t->newTaskData((*reinterpret_cast< TaskData(*)>(_a[1]))); break;
        case 2: _t->connectToCamera(); break;
        case 3: _t->disconnectCamera(); break;
        case 4: _t->about(); break;
        case 5: _t->clearImageBuffer(); break;
        case 6: _t->setGrayscale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setSmooth((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setDilate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setErode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setFlip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setCanny((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setFacedetect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setProcessingSettings(); break;
        case 14: _t->updateMouseCursorPosLabel(); break;
        case 15: _t->newMouseData((*reinterpret_cast< MouseData(*)>(_a[1]))); break;
        case 16: _t->updateFrame((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::newProcessingFlags(ProcessingFlags _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::newTaskData(TaskData _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
