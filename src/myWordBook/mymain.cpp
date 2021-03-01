#include "mymain.h"
#include "ui_mymain.h"

MyMain::MyMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyMain)
{
    ui->setupUi(this);
}

MyMain::~MyMain()
{
    delete ui;
}
