#include "SMS_MainWindow.h"
#include "ui_SMS_MainWindow.h"

SMS_MainWindow::SMS_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SMS_MainWindow)
{
    ui->setupUi(this);
}

SMS_MainWindow::~SMS_MainWindow()
{
    delete ui;
}
