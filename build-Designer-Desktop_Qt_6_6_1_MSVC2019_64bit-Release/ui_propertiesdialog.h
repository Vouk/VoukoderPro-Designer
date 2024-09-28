/********************************************************************************
** Form generated from reading UI file 'propertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESDIALOG_H
#define UI_PROPERTIESDIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qttreepropertybrowser.h>

QT_BEGIN_NAMESPACE

class Ui_PropertiesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabEncoder;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QTreeWidget *encoders;
    QStackedWidget *propertyWidget;
    QtTreePropertyBrowser *propertyBrowser;
    QWidget *fileBrowser;
    QGridLayout *gridLayout;
    QGroupBox *filenameGroup;
    QVBoxLayout *verticalLayout_9;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_13;
    QLineEdit *filenameInput;
    QPushButton *filenameButton;
    QTreeWidget *variablesWidget;
    QLabel *label_15;
    QWidget *tabStereo3D;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *stereo3dGroup;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QComboBox *stereo3dType;
    QLabel *label_6;
    QComboBox *stereo3dView;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabSpherical;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *sphericalGroup;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *sphericalProjection;
    QLabel *label_2;
    QSpinBox *sphericalYaw;
    QLabel *label_3;
    QSpinBox *sphericalPitch;
    QLabel *label_4;
    QSpinBox *sphericalRoll;
    QSpacerItem *verticalSpacer;
    QWidget *tabHDR;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *masteringDisplayDataGroup;
    QFormLayout *formLayout_3;
    QLabel *label_7;
    QComboBox *masteringDisplayDataPrimaries;
    QLabel *label_8;
    QDoubleSpinBox *masteringDisplayDataLuminanceMin;
    QLabel *label_9;
    QSpinBox *masteringDisplayDataLuminanceMax;
    QGroupBox *contentLightLevelsGroup;
    QFormLayout *formLayout_4;
    QLabel *label_10;
    QSpinBox *contentLightLevelsMaxCLL;
    QLabel *label_11;
    QSpinBox *contentLightLevelsMaxFALL;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabMetadata;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *metaGroup;
    QFormLayout *formLayout_5;
    QLabel *label_12;
    QComboBox *metaLanguages;
    QSpacerItem *verticalSpacer_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PropertiesDialog)
    {
        if (PropertiesDialog->objectName().isEmpty())
            PropertiesDialog->setObjectName("PropertiesDialog");
        PropertiesDialog->resize(686, 616);
        PropertiesDialog->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout = new QVBoxLayout(PropertiesDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        tabWidget = new QTabWidget(PropertiesDialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        tabEncoder = new QWidget();
        tabEncoder->setObjectName("tabEncoder");
        verticalLayout_2 = new QVBoxLayout(tabEncoder);
        verticalLayout_2->setObjectName("verticalLayout_2");
        splitter = new QSplitter(tabEncoder);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        encoders = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Encoder"));
        encoders->setHeaderItem(__qtreewidgetitem);
        encoders->setObjectName("encoders");
        encoders->setSelectionBehavior(QAbstractItemView::SelectItems);
        encoders->setSortingEnabled(true);
        encoders->setAnimated(true);
        encoders->setHeaderHidden(true);
        splitter->addWidget(encoders);
        encoders->header()->setVisible(false);
        propertyWidget = new QStackedWidget(splitter);
        propertyWidget->setObjectName("propertyWidget");
        propertyBrowser = new QtTreePropertyBrowser();
        propertyBrowser->setObjectName("propertyBrowser");
        propertyWidget->addWidget(propertyBrowser);
        fileBrowser = new QWidget();
        fileBrowser->setObjectName("fileBrowser");
        gridLayout = new QGridLayout(fileBrowser);
        gridLayout->setObjectName("gridLayout");
        filenameGroup = new QGroupBox(fileBrowser);
        filenameGroup->setObjectName("filenameGroup");
        filenameGroup->setCheckable(true);
        filenameGroup->setChecked(false);
        verticalLayout_9 = new QVBoxLayout(filenameGroup);
        verticalLayout_9->setObjectName("verticalLayout_9");
        widget = new QWidget(filenameGroup);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");

        horizontalLayout->addWidget(label_13);

        filenameInput = new QLineEdit(widget);
        filenameInput->setObjectName("filenameInput");

        horizontalLayout->addWidget(filenameInput);

        filenameButton = new QPushButton(widget);
        filenameButton->setObjectName("filenameButton");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filenameButton->sizePolicy().hasHeightForWidth());
        filenameButton->setSizePolicy(sizePolicy);
        filenameButton->setMinimumSize(QSize(30, 0));
        filenameButton->setAutoDefault(false);

        horizontalLayout->addWidget(filenameButton);


        verticalLayout_9->addWidget(widget);

        variablesWidget = new QTreeWidget(filenameGroup);
        new QTreeWidgetItem(variablesWidget);
        new QTreeWidgetItem(variablesWidget);
        new QTreeWidgetItem(variablesWidget);
        new QTreeWidgetItem(variablesWidget);
        new QTreeWidgetItem(variablesWidget);
        new QTreeWidgetItem(variablesWidget);
        new QTreeWidgetItem(variablesWidget);
        new QTreeWidgetItem(variablesWidget);
        new QTreeWidgetItem(variablesWidget);
        new QTreeWidgetItem(variablesWidget);
        variablesWidget->setObjectName("variablesWidget");
        variablesWidget->setIndentation(0);

        verticalLayout_9->addWidget(variablesWidget);


        gridLayout->addWidget(filenameGroup, 0, 0, 1, 1);

        label_15 = new QLabel(fileBrowser);
        label_15->setObjectName("label_15");
        label_15->setWordWrap(true);

        gridLayout->addWidget(label_15, 1, 0, 1, 1);

        propertyWidget->addWidget(fileBrowser);
        splitter->addWidget(propertyWidget);

        verticalLayout_2->addWidget(splitter);

        tabWidget->addTab(tabEncoder, QString());
        tabStereo3D = new QWidget();
        tabStereo3D->setObjectName("tabStereo3D");
        verticalLayout_5 = new QVBoxLayout(tabStereo3D);
        verticalLayout_5->setObjectName("verticalLayout_5");
        stereo3dGroup = new QGroupBox(tabStereo3D);
        stereo3dGroup->setObjectName("stereo3dGroup");
        stereo3dGroup->setCheckable(true);
        stereo3dGroup->setChecked(false);
        formLayout_2 = new QFormLayout(stereo3dGroup);
        formLayout_2->setObjectName("formLayout_2");
        label_5 = new QLabel(stereo3dGroup);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(100, 0));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        stereo3dType = new QComboBox(stereo3dGroup);
        stereo3dType->setObjectName("stereo3dType");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, stereo3dType);

        label_6 = new QLabel(stereo3dGroup);
        label_6->setObjectName("label_6");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        stereo3dView = new QComboBox(stereo3dGroup);
        stereo3dView->setObjectName("stereo3dView");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, stereo3dView);


        verticalLayout_5->addWidget(stereo3dGroup);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        tabWidget->addTab(tabStereo3D, QString());
        tabSpherical = new QWidget();
        tabSpherical->setObjectName("tabSpherical");
        verticalLayout_4 = new QVBoxLayout(tabSpherical);
        verticalLayout_4->setObjectName("verticalLayout_4");
        sphericalGroup = new QGroupBox(tabSpherical);
        sphericalGroup->setObjectName("sphericalGroup");
        sphericalGroup->setCheckable(true);
        sphericalGroup->setChecked(false);
        formLayout = new QFormLayout(sphericalGroup);
        formLayout->setObjectName("formLayout");
        label = new QLabel(sphericalGroup);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        sphericalProjection = new QComboBox(sphericalGroup);
        sphericalProjection->setObjectName("sphericalProjection");

        formLayout->setWidget(0, QFormLayout::FieldRole, sphericalProjection);

        label_2 = new QLabel(sphericalGroup);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        sphericalYaw = new QSpinBox(sphericalGroup);
        sphericalYaw->setObjectName("sphericalYaw");
        sphericalYaw->setMinimum(-180);
        sphericalYaw->setMaximum(180);

        formLayout->setWidget(1, QFormLayout::FieldRole, sphericalYaw);

        label_3 = new QLabel(sphericalGroup);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        sphericalPitch = new QSpinBox(sphericalGroup);
        sphericalPitch->setObjectName("sphericalPitch");
        sphericalPitch->setMinimum(-90);
        sphericalPitch->setMaximum(90);

        formLayout->setWidget(2, QFormLayout::FieldRole, sphericalPitch);

        label_4 = new QLabel(sphericalGroup);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        sphericalRoll = new QSpinBox(sphericalGroup);
        sphericalRoll->setObjectName("sphericalRoll");
        sphericalRoll->setMinimum(-180);
        sphericalRoll->setMaximum(180);

        formLayout->setWidget(3, QFormLayout::FieldRole, sphericalRoll);


        verticalLayout_4->addWidget(sphericalGroup);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(tabSpherical, QString());
        tabHDR = new QWidget();
        tabHDR->setObjectName("tabHDR");
        verticalLayout_3 = new QVBoxLayout(tabHDR);
        verticalLayout_3->setObjectName("verticalLayout_3");
        masteringDisplayDataGroup = new QGroupBox(tabHDR);
        masteringDisplayDataGroup->setObjectName("masteringDisplayDataGroup");
        masteringDisplayDataGroup->setCheckable(true);
        masteringDisplayDataGroup->setChecked(false);
        formLayout_3 = new QFormLayout(masteringDisplayDataGroup);
        formLayout_3->setObjectName("formLayout_3");
        label_7 = new QLabel(masteringDisplayDataGroup);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(150, 0));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_7);

        masteringDisplayDataPrimaries = new QComboBox(masteringDisplayDataGroup);
        masteringDisplayDataPrimaries->setObjectName("masteringDisplayDataPrimaries");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, masteringDisplayDataPrimaries);

        label_8 = new QLabel(masteringDisplayDataGroup);
        label_8->setObjectName("label_8");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_8);

        masteringDisplayDataLuminanceMin = new QDoubleSpinBox(masteringDisplayDataGroup);
        masteringDisplayDataLuminanceMin->setObjectName("masteringDisplayDataLuminanceMin");
        masteringDisplayDataLuminanceMin->setDecimals(3);
        masteringDisplayDataLuminanceMin->setMaximum(5.000000000000000);
        masteringDisplayDataLuminanceMin->setValue(0.005000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, masteringDisplayDataLuminanceMin);

        label_9 = new QLabel(masteringDisplayDataGroup);
        label_9->setObjectName("label_9");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_9);

        masteringDisplayDataLuminanceMax = new QSpinBox(masteringDisplayDataGroup);
        masteringDisplayDataLuminanceMax->setObjectName("masteringDisplayDataLuminanceMax");
        masteringDisplayDataLuminanceMax->setMinimum(5);
        masteringDisplayDataLuminanceMax->setMaximum(10000);
        masteringDisplayDataLuminanceMax->setValue(1000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, masteringDisplayDataLuminanceMax);


        verticalLayout_3->addWidget(masteringDisplayDataGroup);

        contentLightLevelsGroup = new QGroupBox(tabHDR);
        contentLightLevelsGroup->setObjectName("contentLightLevelsGroup");
        contentLightLevelsGroup->setCheckable(true);
        contentLightLevelsGroup->setChecked(false);
        formLayout_4 = new QFormLayout(contentLightLevelsGroup);
        formLayout_4->setObjectName("formLayout_4");
        label_10 = new QLabel(contentLightLevelsGroup);
        label_10->setObjectName("label_10");
        label_10->setMinimumSize(QSize(150, 0));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_10);

        contentLightLevelsMaxCLL = new QSpinBox(contentLightLevelsGroup);
        contentLightLevelsMaxCLL->setObjectName("contentLightLevelsMaxCLL");
        contentLightLevelsMaxCLL->setMaximum(10000);
        contentLightLevelsMaxCLL->setValue(1000);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, contentLightLevelsMaxCLL);

        label_11 = new QLabel(contentLightLevelsGroup);
        label_11->setObjectName("label_11");
        label_11->setAcceptDrops(true);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_11);

        contentLightLevelsMaxFALL = new QSpinBox(contentLightLevelsGroup);
        contentLightLevelsMaxFALL->setObjectName("contentLightLevelsMaxFALL");
        contentLightLevelsMaxFALL->setMaximum(10000);
        contentLightLevelsMaxFALL->setValue(200);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, contentLightLevelsMaxFALL);


        verticalLayout_3->addWidget(contentLightLevelsGroup);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tabWidget->addTab(tabHDR, QString());
        tabMetadata = new QWidget();
        tabMetadata->setObjectName("tabMetadata");
        verticalLayout_6 = new QVBoxLayout(tabMetadata);
        verticalLayout_6->setObjectName("verticalLayout_6");
        metaGroup = new QGroupBox(tabMetadata);
        metaGroup->setObjectName("metaGroup");
        metaGroup->setCheckable(true);
        metaGroup->setChecked(false);
        formLayout_5 = new QFormLayout(metaGroup);
        formLayout_5->setObjectName("formLayout_5");
        label_12 = new QLabel(metaGroup);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(100, 0));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_12);

        metaLanguages = new QComboBox(metaGroup);
        metaLanguages->setObjectName("metaLanguages");

        formLayout_5->setWidget(0, QFormLayout::FieldRole, metaLanguages);


        verticalLayout_6->addWidget(metaGroup);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        tabWidget->addTab(tabMetadata, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(PropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PropertiesDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);
        propertyWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *PropertiesDialog)
    {
        PropertiesDialog->setWindowTitle(QCoreApplication::translate("PropertiesDialog", "Properties", nullptr));
        filenameGroup->setTitle(QCoreApplication::translate("PropertiesDialog", "Override filename", nullptr));
        label_13->setText(QCoreApplication::translate("PropertiesDialog", "Filename", nullptr));
        filenameInput->setText(QString());
        filenameButton->setText(QCoreApplication::translate("PropertiesDialog", "Browse ...", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = variablesWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("PropertiesDialog", "Example", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("PropertiesDialog", "Description", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("PropertiesDialog", "JavaScript", nullptr));

        const bool __sortingEnabled = variablesWidget->isSortingEnabled();
        variablesWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = variablesWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("PropertiesDialog", "c:\\users\\daniel\\Desktop\\videos\\ExampleVideo.mp4", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("PropertiesDialog", "Absolute full file name", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("PropertiesDialog", "OutputFile.Absolute", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = variablesWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(2, QCoreApplication::translate("PropertiesDialog", "c:\\users\\daniel\\Desktop\\videos", nullptr));
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("PropertiesDialog", "File path", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("PropertiesDialog", "OutputFile.Path", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = variablesWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(2, QCoreApplication::translate("PropertiesDialog", "ExampleVideo", nullptr));
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("PropertiesDialog", "File name (w/o extension)", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("PropertiesDialog", "OutputFile.Name", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = variablesWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(2, QCoreApplication::translate("PropertiesDialog", ".mp4", nullptr));
        ___qtreewidgetitem4->setText(1, QCoreApplication::translate("PropertiesDialog", "File extension", nullptr));
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("PropertiesDialog", "OutputFile.Extension", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = variablesWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(2, QCoreApplication::translate("PropertiesDialog", "2023", nullptr));
        ___qtreewidgetitem5->setText(1, QCoreApplication::translate("PropertiesDialog", "Current year", nullptr));
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("PropertiesDialog", "(new Date()).getFullYear()", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = variablesWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(2, QCoreApplication::translate("PropertiesDialog", "11", nullptr));
        ___qtreewidgetitem6->setText(1, QCoreApplication::translate("PropertiesDialog", "Current month", nullptr));
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("PropertiesDialog", "(new Date()).getMonth()", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = variablesWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(2, QCoreApplication::translate("PropertiesDialog", "21", nullptr));
        ___qtreewidgetitem7->setText(1, QCoreApplication::translate("PropertiesDialog", "Current day", nullptr));
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("PropertiesDialog", "(new Date()).getDate()", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = variablesWidget->topLevelItem(7);
        ___qtreewidgetitem8->setText(2, QCoreApplication::translate("PropertiesDialog", "17", nullptr));
        ___qtreewidgetitem8->setText(1, QCoreApplication::translate("PropertiesDialog", "Current hours", nullptr));
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("PropertiesDialog", "(new Date()).getHours()", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = variablesWidget->topLevelItem(8);
        ___qtreewidgetitem9->setText(2, QCoreApplication::translate("PropertiesDialog", "31", nullptr));
        ___qtreewidgetitem9->setText(1, QCoreApplication::translate("PropertiesDialog", "Current minutes", nullptr));
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("PropertiesDialog", "(new Date()).getMinutes()", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = variablesWidget->topLevelItem(9);
        ___qtreewidgetitem10->setText(2, QCoreApplication::translate("PropertiesDialog", "59", nullptr));
        ___qtreewidgetitem10->setText(1, QCoreApplication::translate("PropertiesDialog", "Current seconds", nullptr));
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("PropertiesDialog", "(new Date()).getSeconds()", nullptr));
        variablesWidget->setSortingEnabled(__sortingEnabled);

        label_15->setText(QCoreApplication::translate("PropertiesDialog", "If you don't override the filename the filename set in NLE will be used. A possible *.voukoderpro file extension will automatically be replaced with the actual one.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabEncoder), QCoreApplication::translate("PropertiesDialog", "General", nullptr));
        stereo3dGroup->setTitle(QCoreApplication::translate("PropertiesDialog", "Stereo 3D", nullptr));
        label_5->setText(QCoreApplication::translate("PropertiesDialog", "Type", nullptr));
        label_6->setText(QCoreApplication::translate("PropertiesDialog", "Views", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabStereo3D), QCoreApplication::translate("PropertiesDialog", "Stereo 3D", nullptr));
        sphericalGroup->setTitle(QCoreApplication::translate("PropertiesDialog", "Spherical", nullptr));
        label->setText(QCoreApplication::translate("PropertiesDialog", "Projection", nullptr));
        label_2->setText(QCoreApplication::translate("PropertiesDialog", "Yaw", nullptr));
        label_3->setText(QCoreApplication::translate("PropertiesDialog", "Pitch", nullptr));
        label_4->setText(QCoreApplication::translate("PropertiesDialog", "Roll", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSpherical), QCoreApplication::translate("PropertiesDialog", "Spherical", nullptr));
        masteringDisplayDataGroup->setTitle(QCoreApplication::translate("PropertiesDialog", "Mastering Display Data", nullptr));
        label_7->setText(QCoreApplication::translate("PropertiesDialog", "Primaries", nullptr));
        label_8->setText(QCoreApplication::translate("PropertiesDialog", "Min. Luminance [cd/m^2]", nullptr));
        label_9->setText(QCoreApplication::translate("PropertiesDialog", "Max. Luminance [cd/m^2]", nullptr));
        contentLightLevelsGroup->setTitle(QCoreApplication::translate("PropertiesDialog", "Content Light Levels", nullptr));
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("PropertiesDialog", "MaxCLL [cd/m^2]", nullptr));
#if QT_CONFIG(tooltip)
        label_11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("PropertiesDialog", "MaxFALL [cd/m^2]", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabHDR), QCoreApplication::translate("PropertiesDialog", "HDR", nullptr));
        metaGroup->setTitle(QCoreApplication::translate("PropertiesDialog", "Language", nullptr));
        label_12->setText(QCoreApplication::translate("PropertiesDialog", "Language", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMetadata), QCoreApplication::translate("PropertiesDialog", "Metadata", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertiesDialog: public Ui_PropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESDIALOG_H
