#include "registrationdialog.h"
#include "ui_registrationdialog.h"

#include <QPushButton>

RegistrationDialog::RegistrationDialog(std::shared_ptr<VoukoderPro::ILicenseManager> licenseMgr, QWidget *parent): QDialog(parent),
    ui(new Ui::RegistrationDialog), licenseMgr(licenseMgr)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    std::string licenseKey;
    if (licenseMgr->read(licenseKey) == ERR_OK)
    {
        ui->plainTextEdit->setPlainText(QString::fromStdString(licenseKey));
    }
    else
    {
        ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
    }
    ui->plainTextEdit->setFocus();
}

RegistrationDialog::~RegistrationDialog()
{
    delete ui;
}

void RegistrationDialog::on_plainTextEdit_textChanged()
{
    const QString licenseKey = ui->plainTextEdit->toPlainText();

    VoukoderPro::License license = {};
    int ret = licenseMgr->create(licenseKey.toStdString(), license);
    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(ret == 0);
}


void RegistrationDialog::on_RegistrationDialog_accepted()
{
    const QString licenseKey = ui->plainTextEdit->toPlainText();
    licenseMgr->write(licenseKey.toStdString());
}

