#ifndef REPOSITORYMANAGEDIALOG_H
#define REPOSITORYMANAGEDIALOG_H

#include <QDialog>

namespace Ui {
class RepositoryManageDialog;
}

class RepositoryManageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RepositoryManageDialog(QWidget *parent = 0);
    ~RepositoryManageDialog();

private:
    Ui::RepositoryManageDialog *ui;
};

#endif // REPOSITORYMANAGEDIALOG_H
