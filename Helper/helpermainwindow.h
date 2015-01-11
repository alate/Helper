#ifndef HELPERMAINWINDOW_H
#define HELPERMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class HelperMainWindow;
}

class HelperMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HelperMainWindow(QWidget *parent = 0);
    ~HelperMainWindow();

private:
    void initConnections();

private:
    Ui::HelperMainWindow *ui;
};

#endif // HELPERMAINWINDOW_H
