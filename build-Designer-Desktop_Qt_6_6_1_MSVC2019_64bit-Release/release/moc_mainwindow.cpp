/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_sceneSelectionChanged",
    "",
    "on_actionSceneNewEmpty_triggered",
    "on_actionSceneNewSimple_triggered",
    "on_actionSceneOpen_triggered",
    "on_actionSceneSave_triggered",
    "on_actionSceneSaveAs_triggered",
    "on_actionSceneClose_triggered",
    "on_actionSceneImport_triggered",
    "on_actionSceneExport_triggered",
    "on_actionSceneExit_triggered",
    "on_actionNodeInputVideo_triggered",
    "on_actionNodeInputAudio_triggered",
    "on_actionNodeFilterVideo_triggered",
    "on_actionNodeFilterAudio_triggered",
    "on_actionNodeEncoderVideo_triggered",
    "on_actionNodeEncoderAudio_triggered",
    "on_actionNodeMuxer_triggered",
    "on_actionNodeOutput_triggered",
    "on_actionNodeDelete_triggered",
    "on_actionNodeProperties_triggered",
    "on_actionViewCenter_triggered",
    "on_menuNode_aboutToShow",
    "on_menuNode_aboutToHide",
    "on_actionHelpAbout_triggered",
    "on_scenes_tabCloseRequested",
    "index",
    "on_actionPreferences_triggered",
    "on_scenes_currentChanged",
    "on_actionNodePostProc_triggered",
    "on_actionSceneNewFilter_triggered",
    "on_actionWindowNews_triggered",
    "on_actionToolsPerformance_Test_triggered",
    "onNewsUpdate",
    "news",
    "on_actionRegister_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[74];
    char stringdata0[11];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[33];
    char stringdata4[34];
    char stringdata5[29];
    char stringdata6[29];
    char stringdata7[31];
    char stringdata8[30];
    char stringdata9[31];
    char stringdata10[31];
    char stringdata11[29];
    char stringdata12[34];
    char stringdata13[34];
    char stringdata14[35];
    char stringdata15[35];
    char stringdata16[36];
    char stringdata17[36];
    char stringdata18[29];
    char stringdata19[30];
    char stringdata20[30];
    char stringdata21[34];
    char stringdata22[30];
    char stringdata23[24];
    char stringdata24[24];
    char stringdata25[29];
    char stringdata26[28];
    char stringdata27[6];
    char stringdata28[31];
    char stringdata29[25];
    char stringdata30[32];
    char stringdata31[34];
    char stringdata32[30];
    char stringdata33[41];
    char stringdata34[13];
    char stringdata35[5];
    char stringdata36[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 24),  // "on_sceneSelectionChanged"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 32),  // "on_actionSceneNewEmpty_triggered"
        QT_MOC_LITERAL(70, 33),  // "on_actionSceneNewSimple_trigg..."
        QT_MOC_LITERAL(104, 28),  // "on_actionSceneOpen_triggered"
        QT_MOC_LITERAL(133, 28),  // "on_actionSceneSave_triggered"
        QT_MOC_LITERAL(162, 30),  // "on_actionSceneSaveAs_triggered"
        QT_MOC_LITERAL(193, 29),  // "on_actionSceneClose_triggered"
        QT_MOC_LITERAL(223, 30),  // "on_actionSceneImport_triggered"
        QT_MOC_LITERAL(254, 30),  // "on_actionSceneExport_triggered"
        QT_MOC_LITERAL(285, 28),  // "on_actionSceneExit_triggered"
        QT_MOC_LITERAL(314, 33),  // "on_actionNodeInputVideo_trigg..."
        QT_MOC_LITERAL(348, 33),  // "on_actionNodeInputAudio_trigg..."
        QT_MOC_LITERAL(382, 34),  // "on_actionNodeFilterVideo_trig..."
        QT_MOC_LITERAL(417, 34),  // "on_actionNodeFilterAudio_trig..."
        QT_MOC_LITERAL(452, 35),  // "on_actionNodeEncoderVideo_tri..."
        QT_MOC_LITERAL(488, 35),  // "on_actionNodeEncoderAudio_tri..."
        QT_MOC_LITERAL(524, 28),  // "on_actionNodeMuxer_triggered"
        QT_MOC_LITERAL(553, 29),  // "on_actionNodeOutput_triggered"
        QT_MOC_LITERAL(583, 29),  // "on_actionNodeDelete_triggered"
        QT_MOC_LITERAL(613, 33),  // "on_actionNodeProperties_trigg..."
        QT_MOC_LITERAL(647, 29),  // "on_actionViewCenter_triggered"
        QT_MOC_LITERAL(677, 23),  // "on_menuNode_aboutToShow"
        QT_MOC_LITERAL(701, 23),  // "on_menuNode_aboutToHide"
        QT_MOC_LITERAL(725, 28),  // "on_actionHelpAbout_triggered"
        QT_MOC_LITERAL(754, 27),  // "on_scenes_tabCloseRequested"
        QT_MOC_LITERAL(782, 5),  // "index"
        QT_MOC_LITERAL(788, 30),  // "on_actionPreferences_triggered"
        QT_MOC_LITERAL(819, 24),  // "on_scenes_currentChanged"
        QT_MOC_LITERAL(844, 31),  // "on_actionNodePostProc_triggered"
        QT_MOC_LITERAL(876, 33),  // "on_actionSceneNewFilter_trigg..."
        QT_MOC_LITERAL(910, 29),  // "on_actionWindowNews_triggered"
        QT_MOC_LITERAL(940, 40),  // "on_actionToolsPerformance_Tes..."
        QT_MOC_LITERAL(981, 12),  // "onNewsUpdate"
        QT_MOC_LITERAL(994, 4),  // "news"
        QT_MOC_LITERAL(999, 27)   // "on_actionRegister_triggered"
    },
    "MainWindow",
    "on_sceneSelectionChanged",
    "",
    "on_actionSceneNewEmpty_triggered",
    "on_actionSceneNewSimple_triggered",
    "on_actionSceneOpen_triggered",
    "on_actionSceneSave_triggered",
    "on_actionSceneSaveAs_triggered",
    "on_actionSceneClose_triggered",
    "on_actionSceneImport_triggered",
    "on_actionSceneExport_triggered",
    "on_actionSceneExit_triggered",
    "on_actionNodeInputVideo_triggered",
    "on_actionNodeInputAudio_triggered",
    "on_actionNodeFilterVideo_triggered",
    "on_actionNodeFilterAudio_triggered",
    "on_actionNodeEncoderVideo_triggered",
    "on_actionNodeEncoderAudio_triggered",
    "on_actionNodeMuxer_triggered",
    "on_actionNodeOutput_triggered",
    "on_actionNodeDelete_triggered",
    "on_actionNodeProperties_triggered",
    "on_actionViewCenter_triggered",
    "on_menuNode_aboutToShow",
    "on_menuNode_aboutToHide",
    "on_actionHelpAbout_triggered",
    "on_scenes_tabCloseRequested",
    "index",
    "on_actionPreferences_triggered",
    "on_scenes_currentChanged",
    "on_actionNodePostProc_triggered",
    "on_actionSceneNewFilter_triggered",
    "on_actionWindowNews_triggered",
    "on_actionToolsPerformance_Test_triggered",
    "onNewsUpdate",
    "news",
    "on_actionRegister_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  212,    2, 0x0a,    1 /* Public */,
       3,    0,  213,    2, 0x08,    2 /* Private */,
       4,    0,  214,    2, 0x08,    3 /* Private */,
       5,    0,  215,    2, 0x08,    4 /* Private */,
       6,    0,  216,    2, 0x08,    5 /* Private */,
       7,    0,  217,    2, 0x08,    6 /* Private */,
       8,    0,  218,    2, 0x08,    7 /* Private */,
       9,    0,  219,    2, 0x08,    8 /* Private */,
      10,    0,  220,    2, 0x08,    9 /* Private */,
      11,    0,  221,    2, 0x08,   10 /* Private */,
      12,    0,  222,    2, 0x08,   11 /* Private */,
      13,    0,  223,    2, 0x08,   12 /* Private */,
      14,    0,  224,    2, 0x08,   13 /* Private */,
      15,    0,  225,    2, 0x08,   14 /* Private */,
      16,    0,  226,    2, 0x08,   15 /* Private */,
      17,    0,  227,    2, 0x08,   16 /* Private */,
      18,    0,  228,    2, 0x08,   17 /* Private */,
      19,    0,  229,    2, 0x08,   18 /* Private */,
      20,    0,  230,    2, 0x08,   19 /* Private */,
      21,    0,  231,    2, 0x08,   20 /* Private */,
      22,    0,  232,    2, 0x08,   21 /* Private */,
      23,    0,  233,    2, 0x08,   22 /* Private */,
      24,    0,  234,    2, 0x08,   23 /* Private */,
      25,    0,  235,    2, 0x08,   24 /* Private */,
      26,    1,  236,    2, 0x08,   25 /* Private */,
      28,    0,  239,    2, 0x08,   27 /* Private */,
      29,    1,  240,    2, 0x08,   28 /* Private */,
      30,    0,  243,    2, 0x08,   30 /* Private */,
      31,    0,  244,    2, 0x08,   31 /* Private */,
      32,    0,  245,    2, 0x08,   32 /* Private */,
      33,    0,  246,    2, 0x08,   33 /* Private */,
      34,    1,  247,    2, 0x08,   34 /* Private */,
      36,    0,  250,    2, 0x08,   36 /* Private */,

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
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_sceneSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneNewEmpty_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneNewSimple_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneOpen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneSave_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneSaveAs_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneClose_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneImport_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneExport_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneExit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNodeInputVideo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNodeInputAudio_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNodeFilterVideo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNodeFilterAudio_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNodeEncoderVideo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNodeEncoderAudio_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNodeMuxer_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNodeOutput_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNodeDelete_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNodeProperties_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionViewCenter_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_menuNode_aboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_menuNode_aboutToHide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionHelpAbout_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_scenes_tabCloseRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionPreferences_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_scenes_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionNodePostProc_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneNewFilter_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionWindowNews_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionToolsPerformance_Test_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNewsUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionRegister_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_sceneSelectionChanged(); break;
        case 1: _t->on_actionSceneNewEmpty_triggered(); break;
        case 2: _t->on_actionSceneNewSimple_triggered(); break;
        case 3: _t->on_actionSceneOpen_triggered(); break;
        case 4: _t->on_actionSceneSave_triggered(); break;
        case 5: _t->on_actionSceneSaveAs_triggered(); break;
        case 6: _t->on_actionSceneClose_triggered(); break;
        case 7: _t->on_actionSceneImport_triggered(); break;
        case 8: _t->on_actionSceneExport_triggered(); break;
        case 9: _t->on_actionSceneExit_triggered(); break;
        case 10: _t->on_actionNodeInputVideo_triggered(); break;
        case 11: _t->on_actionNodeInputAudio_triggered(); break;
        case 12: _t->on_actionNodeFilterVideo_triggered(); break;
        case 13: _t->on_actionNodeFilterAudio_triggered(); break;
        case 14: _t->on_actionNodeEncoderVideo_triggered(); break;
        case 15: _t->on_actionNodeEncoderAudio_triggered(); break;
        case 16: _t->on_actionNodeMuxer_triggered(); break;
        case 17: _t->on_actionNodeOutput_triggered(); break;
        case 18: _t->on_actionNodeDelete_triggered(); break;
        case 19: _t->on_actionNodeProperties_triggered(); break;
        case 20: _t->on_actionViewCenter_triggered(); break;
        case 21: _t->on_menuNode_aboutToShow(); break;
        case 22: _t->on_menuNode_aboutToHide(); break;
        case 23: _t->on_actionHelpAbout_triggered(); break;
        case 24: _t->on_scenes_tabCloseRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->on_actionPreferences_triggered(); break;
        case 26: _t->on_scenes_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->on_actionNodePostProc_triggered(); break;
        case 28: _t->on_actionSceneNewFilter_triggered(); break;
        case 29: _t->on_actionWindowNews_triggered(); break;
        case 30: _t->on_actionToolsPerformance_Test_triggered(); break;
        case 31: _t->onNewsUpdate((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->on_actionRegister_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 33;
    }
    return _id;
}
QT_WARNING_POP
