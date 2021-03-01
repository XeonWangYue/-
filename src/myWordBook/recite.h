#ifndef RECITE_H
#define RECITE_H

#include <QWidget>

namespace Ui {
class Recite;
}

class Recite : public QWidget
{
    Q_OBJECT

public:
    explicit Recite(QWidget *parent = nullptr);
    ~Recite();

private slots:
    void on_pbReciteBack_clicked();

private:
    Ui::Recite *ui;
};

#endif // RECITE_H
