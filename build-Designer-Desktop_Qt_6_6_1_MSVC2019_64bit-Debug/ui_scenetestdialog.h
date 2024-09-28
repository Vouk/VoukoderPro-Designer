/********************************************************************************
** Form generated from reading UI file 'scenetestdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENETESTDIALOG_H
#define UI_SCENETESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SceneTestDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *logPanel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SceneTestDialog)
    {
        if (SceneTestDialog->objectName().isEmpty())
            SceneTestDialog->setObjectName("SceneTestDialog");
        SceneTestDialog->resize(839, 588);
        verticalLayout = new QVBoxLayout(SceneTestDialog);
        verticalLayout->setObjectName("verticalLayout");
        logPanel = new QPlainTextEdit(SceneTestDialog);
        logPanel->setObjectName("logPanel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Lucida Console")});
        logPanel->setFont(font);
        logPanel->setReadOnly(true);

        verticalLayout->addWidget(logPanel);

        buttonBox = new QDialogButtonBox(SceneTestDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SceneTestDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SceneTestDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SceneTestDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SceneTestDialog);
    } // setupUi

    void retranslateUi(QDialog *SceneTestDialog)
    {
        SceneTestDialog->setWindowTitle(QCoreApplication::translate("SceneTestDialog", "Scene Test Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SceneTestDialog: public Ui_SceneTestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENETESTDIALOG_H
