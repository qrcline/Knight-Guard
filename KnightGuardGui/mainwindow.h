#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_Button_CommandSend_clicked();

    void on_Button_SerialConnection_clicked();

    void on_Button_NetworkConnect_clicked();

    void on_Button_Move_Forward_clicked();

    void on_Button_Move_Reverse_clicked();

    void on_Button_Move_Right_clicked();

    void on_Button_Move_Reverse_2_clicked();

    void on_Button_Move_Right_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
