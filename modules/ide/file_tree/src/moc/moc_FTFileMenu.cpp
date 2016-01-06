/****************************************************************************
** Meta object code from reading C++ file 'FTFileMenu.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FTFileMenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FTFileMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FTFileMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      33,   11,   11,   11, 0x08,
      54,   11,   11,   11, 0x08,
      77,   11,   11,   11, 0x08,
     100,   11,   11,   11, 0x08,
     125,   11,   11,   11, 0x08,
     145,   11,   11,   11, 0x08,
     168,   11,   11,   11, 0x08,
     191,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FTFileMenu[] = {
    "FTFileMenu\0\0handleOpenMenuSlot()\0"
    "handleHideMenuSlot()\0handleDeleteMenuSlot()\0"
    "handleRenameMenuSlot()\0handleRefactorMenuSlot()\0"
    "handleAddMenuSlot()\0handleCommitMenuSlot()\0"
    "handleRemoveMenuSlot()\0"
    "handlePropertiesMenuSlot()\0"
};

void FTFileMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FTFileMenu *_t = static_cast<FTFileMenu *>(_o);
        switch (_id) {
        case 0: _t->handleOpenMenuSlot(); break;
        case 1: _t->handleHideMenuSlot(); break;
        case 2: _t->handleDeleteMenuSlot(); break;
        case 3: _t->handleRenameMenuSlot(); break;
        case 4: _t->handleRefactorMenuSlot(); break;
        case 5: _t->handleAddMenuSlot(); break;
        case 6: _t->handleCommitMenuSlot(); break;
        case 7: _t->handleRemoveMenuSlot(); break;
        case 8: _t->handlePropertiesMenuSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FTFileMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FTFileMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FTFileMenu,
      qt_meta_data_FTFileMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FTFileMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FTFileMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FTFileMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FTFileMenu))
        return static_cast<void*>(const_cast< FTFileMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int FTFileMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
