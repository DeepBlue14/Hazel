/****************************************************************************
** Meta object code from reading C++ file 'FileTreeGui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FileTreeGui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileTreeGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileTreeGui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x08,
      65,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FileTreeGui[] = {
    "FileTreeGui\0\0item,\0"
    "handleShowDirectorySlot(QTreeWidgetItem*,int)\0"
    "handleRightClickSlot(QPoint)\0"
};

void FileTreeGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileTreeGui *_t = static_cast<FileTreeGui *>(_o);
        switch (_id) {
        case 0: _t->handleShowDirectorySlot((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->handleRightClickSlot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileTreeGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileTreeGui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FileTreeGui,
      qt_meta_data_FileTreeGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileTreeGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileTreeGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileTreeGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileTreeGui))
        return static_cast<void*>(const_cast< FileTreeGui*>(this));
    return QWidget::qt_metacast(_clname);
}

int FileTreeGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
