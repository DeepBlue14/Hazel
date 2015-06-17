/****************************************************************************
** Meta object code from reading C++ file 'FileGui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FileGui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileGui_t {
    QByteArrayData data[8];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FileGui_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FileGui_t qt_meta_stringdata_FileGui = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 16),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 10),
QT_MOC_LITERAL(4, 37, 25),
QT_MOC_LITERAL(5, 63, 13),
QT_MOC_LITERAL(6, 77, 20),
QT_MOC_LITERAL(7, 98, 20)
    },
    "FileGui\0insertCompletion\0\0completion\0"
    "updateLineNumberAreaWidth\0newBlockCount\0"
    "highlightCurrentLine\0updateLineNumberArea\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08,
       4,    1,   37,    2, 0x08,
       6,    0,   40,    2, 0x08,
       7,    2,   41,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect, QMetaType::Int,    2,    2,

       0        // eod
};

void FileGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileGui *_t = static_cast<FileGui *>(_o);
        switch (_id) {
        case 0: _t->insertCompletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateLineNumberAreaWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->highlightCurrentLine(); break;
        case 3: _t->updateLineNumberArea((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject FileGui::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_FileGui.data,
      qt_meta_data_FileGui,  qt_static_metacall, 0, 0}
};


const QMetaObject *FileGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileGui.stringdata))
        return static_cast<void*>(const_cast< FileGui*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int FileGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
