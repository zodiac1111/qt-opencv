/****************************************************************************
** Meta object code from reading C++ file 'ProcessingSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ProcessingSettingsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProcessingSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProcessingSettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   25,   25,   25, 0x0a,
     112,   25,   25,   25, 0x08,
     139,   25,   25,   25, 0x08,
     169,   25,   25,   25, 0x08,
     199,   25,   25,   25, 0x08,
     228,   25,   25,   25, 0x08,
     256,   25,   25,   25, 0x08,
     285,   25,   25,   25, 0x08,
     313,   25,   25,   25, 0x08,
     330,   25,   25,   25, 0x08,
     365,   25,   25,   25, 0x08,
     395,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ProcessingSettingsDialog[] = {
    "ProcessingSettingsDialog\0\0p_settings\0"
    "newProcessingSettings(ProcessingSettings)\0"
    "updateStoredSettingsFromDialog()\0"
    "resetAllDialogToDefaults()\0"
    "resetSmoothDialogToDefaults()\0"
    "resetDilateDialogToDefaults()\0"
    "resetErodeDialogToDefaults()\0"
    "resetFlipDialogToDefaults()\0"
    "resetCannyDialogToDefaults()\0"
    "resetFaceDetectToDefaults()\0"
    "validateDialog()\0smoothTypeChange(QAbstractButton*)\0"
    "chooseFacedetectCascadeFile()\0"
    "chooseFacedetectNestedCascadeFile()\0"
};

void ProcessingSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProcessingSettingsDialog *_t = static_cast<ProcessingSettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->newProcessingSettings((*reinterpret_cast< ProcessingSettings(*)>(_a[1]))); break;
        case 1: _t->updateStoredSettingsFromDialog(); break;
        case 2: _t->resetAllDialogToDefaults(); break;
        case 3: _t->resetSmoothDialogToDefaults(); break;
        case 4: _t->resetDilateDialogToDefaults(); break;
        case 5: _t->resetErodeDialogToDefaults(); break;
        case 6: _t->resetFlipDialogToDefaults(); break;
        case 7: _t->resetCannyDialogToDefaults(); break;
        case 8: _t->resetFaceDetectToDefaults(); break;
        case 9: _t->validateDialog(); break;
        case 10: _t->smoothTypeChange((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 11: _t->chooseFacedetectCascadeFile(); break;
        case 12: _t->chooseFacedetectNestedCascadeFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProcessingSettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProcessingSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProcessingSettingsDialog,
      qt_meta_data_ProcessingSettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProcessingSettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProcessingSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProcessingSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessingSettingsDialog))
        return static_cast<void*>(const_cast< ProcessingSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ProcessingSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ProcessingSettingsDialog::newProcessingSettings(ProcessingSettings _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
