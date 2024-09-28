/********************************************************************************
** Form generated from reading UI file 'newsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSDIALOG_H
#define UI_NEWSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewsDialog)
    {
        if (NewsDialog->objectName().isEmpty())
            NewsDialog->setObjectName("NewsDialog");
        NewsDialog->resize(500, 450);
        verticalLayout = new QVBoxLayout(NewsDialog);
        verticalLayout->setObjectName("verticalLayout");
        textBrowser = new QTextBrowser(NewsDialog);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        buttonBox = new QDialogButtonBox(NewsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NewsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NewsDialog);
    } // setupUi

    void retranslateUi(QDialog *NewsDialog)
    {
        NewsDialog->setWindowTitle(QCoreApplication::translate("NewsDialog", "Latest News", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewsDialog: public Ui_NewsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSDIALOG_H
