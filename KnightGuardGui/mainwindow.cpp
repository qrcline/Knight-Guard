#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//Button Slots
void MainWindow::on_Button_CommandSend_clicked()
{

}

void MainWindow::on_Button_SerialConnection_clicked()
{

}

void MainWindow::on_Button_NetworkConnect_clicked()
{

}

void MainWindow::on_Button_Move_Forward_clicked()
{

}

void MainWindow::on_Button_Move_Reverse_clicked()
{

}

void MainWindow::on_Button_Move_Right_clicked()
{

}

void MainWindow::on_Button_Move_Reverse_2_clicked()
{

}

void MainWindow::on_Button_Move_Right_2_clicked()
{

}
