#include "helpermainwindow.h"
#include "ui_helpermainwindow.h"

HelperMainWindow::HelperMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HelperMainWindow)
{
    ui->setupUi(this);
}

HelperMainWindow::~HelperMainWindow()
{
    delete ui;
}
