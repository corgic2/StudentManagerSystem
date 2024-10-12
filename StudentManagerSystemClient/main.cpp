#include "SMS_MainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SMS_MainWindow w;
    w.show();

    return a.exec();
}
