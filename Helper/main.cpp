#include "helpermainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelperMainWindow w;
    w.show();

    return a.exec();
}
