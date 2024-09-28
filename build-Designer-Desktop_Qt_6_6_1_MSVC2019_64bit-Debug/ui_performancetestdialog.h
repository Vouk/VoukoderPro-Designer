/********************************************************************************
** Form generated from reading UI file 'performancetestdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERFORMANCETESTDIALOG_H
#define UI_PERFORMANCETESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PerformanceTestDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabVideo;
    QWidget *video;
    QVBoxLayout *verticalLayout;
    QTreeWidget *videoTracksWidget;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *addVTrackButton;
    QPushButton *editVTrackButton;
    QPushButton *deleteVTrackButton;
    QSpacerItem *horizontalSpacer_3;
    QWidget *audio;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *audioTracksWidget;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *addATrackButton;
    QPushButton *editATrackButton;
    QPushButton *deleteATrackButton;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *frames;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *startButton;
    QPushButton *closeButton;

    void setupUi(QDialog *PerformanceTestDialog)
    {
        if (PerformanceTestDialog->objectName().isEmpty())
            PerformanceTestDialog->setObjectName("PerformanceTestDialog");
        PerformanceTestDialog->resize(800, 400);
        verticalLayout_2 = new QVBoxLayout(PerformanceTestDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tabVideo = new QTabWidget(PerformanceTestDialog);
        tabVideo->setObjectName("tabVideo");
        video = new QWidget();
        video->setObjectName("video");
        verticalLayout = new QVBoxLayout(video);
        verticalLayout->setObjectName("verticalLayout");
        videoTracksWidget = new QTreeWidget(video);
        videoTracksWidget->setObjectName("videoTracksWidget");
        videoTracksWidget->setAllColumnsShowFocus(true);
        videoTracksWidget->header()->setVisible(true);

        verticalLayout->addWidget(videoTracksWidget);

        widget_5 = new QWidget(video);
        widget_5->setObjectName("widget_5");
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        addVTrackButton = new QPushButton(widget_5);
        addVTrackButton->setObjectName("addVTrackButton");

        horizontalLayout_4->addWidget(addVTrackButton);

        editVTrackButton = new QPushButton(widget_5);
        editVTrackButton->setObjectName("editVTrackButton");
        editVTrackButton->setEnabled(false);

        horizontalLayout_4->addWidget(editVTrackButton);

        deleteVTrackButton = new QPushButton(widget_5);
        deleteVTrackButton->setObjectName("deleteVTrackButton");
        deleteVTrackButton->setEnabled(false);

        horizontalLayout_4->addWidget(deleteVTrackButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_5);

        tabVideo->addTab(video, QString());
        audio = new QWidget();
        audio->setObjectName("audio");
        verticalLayout_3 = new QVBoxLayout(audio);
        verticalLayout_3->setObjectName("verticalLayout_3");
        audioTracksWidget = new QTreeWidget(audio);
        audioTracksWidget->setObjectName("audioTracksWidget");
        audioTracksWidget->setAllColumnsShowFocus(true);

        verticalLayout_3->addWidget(audioTracksWidget);

        widget_6 = new QWidget(audio);
        widget_6->setObjectName("widget_6");
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        addATrackButton = new QPushButton(widget_6);
        addATrackButton->setObjectName("addATrackButton");

        horizontalLayout_6->addWidget(addATrackButton);

        editATrackButton = new QPushButton(widget_6);
        editATrackButton->setObjectName("editATrackButton");
        editATrackButton->setEnabled(false);

        horizontalLayout_6->addWidget(editATrackButton);

        deleteATrackButton = new QPushButton(widget_6);
        deleteATrackButton->setObjectName("deleteATrackButton");
        deleteATrackButton->setEnabled(false);

        horizontalLayout_6->addWidget(deleteATrackButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_3->addWidget(widget_6);

        tabVideo->addTab(audio, QString());

        verticalLayout_2->addWidget(tabVideo);

        widget_3 = new QWidget(PerformanceTestDialog);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 9, 0, 9);
        label = new QLabel(widget_3);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        frames = new QSpinBox(widget_3);
        frames->setObjectName("frames");
        frames->setMinimum(1);
        frames->setMaximum(999999);

        horizontalLayout_3->addWidget(frames);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        startButton = new QPushButton(widget_3);
        startButton->setObjectName("startButton");
        startButton->setEnabled(false);

        horizontalLayout_3->addWidget(startButton);

        closeButton = new QPushButton(widget_3);
        closeButton->setObjectName("closeButton");

        horizontalLayout_3->addWidget(closeButton);


        verticalLayout_2->addWidget(widget_3);


        retranslateUi(PerformanceTestDialog);

        tabVideo->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PerformanceTestDialog);
    } // setupUi

    void retranslateUi(QDialog *PerformanceTestDialog)
    {
        PerformanceTestDialog->setWindowTitle(QCoreApplication::translate("PerformanceTestDialog", "Perform Scene Test", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = videoTracksWidget->headerItem();
        ___qtreewidgetitem->setText(9, QCoreApplication::translate("PerformanceTestDialog", "Color Transfer", nullptr));
        ___qtreewidgetitem->setText(8, QCoreApplication::translate("PerformanceTestDialog", "Color Primaries", nullptr));
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("PerformanceTestDialog", "Color Space", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("PerformanceTestDialog", "Color Range", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("PerformanceTestDialog", "Format", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("PerformanceTestDialog", "Field Order", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("PerformanceTestDialog", "Aspect", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("PerformanceTestDialog", "Timebase", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("PerformanceTestDialog", "Height", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("PerformanceTestDialog", "Width", nullptr));
        addVTrackButton->setText(QCoreApplication::translate("PerformanceTestDialog", "Add ...", nullptr));
        editVTrackButton->setText(QCoreApplication::translate("PerformanceTestDialog", "Edit ...", nullptr));
        deleteVTrackButton->setText(QCoreApplication::translate("PerformanceTestDialog", "Delete", nullptr));
        tabVideo->setTabText(tabVideo->indexOf(video), QCoreApplication::translate("PerformanceTestDialog", "Video Tracks", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = audioTracksWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("PerformanceTestDialog", "Format", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("PerformanceTestDialog", "Sample Rate (in Hz)", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("PerformanceTestDialog", "Layout", nullptr));
        addATrackButton->setText(QCoreApplication::translate("PerformanceTestDialog", "Add ...", nullptr));
        editATrackButton->setText(QCoreApplication::translate("PerformanceTestDialog", "Edit ...", nullptr));
        deleteATrackButton->setText(QCoreApplication::translate("PerformanceTestDialog", "Delete", nullptr));
        tabVideo->setTabText(tabVideo->indexOf(audio), QCoreApplication::translate("PerformanceTestDialog", "Audio Tracks", nullptr));
        label->setText(QCoreApplication::translate("PerformanceTestDialog", "Frames / Iterations", nullptr));
        startButton->setText(QCoreApplication::translate("PerformanceTestDialog", "Start", nullptr));
        closeButton->setText(QCoreApplication::translate("PerformanceTestDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PerformanceTestDialog: public Ui_PerformanceTestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERFORMANCETESTDIALOG_H
