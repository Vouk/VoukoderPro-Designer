/****************************************************************************
** Meta object code from reading C++ file 'sceneeditorview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../components/SceneEditor/sceneeditorview.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sceneeditorview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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
struct qt_meta_stringdata_CLASSSceneEditorViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSceneEditorViewENDCLASS = QtMocHelpers::stringData(
    "SceneEditorView",
    "centerScene",
    "",
    "nodeContextMenuEvent",
    "QtNodes::Node&",
    "node",
    "pos"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSceneEditorViewENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[16];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[15];
    char stringdata5[5];
    char stringdata6[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSceneEditorViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSceneEditorViewENDCLASS_t qt_meta_stringdata_CLASSSceneEditorViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "SceneEditorView"
        QT_MOC_LITERAL(16, 11),  // "centerScene"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 20),  // "nodeContextMenuEvent"
        QT_MOC_LITERAL(50, 14),  // "QtNodes::Node&"
        QT_MOC_LITERAL(65, 4),  // "node"
        QT_MOC_LITERAL(70, 3)   // "pos"
    },
    "SceneEditorView",
    "centerScene",
    "",
    "nodeContextMenuEvent",
    "QtNodes::Node&",
    "node",
    "pos"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSceneEditorViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x0a,    1 /* Public */,
       3,    2,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QPointF,    5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject SceneEditorView::staticMetaObject = { {
    QMetaObject::SuperData::link<QtNodes::FlowView::staticMetaObject>(),
    qt_meta_stringdata_CLASSSceneEditorViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSceneEditorViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSceneEditorViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SceneEditorView, std::true_type>,
        // method 'centerScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nodeContextMenuEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtNodes::Node &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>
    >,
    nullptr
} };

void SceneEditorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SceneEditorView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->centerScene(); break;
        case 1: _t->nodeContextMenuEvent((*reinterpret_cast< std::add_pointer_t<QtNodes::Node&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *SceneEditorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneEditorView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSceneEditorViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtNodes::FlowView::qt_metacast(_clname);
}

int SceneEditorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtNodes::FlowView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
