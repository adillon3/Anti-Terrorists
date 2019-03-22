#include "helpmenu.h"
#include "ui_helpmenu.h"


Helpmenu::Helpmenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Helpmenu)
{
    ui->setupUi(this);
}

Helpmenu::~Helpmenu()
{
    delete ui;
}


