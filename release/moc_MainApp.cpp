/****************************************************************************
** Meta object code from reading C++ file 'MainApp.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MainApp.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainApp.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainApp_t {
    QByteArrayData data[5];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainApp_t qt_meta_stringdata_MainApp = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MainApp"
QT_MOC_LITERAL(1, 8, 25), // "on_generateButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(4, 57, 27) // "on_viewerLoadButton_clicked"

    },
    "MainApp\0on_generateButton_clicked\0\0"
    "on_saveButton_clicked\0on_viewerLoadButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainApp *_t = static_cast<MainApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_generateButton_clicked(); break;
        case 1: _t->on_saveButton_clicked(); break;
        case 2: _t->on_viewerLoadButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainApp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainApp.data,
      qt_meta_data_MainApp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainApp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainApp.stringdata0))
        return static_cast<void*>(const_cast< MainApp*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
