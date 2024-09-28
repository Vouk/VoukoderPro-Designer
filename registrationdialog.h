#ifndef REGISTRATIONDIALOG_H
#define REGISTRATIONDIALOG_H

#include "../Core/voukoderpro_api.h"

#include <QDialog>

namespace Ui {
class RegistrationDialog;
}

class RegistrationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrationDialog(std::shared_ptr<VoukoderPro::ILicenseManager> licenseMgr, QWidget *parent = nullptr);
    ~RegistrationDialog();

private slots:
    void on_plainTextEdit_textChanged();

    void on_RegistrationDialog_accepted();

private:
    Ui::RegistrationDialog *ui;
    std::shared_ptr<VoukoderPro::ILicenseManager> licenseMgr;
};

#endif // REGISTRATIONDIALOG_H
