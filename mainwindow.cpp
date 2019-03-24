#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testimonial.h"
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

    QFile file("C:\\Users\\Cam\\Desktop\\Testimonial.txt");

      if(!file.open(QIODevice::ReadOnly)) //checking if file opens correctly

         QMessageBox::information(0,"info", file.errorString());

     QTextStream in(&file); //converts file to a stream
       ui->textBrowser->setText(in.readAll());
}

void MainWindow::on_pushButton_2_clicked()
{
    QString texttmp = ui->textEdit->toPlainText();
    QStringList strList = texttmp.split(QRegExp("[\n]"));

    if(strList[0] == "\n") strList[0] = "NA";
    if(strList[1] == "\n") strList[1] = "NA";

    Testimonial newTestimonial;
    newTestimonial.addTestimonial(strList[0].toStdString(), strList[1].toStdString());

    ui->textEdit->clear();
}
