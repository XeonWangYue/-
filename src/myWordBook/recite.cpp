#include "recite.h"
#include "ui_recite.h"

Recite::Recite(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Recite)
{
    ui->setupUi(this);
}

Recite::~Recite()
{
    delete ui;
}

void Recite::on_pushButton_clicked()
{

}
