#include "repositorymanagedialog.h"
#include "ui_repositorymanagedialog.h"

RepositoryManageDialog::RepositoryManageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RepositoryManageDialog)
{
    ui->setupUi(this);
}

RepositoryManageDialog::~RepositoryManageDialog()
{
    delete ui;
}
