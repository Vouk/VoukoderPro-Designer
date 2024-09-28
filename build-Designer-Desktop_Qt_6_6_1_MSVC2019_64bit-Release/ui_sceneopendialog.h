/********************************************************************************
** Form generated from reading UI file 'sceneopendialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEOPENDIALOG_H
#define UI_SCENEOPENDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SceneOpenDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *scenes;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SceneOpenDialog)
    {
        if (SceneOpenDialog->objectName().isEmpty())
            SceneOpenDialog->setObjectName("SceneOpenDialog");
        SceneOpenDialog->resize(550, 350);
        verticalLayout = new QVBoxLayout(SceneOpenDialog);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(SceneOpenDialog);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        scenes = new QTreeWidget(tab);
        scenes->setObjectName("scenes");
        scenes->setIndentation(0);
        scenes->setAllColumnsShowFocus(true);
        scenes->header()->setVisible(false);

        verticalLayout_2->addWidget(scenes);

        widget = new QWidget(tab);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setEnabled(false);

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(SceneOpenDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SceneOpenDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SceneOpenDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SceneOpenDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SceneOpenDialog);
    } // setupUi

    void retranslateUi(QDialog *SceneOpenDialog)
    {
        SceneOpenDialog->setWindowTitle(QCoreApplication::translate("SceneOpenDialog", "Open scene", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = scenes->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("SceneOpenDialog", "Name", nullptr));
        deleteButton->setText(QCoreApplication::translate("SceneOpenDialog", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SceneOpenDialog", "Scenes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SceneOpenDialog: public Ui_SceneOpenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENEOPENDIALOG_H
