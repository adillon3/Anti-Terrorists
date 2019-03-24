#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
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
    ui->textBrowser->clear();



    QFile file("C:\\Users\\evanc\\Desktop\\dump\\Testimonials.txt");



      if(!file.open(QIODevice::ReadOnly)) //checking if file opens correctly

         QMessageBox::information(0,"info", file.errorString());



       QTextStream in(&file); //converts file to a stream
        ui->textBrowser->setText(in.readAll());
}

void MainWindow::on_pushButton_2_clicked()
{

}
