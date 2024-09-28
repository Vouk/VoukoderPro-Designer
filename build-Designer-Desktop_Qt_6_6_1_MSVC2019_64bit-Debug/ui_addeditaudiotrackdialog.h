/********************************************************************************
** Form generated from reading UI file 'addeditaudiotrackdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITAUDIOTRACKDIALOG_H
#define UI_ADDEDITAUDIOTRACKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddEditAudioTrackDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *sampleFrequency;
    QLabel *label_3;
    QComboBox *sampleFormat;
    QComboBox *channelLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddEditAudioTrackDialog)
    {
        if (AddEditAudioTrackDialog->objectName().isEmpty())
            AddEditAudioTrackDialog->setObjectName("AddEditAudioTrackDialog");
        AddEditAudioTrackDialog->resize(373, 146);
        verticalLayout = new QVBoxLayout(AddEditAudioTrackDialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(AddEditAudioTrackDialog);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(20);
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        sampleFrequency = new QSpinBox(groupBox);
        sampleFrequency->setObjectName("sampleFrequency");
        sampleFrequency->setMinimum(1);
        sampleFrequency->setMaximum(384000);
        sampleFrequency->setValue(44100);

        formLayout->setWidget(1, QFormLayout::FieldRole, sampleFrequency);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        sampleFormat = new QComboBox(groupBox);
        sampleFormat->setObjectName("sampleFormat");

        formLayout->setWidget(2, QFormLayout::FieldRole, sampleFormat);

        channelLayout = new QComboBox(groupBox);
        channelLayout->setObjectName("channelLayout");

        formLayout->setWidget(0, QFormLayout::FieldRole, channelLayout);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(AddEditAudioTrackDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddEditAudioTrackDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddEditAudioTrackDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddEditAudioTrackDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddEditAudioTrackDialog);
    } // setupUi

    void retranslateUi(QDialog *AddEditAudioTrackDialog)
    {
        AddEditAudioTrackDialog->setWindowTitle(QCoreApplication::translate("AddEditAudioTrackDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("AddEditAudioTrackDialog", "Channel Layout", nullptr));
        label_2->setText(QCoreApplication::translate("AddEditAudioTrackDialog", "Sample Frequency (in Hz)", nullptr));
        label_3->setText(QCoreApplication::translate("AddEditAudioTrackDialog", "Sample Format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEditAudioTrackDialog: public Ui_AddEditAudioTrackDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITAUDIOTRACKDIALOG_H
