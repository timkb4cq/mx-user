/****************************************************************************
** Meta object code from reading C++ file 'mconfig.h'
**
** Created: Mon Feb 3 07:55:56 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mconfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      21,    8,    8,    8, 0x0a,
      52,   32,    8,    8, 0x0a,
      87,    8,    8,    8, 0x0a,
      94,    8,    8,    8, 0x0a,
     126,    8,    8,    8, 0x0a,
     154,    8,    8,    8, 0x0a,
     185,    8,    8,    8, 0x0a,
     214,    8,    8,    8, 0x0a,
     244,    8,    8,    8, 0x0a,
     269,    8,    8,    8, 0x0a,
     295,    8,    8,    8, 0x0a,
     317,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MConfig[] = {
    "MConfig\0\0syncStart()\0syncTime()\0"
    "exitCode,exitStatus\0"
    "syncDone(int,QProcess::ExitStatus)\0"
    "show()\0on_fromUserComboBox_activated()\0"
    "on_userComboBox_activated()\0"
    "on_deleteUserCombo_activated()\0"
    "on_userNameEdit_textEdited()\0"
    "on_tabWidget_currentChanged()\0"
    "on_buttonApply_clicked()\0"
    "on_buttonCancel_clicked()\0"
    "on_buttonOk_clicked()\0on_buttonAbout_clicked()\0"
};

void MConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MConfig *_t = static_cast<MConfig *>(_o);
        switch (_id) {
        case 0: _t->syncStart(); break;
        case 1: _t->syncTime(); break;
        case 2: _t->syncDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 3: _t->show(); break;
        case 4: _t->on_fromUserComboBox_activated(); break;
        case 5: _t->on_userComboBox_activated(); break;
        case 6: _t->on_deleteUserCombo_activated(); break;
        case 7: _t->on_userNameEdit_textEdited(); break;
        case 8: _t->on_tabWidget_currentChanged(); break;
        case 9: _t->on_buttonApply_clicked(); break;
        case 10: _t->on_buttonCancel_clicked(); break;
        case 11: _t->on_buttonOk_clicked(); break;
        case 12: _t->on_buttonAbout_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MConfig::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MConfig,
      qt_meta_data_MConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MConfig))
        return static_cast<void*>(const_cast< MConfig*>(this));
    if (!strcmp(_clname, "Ui::MEConfig"))
        return static_cast< Ui::MEConfig*>(const_cast< MConfig*>(this));
    return QDialog::qt_metacast(_clname);
}

int MConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
