#ifndef SECDIALOG_H

#define SECDIALOG_H



#include <QDialog>





namespace Ui {

class SecDialog;

}



class SecDialog : public QDialog

{

    Q_OBJECT



public:

    explicit SecDialog(QWidget *parent = nullptr);

    ~SecDialog();

    Ui::SecDialog *ui;



private slots:

    void on_pushButton_clicked();



    void on_pushButton_2_clicked();



    void on_pushButton_3_clicked();



    void on_pushButton_4_clicked();



    void on_lineEdit_returnPressed();



    void on_pushButton_5_clicked();



private:

};



#endif // SECDIALOG_H
