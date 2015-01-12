#include "helperdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelperDialog w;
    w.show();

    return a.exec();
}
