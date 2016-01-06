/****************************************************************************
** Meta object code from reading C++ file 'FTDirMenu.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FTDirMenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FTDirMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FTDirMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      38,   10,   10,   10, 0x08,
      62,   10,   10,   10, 0x08,
      86,   10,   10,   10, 0x08,
     110,   10,   10,   10, 0x08,
     129,   10,   10,   10, 0x08,
     149,   10,   10,   10, 0x08,
     172,   10,   10,   10, 0x08,
     195,   10,   10,   10, 0x08,
     218,   10,   10,   10, 0x08,
     241,   10,   10,   10, 0x08,
     264,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FTDirMenu[] = {
    "FTDirMenu\0\0handleCMakeListsMenuSlot()\0"
    "handlePackageMenuSlot()\0handleCHeaderMenuSlot()\0"
    "handleCSourceMenuSlot()\0handlePyMenuSlot()\0"
    "handleCfgMenuSlot()\0handleScriptMenuSlot()\0"
    "handleLaunchMenuSlot()\0handleNewDirMenuSlot()\0"
    "handleDeleteMenuSlot()\0handleRenameMenuSlot()\0"
    "handlePropertiesMenuSlot()\0"
};

void FTDirMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FTDirMenu *_t = static_cast<FTDirMenu *>(_o);
        switch (_id) {
        case 0: _t->handleCMakeListsMenuSlot(); break;
        case 1: _t->handlePackageMenuSlot(); break;
        case 2: _t->handleCHeaderMenuSlot(); break;
        case 3: _t->handleCSourceMenuSlot(); break;
        case 4: _t->handlePyMenuSlot(); break;
        case 5: _t->handleCfgMenuSlot(); break;
        case 6: _t->handleScriptMenuSlot(); break;
        case 7: _t->handleLaunchMenuSlot(); break;
        case 8: _t->handleNewDirMenuSlot(); break;
        case 9: _t->handleDeleteMenuSlot(); break;
        case 10: _t->handleRenameMenuSlot(); break;
        case 11: _t->handlePropertiesMenuSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FTDirMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FTDirMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_FTDirMenu,
      qt_meta_data_FTDirMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FTDirMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FTDirMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FTDirMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FTDirMenu))
        return static_cast<void*>(const_cast< FTDirMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int FTDirMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
