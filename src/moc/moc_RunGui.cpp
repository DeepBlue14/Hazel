/****************************************************************************
** Meta object code from reading C++ file 'RunGui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RunGui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RunGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RunGui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      28,    7,    7,    7, 0x08,
      48,    7,    7,    7, 0x08,
      70,    7,    7,    7, 0x08,
      90,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RunGui[] = {
    "RunGui\0\0handleBackBtnSlot()\0"
    "handleNextBtnSlot()\0handleFinishBtnSlot()\0"
    "handleHelpBntSlot()\0handleCancelBtnSlot()\0"
};

void RunGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RunGui *_t = static_cast<RunGui *>(_o);
        switch (_id) {
        case 0: _t->handleBackBtnSlot(); break;
        case 1: _t->handleNextBtnSlot(); break;
        case 2: _t->handleFinishBtnSlot(); break;
        case 3: _t->handleHelpBntSlot(); break;
        case 4: _t->handleCancelBtnSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RunGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RunGui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RunGui,
      qt_meta_data_RunGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RunGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RunGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RunGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RunGui))
        return static_cast<void*>(const_cast< RunGui*>(this));
    return QWidget::qt_metacast(_clname);
}

int RunGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
