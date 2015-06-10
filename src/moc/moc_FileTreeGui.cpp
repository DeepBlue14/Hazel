/****************************************************************************
** Meta object code from reading C++ file 'FileTreeGui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FileTreeGui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileTreeGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileTreeGui_t {
    QByteArrayData data[6];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FileTreeGui_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FileTreeGui_t qt_meta_stringdata_FileTreeGui = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 23),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 16),
QT_MOC_LITERAL(4, 54, 4),
QT_MOC_LITERAL(5, 59, 20)
    },
    "FileTreeGui\0handleShowDirectorySlot\0"
    "\0QTreeWidgetItem*\0item\0handleRightClickSlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileTreeGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x08,
       5,    1,   29,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    2,
    QMetaType::Void, QMetaType::QPoint,    2,

       0        // eod
};

void FileTreeGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileTreeGui *_t = static_cast<FileTreeGui *>(_o);
        switch (_id) {
        case 0: _t->handleShowDirectorySlot((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->handleRightClickSlot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FileTreeGui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FileTreeGui.data,
      qt_meta_data_FileTreeGui,  qt_static_metacall, 0, 0}
};


const QMetaObject *FileTreeGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileTreeGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileTreeGui.stringdata))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
