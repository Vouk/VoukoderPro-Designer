/********************************************************************************
** Form generated from reading UI file 'preferencesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *general;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_5;
    QLabel *label_7;
    QComboBox *openScene;
    QSpacerItem *verticalSpacer_2;
    QWidget *defaults;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QComboBox *filterVideo;
    QLabel *label_5;
    QComboBox *filterAudio;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *encoderVideo;
    QLabel *label_2;
    QComboBox *encoderAudio;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QComboBox *muxer;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_4;
    QLabel *label_6;
    QComboBox *output;
    QGroupBox *groupBox_6;
    QFormLayout *formLayout_6;
    QLabel *label_8;
    QComboBox *postproc;
    QSpacerItem *verticalSpacer;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *techNames;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName("PreferencesDialog");
        PreferencesDialog->resize(400, 472);
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(PreferencesDialog);
        tabWidget->setObjectName("tabWidget");
        general = new QWidget();
        general->setObjectName("general");
        verticalLayout_3 = new QVBoxLayout(general);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_5 = new QGroupBox(general);
        groupBox_5->setObjectName("groupBox_5");
        formLayout_5 = new QFormLayout(groupBox_5);
        formLayout_5->setObjectName("formLayout_5");
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName("label_7");

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_7);

        openScene = new QComboBox(groupBox_5);
        openScene->setObjectName("openScene");

        formLayout_5->setWidget(0, QFormLayout::FieldRole, openScene);


        verticalLayout_3->addWidget(groupBox_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(general, QString());
        defaults = new QWidget();
        defaults->setObjectName("defaults");
        verticalLayout_2 = new QVBoxLayout(defaults);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(defaults);
        groupBox_2->setObjectName("groupBox_2");
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName("formLayout_2");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(75, 0));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        filterVideo = new QComboBox(groupBox_2);
        filterVideo->setObjectName("filterVideo");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, filterVideo);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        filterAudio = new QComboBox(groupBox_2);
        filterAudio->setObjectName("filterAudio");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, filterAudio);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(defaults);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setMinimumSize(QSize(75, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        encoderVideo = new QComboBox(groupBox);
        encoderVideo->setObjectName("encoderVideo");

        formLayout->setWidget(0, QFormLayout::FieldRole, encoderVideo);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        encoderAudio = new QComboBox(groupBox);
        encoderAudio->setObjectName("encoderAudio");

        formLayout->setWidget(1, QFormLayout::FieldRole, encoderAudio);


        verticalLayout_2->addWidget(groupBox);

        groupBox_3 = new QGroupBox(defaults);
        groupBox_3->setObjectName("groupBox_3");
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setObjectName("formLayout_3");
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(75, 0));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        muxer = new QComboBox(groupBox_3);
        muxer->setObjectName("muxer");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, muxer);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(defaults);
        groupBox_4->setObjectName("groupBox_4");
        formLayout_4 = new QFormLayout(groupBox_4);
        formLayout_4->setObjectName("formLayout_4");
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(75, 0));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_6);

        output = new QComboBox(groupBox_4);
        output->setObjectName("output");

        formLayout_4->setWidget(0, QFormLayout::FieldRole, output);


        verticalLayout_2->addWidget(groupBox_4);

        groupBox_6 = new QGroupBox(defaults);
        groupBox_6->setObjectName("groupBox_6");
        formLayout_6 = new QFormLayout(groupBox_6);
        formLayout_6->setObjectName("formLayout_6");
        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(75, 0));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_8);

        postproc = new QComboBox(groupBox_6);
        postproc->setObjectName("postproc");

        formLayout_6->setWidget(0, QFormLayout::FieldRole, postproc);


        verticalLayout_2->addWidget(groupBox_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(defaults, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName("groupBox_7");
        verticalLayout_5 = new QVBoxLayout(groupBox_7);
        verticalLayout_5->setObjectName("verticalLayout_5");
        techNames = new QCheckBox(groupBox_7);
        techNames->setObjectName("techNames");

        verticalLayout_5->addWidget(techNames);


        verticalLayout_4->addWidget(groupBox_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PreferencesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PreferencesDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QCoreApplication::translate("PreferencesDialog", "Preferences", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("PreferencesDialog", "Startup", nullptr));
        label_7->setText(QCoreApplication::translate("PreferencesDialog", "Open scene", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(general), QCoreApplication::translate("PreferencesDialog", "Start-Up", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PreferencesDialog", "Filter", nullptr));
        label_4->setText(QCoreApplication::translate("PreferencesDialog", "Video", nullptr));
        label_5->setText(QCoreApplication::translate("PreferencesDialog", "Audio", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PreferencesDialog", "Encoder", nullptr));
        label->setText(QCoreApplication::translate("PreferencesDialog", "Video", nullptr));
        label_2->setText(QCoreApplication::translate("PreferencesDialog", "Audio", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PreferencesDialog", "Muxer", nullptr));
        label_3->setText(QCoreApplication::translate("PreferencesDialog", "Muxer", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("PreferencesDialog", "Output", nullptr));
        label_6->setText(QCoreApplication::translate("PreferencesDialog", "Output", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("PreferencesDialog", "Post processing", nullptr));
        label_8->setText(QCoreApplication::translate("PreferencesDialog", "PostProc", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(defaults), QCoreApplication::translate("PreferencesDialog", "Nodes", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("PreferencesDialog", "Properties", nullptr));
        techNames->setText(QCoreApplication::translate("PreferencesDialog", "Use technical names for items, their parameters and values", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("PreferencesDialog", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
