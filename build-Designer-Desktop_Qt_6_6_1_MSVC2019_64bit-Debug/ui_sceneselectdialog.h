/********************************************************************************
** Form generated from reading UI file 'sceneselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENESELECTDIALOG_H
#define UI_SCENESELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SceneSelectDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SceneSelectDialog)
    {
        if (SceneSelectDialog->objectName().isEmpty())
            SceneSelectDialog->setObjectName("SceneSelectDialog");
        SceneSelectDialog->setWindowModality(Qt::ApplicationModal);
        SceneSelectDialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo_512"), QSize(), QIcon::Normal, QIcon::Off);
        SceneSelectDialog->setWindowIcon(icon);
        SceneSelectDialog->setModal(true);
        horizontalLayout = new QHBoxLayout(SceneSelectDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        listWidget = new QListWidget(SceneSelectDialog);
        listWidget->setObjectName("listWidget");

        horizontalLayout->addWidget(listWidget);

        widget = new QWidget(SceneSelectDialog);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout->addWidget(widget);


        retranslateUi(SceneSelectDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SceneSelectDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SceneSelectDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SceneSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *SceneSelectDialog)
    {
        SceneSelectDialog->setWindowTitle(QCoreApplication::translate("SceneSelectDialog", "Scene selection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SceneSelectDialog: public Ui_SceneSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENESELECTDIALOG_H
