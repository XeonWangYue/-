#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "recite.h"
#include "mymain.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pbReciteWord_clicked();
public slots:
    //主窗口隐藏与显示
    void hideMainWindow();
    void showMainWindow();
    //Recite窗口隐藏与显示
    void hideRecite();
    void showRecite();
signals:
    void doHideMainWindow();
    void doShowMainWindow();
    void doHideRecite();
    void doShowRecite();
private:
    Recite* recite;
    MyMain* mymain;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
