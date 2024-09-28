/********************************************************************************
** Form generated from reading UI file 'addeditvideotrackdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITVIDEOTRACKDIALOG_H
#define UI_ADDEDITVIDEOTRACKDIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddEditVideoTrackDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *width;
    QLabel *label_2;
    QSpinBox *height;
    QLabel *label_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *timebaseNum;
    QLabel *label_4;
    QSpinBox *timebaseDen;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *aspectNum;
    QLabel *label_6;
    QSpinBox *aspectDen;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QComboBox *fieldOrder;
    QLabel *label_8;
    QComboBox *colorFormat;
    QLabel *label_9;
    QComboBox *colorRange;
    QLabel *label_10;
    QComboBox *colorSpace;
    QLabel *label_11;
    QComboBox *colorPrimaries;
    QLabel *label_12;
    QComboBox *colorTransfer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddEditVideoTrackDialog)
    {
        if (AddEditVideoTrackDialog->objectName().isEmpty())
            AddEditVideoTrackDialog->setObjectName("AddEditVideoTrackDialog");
        AddEditVideoTrackDialog->resize(277, 358);
        verticalLayout = new QVBoxLayout(AddEditVideoTrackDialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(AddEditVideoTrackDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setCheckable(false);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(20);
        formLayout->setVerticalSpacing(6);
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        width = new QSpinBox(groupBox);
        width->setObjectName("width");
        width->setMinimum(1);
        width->setMaximum(16384);
        width->setValue(1920);

        formLayout->setWidget(0, QFormLayout::FieldRole, width);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        height = new QSpinBox(groupBox);
        height->setObjectName("height");
        height->setMinimum(1);
        height->setMaximum(8640);
        height->setValue(1080);

        formLayout->setWidget(1, QFormLayout::FieldRole, height);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        timebaseNum = new QSpinBox(widget_2);
        timebaseNum->setObjectName("timebaseNum");
        timebaseNum->setMinimum(1);
        timebaseNum->setMaximum(65535);

        horizontalLayout->addWidget(timebaseNum);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        timebaseDen = new QSpinBox(widget_2);
        timebaseDen->setObjectName("timebaseDen");
        timebaseDen->setMinimum(1);
        timebaseDen->setMaximum(65535);
        timebaseDen->setValue(30);

        horizontalLayout->addWidget(timebaseDen);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        formLayout->setWidget(2, QFormLayout::FieldRole, widget_2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        widget_3 = new QWidget(groupBox);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        aspectNum = new QSpinBox(widget_3);
        aspectNum->setObjectName("aspectNum");
        aspectNum->setMinimum(1);
        aspectNum->setMaximum(65535);

        horizontalLayout_2->addWidget(aspectNum);

        label_6 = new QLabel(widget_3);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        aspectDen = new QSpinBox(widget_3);
        aspectDen->setObjectName("aspectDen");
        aspectDen->setMinimum(1);
        aspectDen->setMaximum(65535);

        horizontalLayout_2->addWidget(aspectDen);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        formLayout->setWidget(3, QFormLayout::FieldRole, widget_3);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        fieldOrder = new QComboBox(groupBox);
        fieldOrder->setObjectName("fieldOrder");

        formLayout->setWidget(4, QFormLayout::FieldRole, fieldOrder);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_8);

        colorFormat = new QComboBox(groupBox);
        colorFormat->setObjectName("colorFormat");
        colorFormat->setEnabled(false);

        formLayout->setWidget(5, QFormLayout::FieldRole, colorFormat);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_9);

        colorRange = new QComboBox(groupBox);
        colorRange->setObjectName("colorRange");

        formLayout->setWidget(6, QFormLayout::FieldRole, colorRange);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_10);

        colorSpace = new QComboBox(groupBox);
        colorSpace->setObjectName("colorSpace");

        formLayout->setWidget(7, QFormLayout::FieldRole, colorSpace);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_11);

        colorPrimaries = new QComboBox(groupBox);
        colorPrimaries->setObjectName("colorPrimaries");

        formLayout->setWidget(8, QFormLayout::FieldRole, colorPrimaries);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");

        formLayout->setWidget(9, QFormLayout::LabelRole, label_12);

        colorTransfer = new QComboBox(groupBox);
        colorTransfer->setObjectName("colorTransfer");

        formLayout->setWidget(9, QFormLayout::FieldRole, colorTransfer);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(AddEditVideoTrackDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddEditVideoTrackDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddEditVideoTrackDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddEditVideoTrackDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddEditVideoTrackDialog);
    } // setupUi

    void retranslateUi(QDialog *AddEditVideoTrackDialog)
    {
        AddEditVideoTrackDialog->setWindowTitle(QCoreApplication::translate("AddEditVideoTrackDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddEditVideoTrackDialog", "Width", nullptr));
        label_2->setText(QCoreApplication::translate("AddEditVideoTrackDialog", "Height", nullptr));
        label_3->setText(QCoreApplication::translate("AddEditVideoTrackDialog", "Timebase", nullptr));
        label_4->setText(QCoreApplication::translate("AddEditVideoTrackDialog", "/", nullptr));
        label_5->setText(QCoreApplication::translate("AddEditVideoTrackDialog", "Pixel Aspect Ratio", nullptr));
        label_6->setText(QCoreApplication::translate("AddEditVideoTrackDialog", ":", nullptr));
        label_7->setText(QCoreApplication::translate("AddEditVideoTrackDialog", "Field Order", nullptr));
        label_8->setText(QCoreApplication::translate("AddEditVideoTrackDialog", "Format", nullptr));
        label_9->setText(QCoreApplication::translate("AddEditVideoTrackDialog", "Color Range", nullptr));
        label_10->setText(QCoreApplication::translate("AddEditVideoTrackDialog", "Color Space", nullptr));
        label_11->setText(QCoreApplication::translate("AddEditVideoTrackDialog", "Color Primaries", nullptr));
        label_12->setText(QCoreApplication::translate("AddEditVideoTrackDialog", "Color Transfer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEditVideoTrackDialog: public Ui_AddEditVideoTrackDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITVIDEOTRACKDIALOG_H
