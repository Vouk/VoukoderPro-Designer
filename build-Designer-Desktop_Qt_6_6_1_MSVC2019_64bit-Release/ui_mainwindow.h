/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSceneNewEmpty;
    QAction *actionSceneNewSimple;
    QAction *actionSceneOpen;
    QAction *actionSceneSave;
    QAction *actionSceneSaveAs;
    QAction *actionSceneClose;
    QAction *actionSceneImport;
    QAction *actionSceneExport;
    QAction *actionSceneExit;
    QAction *actionViewCenter;
    QAction *actionNodeInputVideo;
    QAction *actionNodeInputAudio;
    QAction *actionNodeFilterVideo;
    QAction *actionNodeFilterAudio;
    QAction *actionNodeEncoderVideo;
    QAction *actionNodeEncoderAudio;
    QAction *actionNodeMuxer;
    QAction *actionNodeOutput;
    QAction *actionNodeDelete;
    QAction *actionNodeProperties;
    QAction *actionHelpAbout;
    QAction *actionPreferences;
    QAction *actionNodePostProc;
    QAction *actionSceneNewFilter;
    QAction *actionWindowNews;
    QAction *actionToolsPerformance_Test;
    QAction *actionRegister;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *scenes;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuNew;
    QMenu *menuView;
    QMenu *menuHelp;
    QMenu *menuTools;
    QMenu *menuNode;
    QMenu *menuNodeAdd;
    QMenu *menuNodeInput;
    QMenu *menuNodeFilter;
    QMenu *menuNodeEncoder;
    QStatusBar *statusbar;
    QToolBar *toolBar_File;
    QToolBar *toolBar_View;
    QToolBar *toolBar;
    QToolBar *toolBar_Tools;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(960, 666);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo_512"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDockOptions(QMainWindow::DockOption::AllowTabbedDocks|QMainWindow::DockOption::AnimatedDocks|QMainWindow::DockOption::ForceTabbedDocks);
        actionSceneNewEmpty = new QAction(MainWindow);
        actionSceneNewEmpty->setObjectName("actionSceneNewEmpty");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/fugue/document"), QSize(), QIcon::Normal, QIcon::Off);
        actionSceneNewEmpty->setIcon(icon1);
        actionSceneNewSimple = new QAction(MainWindow);
        actionSceneNewSimple->setObjectName("actionSceneNewSimple");
        actionSceneOpen = new QAction(MainWindow);
        actionSceneOpen->setObjectName("actionSceneOpen");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/fugue/document-open"), QSize(), QIcon::Normal, QIcon::Off);
        actionSceneOpen->setIcon(icon2);
        actionSceneSave = new QAction(MainWindow);
        actionSceneSave->setObjectName("actionSceneSave");
        actionSceneSave->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/fugue/document-save"), QSize(), QIcon::Normal, QIcon::Off);
        actionSceneSave->setIcon(icon3);
        actionSceneSaveAs = new QAction(MainWindow);
        actionSceneSaveAs->setObjectName("actionSceneSaveAs");
        actionSceneSaveAs->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/fugue/document-save-as"), QSize(), QIcon::Normal, QIcon::Off);
        actionSceneSaveAs->setIcon(icon4);
        actionSceneClose = new QAction(MainWindow);
        actionSceneClose->setObjectName("actionSceneClose");
        actionSceneClose->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/fugue/document-minus"), QSize(), QIcon::Normal, QIcon::Off);
        actionSceneClose->setIcon(icon5);
        actionSceneImport = new QAction(MainWindow);
        actionSceneImport->setObjectName("actionSceneImport");
        actionSceneExport = new QAction(MainWindow);
        actionSceneExport->setObjectName("actionSceneExport");
        actionSceneExport->setEnabled(false);
        actionSceneExit = new QAction(MainWindow);
        actionSceneExit->setObjectName("actionSceneExit");
        actionViewCenter = new QAction(MainWindow);
        actionViewCenter->setObjectName("actionViewCenter");
        actionViewCenter->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/fugue/scene-center"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewCenter->setIcon(icon6);
        actionNodeInputVideo = new QAction(MainWindow);
        actionNodeInputVideo->setObjectName("actionNodeInputVideo");
        actionNodeInputVideo->setEnabled(false);
        actionNodeInputAudio = new QAction(MainWindow);
        actionNodeInputAudio->setObjectName("actionNodeInputAudio");
        actionNodeInputAudio->setEnabled(false);
        actionNodeFilterVideo = new QAction(MainWindow);
        actionNodeFilterVideo->setObjectName("actionNodeFilterVideo");
        actionNodeFilterVideo->setEnabled(false);
        actionNodeFilterAudio = new QAction(MainWindow);
        actionNodeFilterAudio->setObjectName("actionNodeFilterAudio");
        actionNodeFilterAudio->setEnabled(false);
        actionNodeEncoderVideo = new QAction(MainWindow);
        actionNodeEncoderVideo->setObjectName("actionNodeEncoderVideo");
        actionNodeEncoderVideo->setEnabled(false);
        actionNodeEncoderAudio = new QAction(MainWindow);
        actionNodeEncoderAudio->setObjectName("actionNodeEncoderAudio");
        actionNodeEncoderAudio->setEnabled(false);
        actionNodeMuxer = new QAction(MainWindow);
        actionNodeMuxer->setObjectName("actionNodeMuxer");
        actionNodeMuxer->setEnabled(false);
        actionNodeOutput = new QAction(MainWindow);
        actionNodeOutput->setObjectName("actionNodeOutput");
        actionNodeOutput->setEnabled(false);
        actionNodeDelete = new QAction(MainWindow);
        actionNodeDelete->setObjectName("actionNodeDelete");
        actionNodeDelete->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/fugue/node-delete"), QSize(), QIcon::Normal, QIcon::Off);
        actionNodeDelete->setIcon(icon7);
        actionNodeProperties = new QAction(MainWindow);
        actionNodeProperties->setObjectName("actionNodeProperties");
        actionNodeProperties->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/fugue/node-design"), QSize(), QIcon::Normal, QIcon::Off);
        actionNodeProperties->setIcon(icon8);
        actionHelpAbout = new QAction(MainWindow);
        actionHelpAbout->setObjectName("actionHelpAbout");
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName("actionPreferences");
        actionNodePostProc = new QAction(MainWindow);
        actionNodePostProc->setObjectName("actionNodePostProc");
        actionSceneNewFilter = new QAction(MainWindow);
        actionSceneNewFilter->setObjectName("actionSceneNewFilter");
        actionWindowNews = new QAction(MainWindow);
        actionWindowNews->setObjectName("actionWindowNews");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/fugue/news"), QSize(), QIcon::Normal, QIcon::Off);
        actionWindowNews->setIcon(icon9);
        actionToolsPerformance_Test = new QAction(MainWindow);
        actionToolsPerformance_Test->setObjectName("actionToolsPerformance_Test");
        actionToolsPerformance_Test->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/fugue/control"), QSize(), QIcon::Normal, QIcon::Off);
        actionToolsPerformance_Test->setIcon(icon10);
        actionToolsPerformance_Test->setVisible(true);
        actionRegister = new QAction(MainWindow);
        actionRegister->setObjectName("actionRegister");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        scenes = new QTabWidget(centralwidget);
        scenes->setObjectName("scenes");
        scenes->setTabsClosable(true);
        scenes->setMovable(true);

        horizontalLayout->addWidget(scenes);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 960, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName("menuNew");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuView->setEnabled(false);
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuNode = new QMenu(menubar);
        menuNode->setObjectName("menuNode");
        menuNode->setEnabled(false);
        menuNodeAdd = new QMenu(menuNode);
        menuNodeAdd->setObjectName("menuNodeAdd");
        menuNodeAdd->setEnabled(false);
        menuNodeInput = new QMenu(menuNodeAdd);
        menuNodeInput->setObjectName("menuNodeInput");
        menuNodeFilter = new QMenu(menuNodeAdd);
        menuNodeFilter->setObjectName("menuNodeFilter");
        menuNodeEncoder = new QMenu(menuNodeAdd);
        menuNodeEncoder->setObjectName("menuNodeEncoder");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar_File = new QToolBar(MainWindow);
        toolBar_File->setObjectName("toolBar_File");
        toolBar_File->setEnabled(true);
        toolBar_File->setMovable(true);
        toolBar_File->setAllowedAreas(Qt::ToolBarArea::TopToolBarArea);
        toolBar_File->setIconSize(QSize(20, 20));
        toolBar_File->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonIconOnly);
        toolBar_File->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_File);
        toolBar_View = new QToolBar(MainWindow);
        toolBar_View->setObjectName("toolBar_View");
        toolBar_View->setIconSize(QSize(20, 20));
        toolBar_View->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_View);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setAllowedAreas(Qt::ToolBarArea::AllToolBarAreas);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_Tools = new QToolBar(MainWindow);
        toolBar_Tools->setObjectName("toolBar_Tools");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_Tools);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuNode->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(menuNew->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionSceneOpen);
        menuFile->addAction(actionSceneSave);
        menuFile->addAction(actionSceneSaveAs);
        menuFile->addAction(actionSceneClose);
        menuFile->addSeparator();
        menuFile->addAction(actionSceneImport);
        menuFile->addAction(actionSceneExport);
        menuFile->addSeparator();
        menuFile->addAction(actionSceneExit);
        menuNew->addAction(actionSceneNewEmpty);
        menuNew->addSeparator();
        menuNew->addAction(actionSceneNewSimple);
        menuNew->addAction(actionSceneNewFilter);
        menuView->addAction(actionViewCenter);
        menuHelp->addSeparator();
        menuHelp->addAction(actionRegister);
        menuHelp->addSeparator();
        menuHelp->addAction(actionHelpAbout);
        menuTools->addAction(actionToolsPerformance_Test);
        menuTools->addSeparator();
        menuTools->addAction(actionPreferences);
        menuNode->addAction(menuNodeAdd->menuAction());
        menuNode->addAction(actionNodeDelete);
        menuNode->addSeparator();
        menuNode->addAction(actionNodeProperties);
        menuNodeAdd->addAction(menuNodeInput->menuAction());
        menuNodeAdd->addAction(menuNodeFilter->menuAction());
        menuNodeAdd->addAction(menuNodeEncoder->menuAction());
        menuNodeAdd->addAction(actionNodeMuxer);
        menuNodeAdd->addAction(actionNodeOutput);
        menuNodeAdd->addAction(actionNodePostProc);
        menuNodeInput->addAction(actionNodeInputVideo);
        menuNodeInput->addAction(actionNodeInputAudio);
        menuNodeFilter->addAction(actionNodeFilterVideo);
        menuNodeFilter->addAction(actionNodeFilterAudio);
        menuNodeEncoder->addAction(actionNodeEncoderVideo);
        menuNodeEncoder->addAction(actionNodeEncoderAudio);
        toolBar_File->addAction(actionSceneNewEmpty);
        toolBar_File->addAction(actionSceneOpen);
        toolBar_File->addAction(actionSceneSave);
        toolBar_File->addAction(actionSceneSaveAs);
        toolBar_View->addAction(actionViewCenter);
        toolBar->addAction(actionWindowNews);
        toolBar_Tools->addAction(actionToolsPerformance_Test);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSceneNewEmpty->setText(QCoreApplication::translate("MainWindow", "Empty", nullptr));
