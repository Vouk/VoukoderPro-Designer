/********************************************************************************
** Form generated from reading UI file 'scenesavedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENESAVEDIALOG_H
#define UI_SCENESAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SceneSaveDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SceneSaveDialog)
    {
        if (SceneSaveDialog->objectName().isEmpty())
            SceneSaveDialog->setObjectName("SceneSaveDialog");
        SceneSaveDialog->resize(270, 70);
        verticalLayout = new QVBoxLayout(SceneSaveDialog);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(SceneSaveDialog);
        widget->setObjectName("widget");
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        name = new QLineEdit(widget);
        name->setObjectName("name");
        name->setMaxLength(255);

        formLayout->setWidget(0, QFormLayout::FieldRole, name);


        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(SceneSaveDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SceneSaveDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SceneSaveDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SceneSaveDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SceneSaveDialog);
    } // setupUi

    void retranslateUi(QDialog *SceneSaveDialog)
    {
        SceneSaveDialog->setWindowTitle(QCoreApplication::translate("SceneSaveDialog", "Save scene as", nullptr));
        label->setText(QCoreApplication::translate("SceneSaveDialog", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SceneSaveDialog: public Ui_SceneSaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENESAVEDIALOG_H
