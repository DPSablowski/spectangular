/****************************************************************************
** Meta object code from reading C++ file 'correlation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "correlation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'correlation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_correlation_t {
    QByteArrayData data[10];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_correlation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_correlation_t qt_meta_stringdata_correlation = {
    {
QT_MOC_LITERAL(0, 0, 11), // "correlation"
QT_MOC_LITERAL(1, 12, 6), // "seData"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 3), // "str"
QT_MOC_LITERAL(4, 24, 4), // "str1"
QT_MOC_LITERAL(5, 29, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(6, 53, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(7, 77, 24), // "on_lineEdit_4_textEdited"
QT_MOC_LITERAL(8, 102, 21), // "on_checkBox_4_clicked"
QT_MOC_LITERAL(9, 124, 14) // "Do_correlation"

    },
    "correlation\0seData\0\0str\0str1\0"
    "on_pushButton_2_clicked\0on_pushButton_4_clicked\0"
    "on_lineEdit_4_textEdited\0on_checkBox_4_clicked\0"
    "Do_correlation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_correlation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x0a /* Public */,
       5,    0,   49,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void correlation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<correlation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->seData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_4_clicked(); break;
        case 3: _t->on_lineEdit_4_textEdited(); break;
        case 4: _t->on_checkBox_4_clicked(); break;
        case 5: _t->Do_correlation(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject correlation::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_correlation.data,
    qt_meta_data_correlation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *correlation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *correlation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_correlation.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int correlation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