#if QT_CONFIG(shortcut)
        actionSceneNewEmpty->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSceneNewSimple->setText(QCoreApplication::translate("MainWindow", "Simple", nullptr));
        actionSceneOpen->setText(QCoreApplication::translate("MainWindow", "Open ...", nullptr));
#if QT_CONFIG(tooltip)
        actionSceneOpen->setToolTip(QCoreApplication::translate("MainWindow", "Open scene", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSceneOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSceneSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(tooltip)
        actionSceneSave->setToolTip(QCoreApplication::translate("MainWindow", "Save scene", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSceneSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSceneSaveAs->setText(QCoreApplication::translate("MainWindow", "Save as ...", nullptr));
#if QT_CONFIG(tooltip)
        actionSceneSaveAs->setToolTip(QCoreApplication::translate("MainWindow", "Save scene as", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSceneSaveAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSceneClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
#if QT_CONFIG(shortcut)
        actionSceneClose->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSceneImport->setText(QCoreApplication::translate("MainWindow", "Import ...", nullptr));
#if QT_CONFIG(shortcut)
        actionSceneImport->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSceneExport->setText(QCoreApplication::translate("MainWindow", "Export ...", nullptr));
#if QT_CONFIG(shortcut)
        actionSceneExport->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSceneExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionSceneExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionViewCenter->setText(QCoreApplication::translate("MainWindow", "Center", nullptr));
#if QT_CONFIG(tooltip)
        actionViewCenter->setToolTip(QCoreApplication::translate("MainWindow", "Center scene", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNodeInputVideo->setText(QCoreApplication::translate("MainWindow", "Video", nullptr));
#if QT_CONFIG(tooltip)
        actionNodeInputVideo->setToolTip(QCoreApplication::translate("MainWindow", "Create video input node", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNodeInputVideo->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNodeInputAudio->setText(QCoreApplication::translate("MainWindow", "Audio", nullptr));
#if QT_CONFIG(tooltip)
        actionNodeInputAudio->setToolTip(QCoreApplication::translate("MainWindow", "Create audio input node", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNodeInputAudio->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNodeFilterVideo->setText(QCoreApplication::translate("MainWindow", "Video", nullptr));
#if QT_CONFIG(tooltip)
        actionNodeFilterVideo->setToolTip(QCoreApplication::translate("MainWindow", "Create video filter node", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNodeFilterVideo->setShortcut(QCoreApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNodeFilterAudio->setText(QCoreApplication::translate("MainWindow", "Audio", nullptr));
#if QT_CONFIG(tooltip)
        actionNodeFilterAudio->setToolTip(QCoreApplication::translate("MainWindow", "Create audio filter node", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNodeFilterAudio->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNodeEncoderVideo->setText(QCoreApplication::translate("MainWindow", "Video", nullptr));
#if QT_CONFIG(tooltip)
        actionNodeEncoderVideo->setToolTip(QCoreApplication::translate("MainWindow", "Create video encoder node", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNodeEncoderVideo->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNodeEncoderAudio->setText(QCoreApplication::translate("MainWindow", "Audio", nullptr));
#if QT_CONFIG(tooltip)
        actionNodeEncoderAudio->setToolTip(QCoreApplication::translate("MainWindow", "Create audio encoder node", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNodeEncoderAudio->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNodeMuxer->setText(QCoreApplication::translate("MainWindow", "Muxer", nullptr));
#if QT_CONFIG(tooltip)
        actionNodeMuxer->setToolTip(QCoreApplication::translate("MainWindow", "Create muxer node", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNodeMuxer->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNodeOutput->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
#if QT_CONFIG(tooltip)
        actionNodeOutput->setToolTip(QCoreApplication::translate("MainWindow", "Create output node", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNodeOutput->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNodeDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        actionNodeDelete->setToolTip(QCoreApplication::translate("MainWindow", "Delete node", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNodeDelete->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNodeProperties->setText(QCoreApplication::translate("MainWindow", "Properties ...", nullptr));
#if QT_CONFIG(tooltip)
        actionNodeProperties->setToolTip(QCoreApplication::translate("MainWindow", "Open node properties", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHelpAbout->setText(QCoreApplication::translate("MainWindow", "About ...", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "Preferences ...", nullptr));
        actionNodePostProc->setText(QCoreApplication::translate("MainWindow", "Post Processing", nullptr));
#if QT_CONFIG(shortcut)
        actionNodePostProc->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSceneNewFilter->setText(QCoreApplication::translate("MainWindow", "Filter", nullptr));
        actionWindowNews->setText(QCoreApplication::translate("MainWindow", "actionWindowNews", nullptr));
#if QT_CONFIG(tooltip)
        actionWindowNews->setToolTip(QCoreApplication::translate("MainWindow", "Latest news", nullptr));
#endif // QT_CONFIG(tooltip)
        actionToolsPerformance_Test->setText(QCoreApplication::translate("MainWindow", "Performance Test ...", nullptr));
        actionRegister->setText(QCoreApplication::translate("MainWindow", "Register ...", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "Scene", nullptr));
        menuNew->setTitle(QCoreApplication::translate("MainWindow", "New", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuNode->setTitle(QCoreApplication::translate("MainWindow", "Node", nullptr));
        menuNodeAdd->setTitle(QCoreApplication::translate("MainWindow", "Add", nullptr));
        menuNodeInput->setTitle(QCoreApplication::translate("MainWindow", "Input", nullptr));
        menuNodeFilter->setTitle(QCoreApplication::translate("MainWindow", "Filter", nullptr));
        menuNodeEncoder->setTitle(QCoreApplication::translate("MainWindow", "Encoder", nullptr));
        toolBar_File->setWindowTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar_View->setWindowTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar_Tools->setWindowTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
