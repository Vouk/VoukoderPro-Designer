/********************************************************************************
** Form generated from reading UI file 'inputpropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTPROPERTIESDIALOG_H
#define UI_INPUTPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoInputProperties
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *general;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout;
    QLabel *label_5;
    QComboBox *trackStrategy;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_8;
    QWidget *colors;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *colorRangeAuto;
    QRadioButton *colorRangeLimited;
    QRadioButton *colorRangeFull;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QComboBox *colorMatrix;
    QLabel *label_3;
    QComboBox *colorPrimaries;
    QLabel *label_4;
    QComboBox *colorTransfer;
    QSpacerItem *verticalSpacer;
    QLabel *label_7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VideoInputProperties)
    {
        if (VideoInputProperties->objectName().isEmpty())
            VideoInputProperties->setObjectName("VideoInputProperties");
        VideoInputProperties->resize(335, 361);
        verticalLayout = new QVBoxLayout(VideoInputProperties);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        tabWidget = new QTabWidget(VideoInputProperties);
        tabWidget->setObjectName("tabWidget");
        general = new QWidget();
        general->setObjectName("general");
        verticalLayout_3 = new QVBoxLayout(general);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_3 = new QGroupBox(general);
        groupBox_3->setObjectName("groupBox_3");
        formLayout = new QFormLayout(groupBox_3);
        formLayout->setObjectName("formLayout");
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName("label_5");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        trackStrategy = new QComboBox(groupBox_3);
        trackStrategy->setObjectName("trackStrategy");

        formLayout->setWidget(0, QFormLayout::FieldRole, trackStrategy);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName("label_6");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        lineEdit->setReadOnly(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);


        verticalLayout_3->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label_8 = new QLabel(general);
        label_8->setObjectName("label_8");
        label_8->setWordWrap(true);

        verticalLayout_3->addWidget(label_8);

        tabWidget->addTab(general, QString());
        colors = new QWidget();
        colors->setObjectName("colors");
        verticalLayout_2 = new QVBoxLayout(colors);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(colors);
        groupBox->setObjectName("groupBox");
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        colorRangeAuto = new QRadioButton(groupBox);
        colorRangeAuto->setObjectName("colorRangeAuto");
        colorRangeAuto->setChecked(true);

        horizontalLayout->addWidget(colorRangeAuto);

        colorRangeLimited = new QRadioButton(groupBox);
        colorRangeLimited->setObjectName("colorRangeLimited");

        horizontalLayout->addWidget(colorRangeLimited);

        colorRangeFull = new QRadioButton(groupBox);
        colorRangeFull->setObjectName("colorRangeFull");

        horizontalLayout->addWidget(colorRangeFull);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(colors);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName("formLayout_2");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        colorMatrix = new QComboBox(groupBox_2);
        colorMatrix->setObjectName("colorMatrix");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, colorMatrix);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        colorPrimaries = new QComboBox(groupBox_2);
        colorPrimaries->setObjectName("colorPrimaries");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, colorPrimaries);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        colorTransfer = new QComboBox(groupBox_2);
        colorTransfer->setObjectName("colorTransfer");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, colorTransfer);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_7 = new QLabel(colors);
        label_7->setObjectName("label_7");
        label_7->setWordWrap(true);

        verticalLayout_2->addWidget(label_7);

        tabWidget->addTab(colors, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(VideoInputProperties);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(VideoInputProperties);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, VideoInputProperties, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, VideoInputProperties, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VideoInputProperties);
    } // setupUi

    void retranslateUi(QDialog *VideoInputProperties)
    {
        VideoInputProperties->setWindowTitle(QCoreApplication::translate("VideoInputProperties", "Input properties", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("VideoInputProperties", "Track matching", nullptr));
        label_5->setText(QCoreApplication::translate("VideoInputProperties", "Strategy", nullptr));
        label_6->setText(QCoreApplication::translate("VideoInputProperties", "NLE Track numbers", nullptr));
        label_8->setText(QCoreApplication::translate("VideoInputProperties", "Note: The number of the first track from the NLE is always 0. Multiple track numbers must be comma separated.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(general), QCoreApplication::translate("VideoInputProperties", "General", nullptr));
        groupBox->setTitle(QCoreApplication::translate("VideoInputProperties", "Color range", nullptr));
        label->setText(QCoreApplication::translate("VideoInputProperties", "Range", nullptr));
        colorRangeAuto->setText(QCoreApplication::translate("VideoInputProperties", "Auto", nullptr));
        colorRangeLimited->setText(QCoreApplication::translate("VideoInputProperties", "Limited", nullptr));
        colorRangeFull->setText(QCoreApplication::translate("VideoInputProperties", "Full", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("VideoInputProperties", "Color space", nullptr));
        label_2->setText(QCoreApplication::translate("VideoInputProperties", "Matrix", nullptr));
        label_3->setText(QCoreApplication::translate("VideoInputProperties", "Primaries", nullptr));
        label_4->setText(QCoreApplication::translate("VideoInputProperties", "Transfer", nullptr));
        label_7->setText(QCoreApplication::translate("VideoInputProperties", "VoukoderPro will try to use the setting provided by the NLE when set to auto.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(colors), QCoreApplication::translate("VideoInputProperties", "Colors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoInputProperties: public Ui_VideoInputProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTPROPERTIESDIALOG_H
