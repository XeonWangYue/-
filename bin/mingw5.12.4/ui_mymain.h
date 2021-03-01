/********************************************************************************
** Form generated from reading UI file 'mymain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAIN_H
#define UI_MYMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMain
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayoutBasic;
    QHBoxLayout *horizontalLayoutRowStatus;
    QVBoxLayout *verticalLayout;
    QLabel *labelDateNow;
    QLabel *labelDateEnd;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelTitleTotal;
    QLabel *labelWordTotal;
    QLabel *labelTitleToday;
    QLabel *labelWordNew;
    QLabel *labelWrodReview;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbReciteWord;
    QPushButton *pbViewWord;

    void setupUi(QWidget *MyMain)
    {
        if (MyMain->objectName().isEmpty())
            MyMain->setObjectName(QString::fromUtf8("MyMain"));
        MyMain->resize(800, 621);
        gridLayout = new QGridLayout(MyMain);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayoutBasic = new QVBoxLayout();
        verticalLayoutBasic->setSpacing(10);
        verticalLayoutBasic->setObjectName(QString::fromUtf8("verticalLayoutBasic"));
        verticalLayoutBasic->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayoutBasic->setContentsMargins(10, 10, 10, 10);
        horizontalLayoutRowStatus = new QHBoxLayout();
        horizontalLayoutRowStatus->setObjectName(QString::fromUtf8("horizontalLayoutRowStatus"));
        horizontalLayoutRowStatus->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelDateNow = new QLabel(MyMain);
        labelDateNow->setObjectName(QString::fromUtf8("labelDateNow"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(24);
        labelDateNow->setFont(font);
        labelDateNow->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelDateNow);

        labelDateEnd = new QLabel(MyMain);
        labelDateEnd->setObjectName(QString::fromUtf8("labelDateEnd"));
        labelDateEnd->setFont(font);
        labelDateEnd->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelDateEnd);


        horizontalLayoutRowStatus->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelTitleTotal = new QLabel(MyMain);
        labelTitleTotal->setObjectName(QString::fromUtf8("labelTitleTotal"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        labelTitleTotal->setFont(font1);

        verticalLayout_2->addWidget(labelTitleTotal);

        labelWordTotal = new QLabel(MyMain);
        labelWordTotal->setObjectName(QString::fromUtf8("labelWordTotal"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        labelWordTotal->setFont(font2);
        labelWordTotal->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelWordTotal);

        labelTitleToday = new QLabel(MyMain);
        labelTitleToday->setObjectName(QString::fromUtf8("labelTitleToday"));
        labelTitleToday->setFont(font1);

        verticalLayout_2->addWidget(labelTitleToday);

        labelWordNew = new QLabel(MyMain);
        labelWordNew->setObjectName(QString::fromUtf8("labelWordNew"));
        labelWordNew->setFont(font2);
        labelWordNew->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelWordNew);

        labelWrodReview = new QLabel(MyMain);
        labelWrodReview->setObjectName(QString::fromUtf8("labelWrodReview"));
        labelWrodReview->setFont(font2);
        labelWrodReview->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelWrodReview);


        horizontalLayoutRowStatus->addLayout(verticalLayout_2);

        horizontalLayoutRowStatus->setStretch(0, 1);
        horizontalLayoutRowStatus->setStretch(1, 1);

        verticalLayoutBasic->addLayout(horizontalLayoutRowStatus);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        pbReciteWord = new QPushButton(MyMain);
        pbReciteWord->setObjectName(QString::fromUtf8("pbReciteWord"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbReciteWord->sizePolicy().hasHeightForWidth());
        pbReciteWord->setSizePolicy(sizePolicy);
        pbReciteWord->setMinimumSize(QSize(200, 200));

        horizontalLayout_2->addWidget(pbReciteWord);

        pbViewWord = new QPushButton(MyMain);
        pbViewWord->setObjectName(QString::fromUtf8("pbViewWord"));
        sizePolicy.setHeightForWidth(pbViewWord->sizePolicy().hasHeightForWidth());
        pbViewWord->setSizePolicy(sizePolicy);
        pbViewWord->setMinimumSize(QSize(200, 200));

        horizontalLayout_2->addWidget(pbViewWord);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout_2);


        verticalLayoutBasic->addLayout(verticalLayout_6);


        gridLayout->addLayout(verticalLayoutBasic, 0, 0, 1, 1);


        retranslateUi(MyMain);

        QMetaObject::connectSlotsByName(MyMain);
    } // setupUi

    void retranslateUi(QWidget *MyMain)
    {
        MyMain->setWindowTitle(QApplication::translate("MyMain", "Form", nullptr));
        labelDateNow->setText(QApplication::translate("MyMain", "2021-03-01", nullptr));
        labelDateEnd->setText(QApplication::translate("MyMain", "2021-12-22", nullptr));
        labelTitleTotal->setText(QApplication::translate("MyMain", "\346\200\273\345\256\214\346\210\220\346\225\260", nullptr));
        labelWordTotal->setText(QApplication::translate("MyMain", "0/5500", nullptr));
        labelTitleToday->setText(QApplication::translate("MyMain", "\344\273\212\346\227\245\347\233\256\346\240\207", nullptr));
        labelWordNew->setText(QApplication::translate("MyMain", "0/150", nullptr));
        labelWrodReview->setText(QApplication::translate("MyMain", "0/300", nullptr));
        pbReciteWord->setText(QApplication::translate("MyMain", "\345\274\200\345\247\213", nullptr));
        pbViewWord->setText(QApplication::translate("MyMain", "\346\265\217\350\247\210\345\215\225\350\257\215\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyMain: public Ui_MyMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAIN_H
