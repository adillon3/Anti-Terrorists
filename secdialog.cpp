#include "secdialog.h"
#include "ui_secdialog.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "customer_list.h"
#include <QDebug>

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_clicked()
{
    ui->textBrowser->clear();

   QFile file("C:\\Users\\Cam\\Desktop\\customer_file.txt");

   if(!file.open(QIODevice::ReadOnly)) //checking if file opens correctly
       QMessageBox::information(0,"info", file.errorString());

   QTextStream in(&file); //converts file to a stream

    ui->textBrowser->setText(in.readAll());

}

void SecDialog::on_pushButton_2_clicked()//sort list
{
    ui->textBrowser->clear();
    customerList mylist;
    mylist.poplist();
    mylist.sortall();
    mylist.saveexit();


    QFile file("C:\\Users\\Cam\\Desktop\\customer_file.txt");

    if(!file.open(QIODevice::ReadOnly)) //checking if file opens correctly
        QMessageBox::information(0,"info", file.errorString());

    QTextStream in(&file); //converts file to a stream

     ui->textBrowser->setText(in.readAll());


    //ui->textBrowser->append("hello");
    //ui->textBrowser->append("hello1");

}

void SecDialog::on_pushButton_3_clicked() //show only key customers
{
    ui->textBrowser->clear();
    customerList mylist;
    mylist.poplist();
    mylist.sortall();

    //printing
    cNode *tmp;
    tmp = mylist.first;

    while (tmp != nullptr) {
        if (tmp->importance == "key") {
            ui->textBrowser->append(QString::fromStdString(tmp->company));
            ui->textBrowser->append(QString::fromStdString(tmp->address));
            ui->textBrowser->append(QString::fromStdString(tmp->cityStateZip));
            ui->textBrowser->append(QString::fromStdString(tmp->interest));
            ui->textBrowser->append(QString::fromStdString(tmp->importance));
            ui->textBrowser->append("Pamplhets Ordered: " + QString::number(tmp->pamphletsOrdered));
            ui->textBrowser->append("\n");
        }
        tmp = tmp->nxt;
    }
}

void SecDialog::on_pushButton_4_clicked() //show customers including purchase
{
    ui->textBrowser->clear();
    customerList mylist;
    mylist.poplist();
    mylist.sortall();
    cNode *tmp = mylist.first;

    while (tmp != nullptr) {
        if (tmp->importance == "key") {
            ui->textBrowser->append(QString::fromStdString(tmp->company));
            ui->textBrowser->append(QString::fromStdString(tmp->address));
            ui->textBrowser->append(QString::fromStdString(tmp->cityStateZip));
            ui->textBrowser->append(QString::fromStdString(tmp->interest));
            ui->textBrowser->append(QString::fromStdString(tmp->importance));
            ui->textBrowser->append("Pamplhets Ordered: " + QString::number(tmp->pamphletsOrdered));
            ui->textBrowser->append("Urban Robots Bought: " + QString::number(tmp->urbanBought));
            ui->textBrowser->append("Jungle Robots Bought: " + QString::number(tmp->jungleBought));
            ui->textBrowser->append("Desert Robots Bought: " + QString::number(tmp->desertBought));
            ui->textBrowser->append("\n");

        }
        tmp = tmp->nxt;
    }
}


void SecDialog::on_lineEdit_returnPressed()
{
    ui->textBrowser->clear();
    QString inputtmp = ui->lineEdit->text();
    std::string input = inputtmp.toStdString();
    customerList mylist;
    mylist.poplist();
    bool deleted = mylist.deletebyname(input);
    if(deleted){
        ui->textBrowser->clear();
        ui->textBrowser->setText(inputtmp + " has been deleted. Refresh the list to update the information.");
    }
    else{
        ui->textBrowser->clear();
        ui->textBrowser->setText(inputtmp + " was not found. Please enter a correct name.");
    }
    mylist.saveexit();
    ui->lineEdit->clear();
}

   /*
    QString inputtmp = ui->lineEdit->text();
    std::string input = inputtmp.toStdString();

   customerList mylist;
   mylist.poplist();
   mylist.saveToFile(input);
   */


void SecDialog::on_pushButton_5_clicked()
{
    QString texttmp = ui->textEdit->toPlainText();
    QStringList strList = texttmp.split(QRegExp("[\n]"));

    if(strList[0] == "\n") strList[0] = "NA";
    if(strList[1] == "\n") strList[1] = "NA";
    if(strList[2] == "\n") strList[2] = "NA";
    if(strList[3] == "\n") strList[3] = "NA";
    if(strList[4] == "\n") strList[4] = "NA";

    customerList mylist;
    mylist.poplist();
    mylist.addtolist(strList[0].toStdString(), strList[1].toStdString() , strList[2].toStdString(), strList[3].toStdString(), strList[4].toStdString());\
    mylist.saveexit();

    ui->textEdit->clear();
}
