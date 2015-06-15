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
    QByteArrayData data[20];
    char stringdata[475];
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
QT_MOC_LITERAL(15, 344, 19),
QT_MOC_LITERAL(16, 364, 27),
QT_MOC_LITERAL(17, 392, 29),
QT_MOC_LITERAL(18, 422, 23),
QT_MOC_LITERAL(19, 446, 27)
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
    "handleGitActionSlot\0handleOutputSouthActionSlot\0"
    "handleTerminalSouthActionSlot\0"
    "handleNavEastActionSlot\0"
    "handleProjectWestActionSlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasterActions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08,
       3,    0,  105,    2, 0x08,
       4,    0,  106,    2, 0x08,
       5,    0,  107,    2, 0x08,
       6,    0,  108,    2, 0x08,
       7,    0,  109,    2, 0x08,
       8,    0,  110,    2, 0x08,
       9,    0,  111,    2, 0x08,
      10,    0,  112,    2, 0x08,
      11,    0,  113,    2, 0x08,
      12,    0,  114,    2, 0x08,
      13,    0,  115,    2, 0x08,
      14,    0,  116,    2, 0x08,
      15,    0,  117,    2, 0x08,
      16,    0,  118,    2, 0x08,
      17,    0,  119,    2, 0x08,
      18,    0,  120,    2, 0x08,
      19,    0,  121,    2, 0x08,

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
        case 13: _t->handleGitActionSlot(); break;
        case 14: _t->handleOutputSouthActionSlot(); break;
        case 15: _t->handleTerminalSouthActionSlot(); break;
        case 16: _t->handleNavEastActionSlot(); break;
        case 17: _t->handleProjectWestActionSlot(); break;
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
