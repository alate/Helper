#include "helpermainwindow.h"
#include "ui_helpermainwindow.h"

HelperMainWindow::HelperMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HelperMainWindow)
{
    ui->setupUi(this);

    initConnections();
}

HelperMainWindow::~HelperMainWindow()
{
    delete ui;
}

HelperMainWindow::initConnections()
{
    connect(actionManage_Repository,SIGNAL(trigger()),this,);
}
