#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secdialog.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString password = ui->lineEdit->text();
    if(password != "admin123"){
        QMessageBox::information(this, "Login", "Password is incorrect");
    }
    else{
        SecDialog secWindow;
        secWindow.setModal(true);// These two lines will show the window
        secWindow.exec();//
    }
}
