/****************************************************************************
** Meta object code from reading C++ file 'tperson.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../tperson.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tperson.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTPersonENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTPersonENDCLASS = QtMocHelpers::stringData(
    "TPerson",
    "author",
    "Xia",
    "company",
    "XiasC",
    "Ver",
    "1.0",
    "ageChanged",
    "",
    "ageValue"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTPersonENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[8];
    char stringdata1[7];
    char stringdata2[4];
    char stringdata3[8];
    char stringdata4[6];
    char stringdata5[4];
    char stringdata6[4];
    char stringdata7[11];
    char stringdata8[1];
    char stringdata9[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTPersonENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTPersonENDCLASS_t qt_meta_stringdata_CLASSTPersonENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "TPerson"
        QT_MOC_LITERAL(8, 6),  // "author"
        QT_MOC_LITERAL(15, 3),  // "Xia"
        QT_MOC_LITERAL(19, 7),  // "company"
        QT_MOC_LITERAL(27, 5),  // "XiasC"
        QT_MOC_LITERAL(33, 3),  // "Ver"
        QT_MOC_LITERAL(37, 3),  // "1.0"
        QT_MOC_LITERAL(41, 10),  // "ageChanged"
        QT_MOC_LITERAL(52, 0),  // ""
        QT_MOC_LITERAL(53, 8)   // "ageValue"
    },
    "TPerson",
    "author",
    "Xia",
    "company",
    "XiasC",
    "Ver",
    "1.0",
    "ageChanged",
    "",
    "ageValue"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTPersonENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       3,   14, // classinfo
       1,   20, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   26,    8, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject TPerson::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTPersonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTPersonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTPersonENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TPerson, std::true_type>,
        // method 'ageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void TPerson::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TPerson *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ageChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TPerson::*)(int );
            if (_t _q_method = &TPerson::ageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TPerson::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TPerson::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTPersonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TPerson::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TPerson::ageChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
