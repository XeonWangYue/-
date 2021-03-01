#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->recite=new Recite(this);

    this->recite->hide();

    connect(this,SIGNAL(doHideMainWindow()),this,SLOT(hideMainWindow()));
    connect(this,SIGNAL(doShowMainWindow()),this,SLOT(showMainWindow()));
    connect(this,SIGNAL(doShowRecite()),this,SLOT(showRecite()));
    connect(this,SIGNAL(doHideRecite()),this,SLOT(hideRecite()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pbReciteWord_clicked()
{
    emit(doHideMainWindow());
    emit(doShowRecite());
}

void MainWindow::hideMainWindow(){
    ui->centralwidget->hide();
}
void MainWindow::showMainWindow(){
    ui->centralwidget->show();
}
void MainWindow::hideRecite(){
    this->recite->hide();
}
void MainWindow::showRecite(){
    this->recite->show();
}
