/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 17),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 18),
QT_MOC_LITERAL(4, 49, 17),
QT_MOC_LITERAL(5, 67, 19),
QT_MOC_LITERAL(6, 87, 18),
QT_MOC_LITERAL(7, 106, 18),
QT_MOC_LITERAL(8, 125, 20),
QT_MOC_LITERAL(9, 146, 20),
QT_MOC_LITERAL(10, 167, 19),
QT_MOC_LITERAL(11, 187, 23),
QT_MOC_LITERAL(12, 211, 19),
QT_MOC_LITERAL(13, 231, 21),
QT_MOC_LITERAL(14, 253, 20),
QT_MOC_LITERAL(15, 274, 20)
    },
    "MainWindow\0on_cmdAdd_clicked\0\0"
    "on_cmdEdit_clicked\0on_cmdDel_clicked\0"
    "on_cmdAvail_clicked\0on_cmdStat_clicked\0"
    "on_cmdShow_clicked\0on_mnuOpen_triggered\0"
    "on_mnuExit_triggered\0on_mnuAdd_triggered\0"
    "on_mnuEditSub_triggered\0on_mnuDel_triggered\0"
    "on_mnuAvail_triggered\0on_mnuStat_triggered\0"
    "on_mnuList_triggered\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08,
       3,    0,   85,    2, 0x08,
       4,    0,   86,    2, 0x08,
       5,    0,   87,    2, 0x08,
       6,    0,   88,    2, 0x08,
       7,    0,   89,    2, 0x08,
       8,    0,   90,    2, 0x08,
       9,    0,   91,    2, 0x08,
      10,    0,   92,    2, 0x08,
      11,    0,   93,    2, 0x08,
      12,    0,   94,    2, 0x08,
      13,    0,   95,    2, 0x08,
      14,    0,   96,    2, 0x08,
      15,    0,   97,    2, 0x08,

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

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_cmdAdd_clicked(); break;
        case 1: _t->on_cmdEdit_clicked(); break;
        case 2: _t->on_cmdDel_clicked(); break;
        case 3: _t->on_cmdAvail_clicked(); break;
        case 4: _t->on_cmdStat_clicked(); break;
        case 5: _t->on_cmdShow_clicked(); break;
        case 6: _t->on_mnuOpen_triggered(); break;
        case 7: _t->on_mnuExit_triggered(); break;
        case 8: _t->on_mnuAdd_triggered(); break;
        case 9: _t->on_mnuEditSub_triggered(); break;
        case 10: _t->on_mnuDel_triggered(); break;
        case 11: _t->on_mnuAvail_triggered(); break;
        case 12: _t->on_mnuStat_triggered(); break;
        case 13: _t->on_mnuList_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
