/****************************************************************************
** Meta object code from reading C++ file 'MasterActions.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MasterActions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MasterActions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MasterActions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      41,   14,   14,   14, 0x08,
      71,   14,   14,   14, 0x08,
     100,   14,   14,   14, 0x08,
     130,   14,   14,   14, 0x08,
     156,   14,   14,   14, 0x08,
     179,   14,   14,   14, 0x08,
     202,   14,   14,   14, 0x08,
     237,   14,   14,   14, 0x08,
     261,   14,   14,   14, 0x08,
     293,   14,   14,   14, 0x08,
     324,   14,   14,   14, 0x08,
     346,   14,   14,   14, 0x08,
     370,   14,   14,   14, 0x08,
     400,   14,   14,   14, 0x08,
     430,   14,   14,   14, 0x08,
     462,   14,   14,   14, 0x08,
     490,   14,   14,   14, 0x08,
     518,   14,   14,   14, 0x08,
     549,   14,   14,   14, 0x08,
     580,   14,   14,   14, 0x08,
     610,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MasterActions[] = {
    "MasterActions\0\0handleNewFileActionSlot()\0"
    "handleNewTerminalActionSlot()\0"
    "handleNewProjectActionSlot()\0"
    "handleOpenProjectActionSlot()\0"
    "handleSaveAllActionSlot()\0"
    "handleUndoActionSlot()\0handleRedoActionSlot()\0"
    "handleSetProjectConfigActionSlot()\0"
    "handleBuildActionSlot()\0"
    "handleCleanAndBuildActionSlot()\0"
    "handleConfigForRunActionSlot()\0"
    "handleRunActionSlot()\0handleDebugActionSlot()\0"
    "handleProfileProjActionSlot()\0"
    "handleOutputSouthActionSlot()\0"
    "handleTerminalSouthActionSlot()\0"
    "handleDebugEastActionSlot()\0"
    "handleStartEastActionSlot()\0"
    "handleStepIntoEastActionSlot()\0"
    "handleStepOverEastActionSlot()\0"
    "handleProjectWestActionSlot()\0"
    "handleNavWestActionSlot()\0"
};

void MasterActions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MasterActions *_t = static_cast<MasterActions *>(_o);
        switch (_id) {
        case 0: _t->handleNewFileActionSlot(); break;
        case 1: _t->handleNewTerminalActionSlot(); break;
        case 2: _t->handleNewProjectActionSlot(); break;
        case 3: _t->handleOpenProjectActionSlot(); break;
        case 4: _t->handleSaveAllActionSlot(); break;
        case 5: _t->handleUndoActionSlot(); break;
        case 6: _t->handleRedoActionSlot(); break;
        case 7: _t->handleSetProjectConfigActionSlot(); break;
        case 8: _t->handleBuildActionSlot(); break;
        case 9: _t->handleCleanAndBuildActionSlot(); break;
        case 10: _t->handleConfigForRunActionSlot(); break;
        case 11: _t->handleRunActionSlot(); break;
        case 12: _t->handleDebugActionSlot(); break;
        case 13: _t->handleProfileProjActionSlot(); break;
        case 14: _t->handleOutputSouthActionSlot(); break;
        case 15: _t->handleTerminalSouthActionSlot(); break;
        case 16: _t->handleDebugEastActionSlot(); break;
        case 17: _t->handleStartEastActionSlot(); break;
        case 18: _t->handleStepIntoEastActionSlot(); break;
        case 19: _t->handleStepOverEastActionSlot(); break;
        case 20: _t->handleProjectWestActionSlot(); break;
        case 21: _t->handleNavWestActionSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MasterActions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MasterActions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasterActions,
      qt_meta_data_MasterActions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MasterActions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MasterActions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MasterActions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MasterActions))
        return static_cast<void*>(const_cast< MasterActions*>(this));
    return QWidget::qt_metacast(_clname);
}

int MasterActions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
