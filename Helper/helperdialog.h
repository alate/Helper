#ifndef HELPERDIALOG_H
#define HELPERDIALOG_H

#include <QDialog>

namespace Ui {
class HelperDialog;
}

class HelperDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HelperDialog(QWidget *parent = 0);
    ~HelperDialog();

private:
    Ui::HelperDialog *ui;
};

#endif // HELPERDIALOG_H
