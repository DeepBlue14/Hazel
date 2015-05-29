/****************************************************************************
** Meta object code from reading C++ file 'MasterActions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MasterActions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MasterActions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MasterActions_t {
    QByteArrayData data[24];
    char stringdata[617];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MasterActions_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MasterActions_t qt_meta_stringdata_MasterActions = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 23),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 27),
QT_MOC_LITERAL(4, 67, 26),
QT_MOC_LITERAL(5, 94, 27),
QT_MOC_LITERAL(6, 122, 23),
QT_MOC_LITERAL(7, 146, 20),
QT_MOC_LITERAL(8, 167, 20),
QT_MOC_LITERAL(9, 188, 32),
QT_MOC_LITERAL(10, 221, 21),
QT_MOC_LITERAL(11, 243, 29),
QT_MOC_LITERAL(12, 273, 28),
QT_MOC_LITERAL(13, 302, 19),
QT_MOC_LITERAL(14, 322, 21),
QT_MOC_LITERAL(15, 344, 27),
QT_MOC_LITERAL(16, 372, 30),
QT_MOC_LITERAL(17, 403, 32),
QT_MOC_LITERAL(18, 436, 28),
QT_MOC_LITERAL(19, 465, 28),
QT_MOC_LITERAL(20, 494, 31),
QT_MOC_LITERAL(21, 526, 31),
QT_MOC_LITERAL(22, 558, 30),
QT_MOC_LITERAL(23, 589, 26)
    },
    "MasterActions\0handleNewFileActionSlot\0"
    "\0handleNewTerminalActionSlot\0"
    "handleNewProjectActionSlot\0"
    "handleOpenProjectActionSlot\0"
    "handleSaveAllActionSlot\0handleUndoActionSlot\0"
    "handleRedoActionSlot\0"
    "handleSetProjectConfigActionSlot\0"
    "handleBuildActionSlot\0"
    "handleCleanAndBuildActionSlot\0"
    "handleConfigForRunActionSlot\0"
    "handleRunActionSlot\0handleDebugActionSlot\0"
    "handleProfileProjActionSlot\0"
    "handleOutputSouthActionPtrSlot\0"
    "handleTerminalSouthActionPtrSlot\0"
    "handleDebugEastActionPtrSlot\0"
    "handleStartEastActionPtrSlot\0"
    "handleStepIntoEastActionPtrSlot\0"
    "handleStepOverEastActionPtrSlot\0"
    "handleProjectWestActionPtrSlot\0"
    "handleNavWestActionPtrSlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasterActions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x08,
       3,    0,  125,    2, 0x08,
       4,    0,  126,    2, 0x08,
       5,    0,  127,    2, 0x08,
       6,    0,  128,    2, 0x08,
       7,    0,  129,    2, 0x08,
       8,    0,  130,    2, 0x08,
       9,    0,  131,    2, 0x08,
      10,    0,  132,    2, 0x08,
      11,    0,  133,    2, 0x08,
      12,    0,  134,    2, 0x08,
      13,    0,  135,    2, 0x08,
      14,    0,  136,    2, 0x08,
      15,    0,  137,    2, 0x08,
      16,    0,  138,    2, 0x08,
      17,    0,  139,    2, 0x08,
      18,    0,  140,    2, 0x08,
      19,    0,  141,    2, 0x08,
      20,    0,  142,    2, 0x08,
      21,    0,  143,    2, 0x08,
      22,    0,  144,    2, 0x08,
      23,    0,  145,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasterActions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
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
        case 14: _t->handleOutputSouthActionPtrSlot(); break;
        case 15: _t->handleTerminalSouthActionPtrSlot(); break;
        case 16: _t->handleDebugEastActionPtrSlot(); break;
        case 17: _t->handleStartEastActionPtrSlot(); break;
        case 18: _t->handleStepIntoEastActionPtrSlot(); break;
        case 19: _t->handleStepOverEastActionPtrSlot(); break;
        case 20: _t->handleProjectWestActionPtrSlot(); break;
        case 21: _t->handleNavWestActionPtrSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MasterActions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasterActions.data,
      qt_meta_data_MasterActions,  qt_static_metacall, 0, 0}
};


const QMetaObject *MasterActions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasterActions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MasterActions.stringdata))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
