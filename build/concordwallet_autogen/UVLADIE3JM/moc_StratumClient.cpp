/****************************************************************************
** Meta object code from reading C++ file 'StratumClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/StratumClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StratumClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__StratumClient_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__StratumClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__StratumClient_t qt_meta_stringdata_WalletGui__StratumClient = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGui::StratumClient"
QT_MOC_LITERAL(1, 25, 17), // "submitShareSignal"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 6), // "_jobId"
QT_MOC_LITERAL(4, 51, 6), // "_nonce"
QT_MOC_LITERAL(5, 58, 7), // "_result"
QT_MOC_LITERAL(6, 66, 17), // "socketErrorSignal"
QT_MOC_LITERAL(7, 84, 10) // "_errorText"

    },
    "WalletGui::StratumClient\0submitShareSignal\0"
    "\0_jobId\0_nonce\0_result\0socketErrorSignal\0"
    "_errorText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__StratumClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,
       6,    1,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::QByteArray,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void WalletGui::StratumClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StratumClient *_t = static_cast<StratumClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->submitShareSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 1: _t->socketErrorSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (StratumClient::*_t)(const QString & , quint32 , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StratumClient::submitShareSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StratumClient::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StratumClient::socketErrorSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::StratumClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__StratumClient.data,
      qt_meta_data_WalletGui__StratumClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::StratumClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::StratumClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__StratumClient.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IWorkerObserver"))
        return static_cast< IWorkerObserver*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::StratumClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WalletGui::StratumClient::submitShareSignal(const QString & _t1, quint32 _t2, const QByteArray & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::StratumClient::socketErrorSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE