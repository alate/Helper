#include "helperdialog.h"
#include "ui_helperdialog.h"

HelperDialog::HelperDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelperDialog)
{
    ui->setupUi(this);
}

HelperDialog::~HelperDialog()
{
    delete ui;
}
