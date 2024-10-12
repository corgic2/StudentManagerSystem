#ifndef SMS_MAINWINDOW_H
#define SMS_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class SMS_MainWindow;
}

class SMS_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SMS_MainWindow(QWidget *parent = 0);
    ~SMS_MainWindow();

private:
    Ui::SMS_MainWindow *ui;
};

#endif // SMS_MAINWINDOW_H
