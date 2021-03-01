#ifndef MMYAIN_H
#define MYMAIN_H

#include <QWidget>

namespace Ui {
class MyMain;
}

class MyMain : public QWidget
{
    Q_OBJECT

public:
    explicit MyMain(QWidget *parent = nullptr);
    ~MyMain();

private:
    Ui::MyMain *ui;
};

#endif // MYMAIN_H
