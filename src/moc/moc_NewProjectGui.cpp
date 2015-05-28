/****************************************************************************
** Meta object code from reading C++ file 'NewProjectGui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../NewProjectGui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NewProjectGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NewProjectGui[] = {

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
      15,   14,   14,   14, 0x08,
      35,   14,   14,   14, 0x08,
      55,   14,   14,   14, 0x08,
      77,   14,   14,   14, 0x08,
      97,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NewProjectGui[] = {
    "NewProjectGui\0\0handleBackBtnSlot()\0"
    "handleNextBtnSlot()\0handleFinishBtnSlot()\0"
    "handleHelpBntSlot()\0handleCancelBtnSlot()\0"
};

void NewProjectGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NewProjectGui *_t = static_cast<NewProjectGui *>(_o);
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

const QMetaObjectExtraData NewProjectGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NewProjectGui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NewProjectGui,
      qt_meta_data_NewProjectGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NewProjectGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NewProjectGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NewProjectGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NewProjectGui))
        return static_cast<void*>(const_cast< NewProjectGui*>(this));
    return QWidget::qt_metacast(_clname);
}

int NewProjectGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
