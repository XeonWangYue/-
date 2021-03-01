#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->recite=new Recite(ui->centralwidget);
    this->mymain=new MyMain(ui->centralwidget);
//    this->recite->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

