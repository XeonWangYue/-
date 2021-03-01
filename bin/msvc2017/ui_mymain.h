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
    QVBoxLayout *verticalLayoutBasic_2;
    QHBoxLayout *horizontalLayoutRowStatus_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelDateNow_2;
    QLabel *labelDateEnd_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelTitleTotal_2;
    QLabel *labelWordTotal_2;
    QLabel *labelTitleToday_2;
    QLabel *labelWordNew_2;
    QLabel *labelWrodReview_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbReciteWord_2;
    QPushButton *pbViewWord_2;

    void setupUi(QWidget *MyMain)
    {
        if (MyMain->objectName().isEmpty())
            MyMain->setObjectName(QString::fromUtf8("MyMain"));
        MyMain->resize(800, 621);
        gridLayout = new QGridLayout(MyMain);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayoutBasic_2 = new QVBoxLayout();
        verticalLayoutBasic_2->setSpacing(10);
        verticalLayoutBasic_2->setObjectName(QString::fromUtf8("verticalLayoutBasic_2"));
        verticalLayoutBasic_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayoutBasic_2->setContentsMargins(10, 10, 10, 10);
        horizontalLayoutRowStatus_2 = new QHBoxLayout();
        horizontalLayoutRowStatus_2->setObjectName(QString::fromUtf8("horizontalLayoutRowStatus_2"));
        horizontalLayoutRowStatus_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelDateNow_2 = new QLabel(MyMain);
        labelDateNow_2->setObjectName(QString::fromUtf8("labelDateNow_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(24);
        labelDateNow_2->setFont(font);
        labelDateNow_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelDateNow_2);

        labelDateEnd_2 = new QLabel(MyMain);
        labelDateEnd_2->setObjectName(QString::fromUtf8("labelDateEnd_2"));
        labelDateEnd_2->setFont(font);
        labelDateEnd_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelDateEnd_2);


        horizontalLayoutRowStatus_2->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        labelTitleTotal_2 = new QLabel(MyMain);
        labelTitleTotal_2->setObjectName(QString::fromUtf8("labelTitleTotal_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        labelTitleTotal_2->setFont(font1);

        verticalLayout_5->addWidget(labelTitleTotal_2);

        labelWordTotal_2 = new QLabel(MyMain);
        labelWordTotal_2->setObjectName(QString::fromUtf8("labelWordTotal_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        labelWordTotal_2->setFont(font2);
        labelWordTotal_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelWordTotal_2);

        labelTitleToday_2 = new QLabel(MyMain);
        labelTitleToday_2->setObjectName(QString::fromUtf8("labelTitleToday_2"));
        labelTitleToday_2->setFont(font1);

        verticalLayout_5->addWidget(labelTitleToday_2);

        labelWordNew_2 = new QLabel(MyMain);
        labelWordNew_2->setObjectName(QString::fromUtf8("labelWordNew_2"));
        labelWordNew_2->setFont(font2);
        labelWordNew_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelWordNew_2);

        labelWrodReview_2 = new QLabel(MyMain);
        labelWrodReview_2->setObjectName(QString::fromUtf8("labelWrodReview_2"));
        labelWrodReview_2->setFont(font2);
        labelWrodReview_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelWrodReview_2);


        horizontalLayoutRowStatus_2->addLayout(verticalLayout_5);

        horizontalLayoutRowStatus_2->setStretch(0, 1);
        horizontalLayoutRowStatus_2->setStretch(1, 1);

        verticalLayoutBasic_2->addLayout(horizontalLayoutRowStatus_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        pbReciteWord_2 = new QPushButton(MyMain);
        pbReciteWord_2->setObjectName(QString::fromUtf8("pbReciteWord_2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbReciteWord_2->sizePolicy().hasHeightForWidth());
        pbReciteWord_2->setSizePolicy(sizePolicy);
        pbReciteWord_2->setMinimumSize(QSize(200, 200));

        horizontalLayout_2->addWidget(pbReciteWord_2);

        pbViewWord_2 = new QPushButton(MyMain);
        pbViewWord_2->setObjectName(QString::fromUtf8("pbViewWord_2"));
        sizePolicy.setHeightForWidth(pbViewWord_2->sizePolicy().hasHeightForWidth());
        pbViewWord_2->setSizePolicy(sizePolicy);
        pbViewWord_2->setMinimumSize(QSize(200, 200));

        horizontalLayout_2->addWidget(pbViewWord_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout_2);


        verticalLayoutBasic_2->addLayout(verticalLayout_6);


        gridLayout->addLayout(verticalLayoutBasic_2, 0, 0, 1, 1);


        retranslateUi(MyMain);

        QMetaObject::connectSlotsByName(MyMain);
    } // setupUi

    void retranslateUi(QWidget *MyMain)
    {
        MyMain->setWindowTitle(QApplication::translate("MyMain", "Form", nullptr));
        labelDateNow_2->setText(QApplication::translate("MyMain", "2021-03-01", nullptr));
        labelDateEnd_2->setText(QApplication::translate("MyMain", "2021-12-22", nullptr));
        labelTitleTotal_2->setText(QApplication::translate("MyMain", "\346\200\273\345\256\214\346\210\220\346\225\260", nullptr));
        labelWordTotal_2->setText(QApplication::translate("MyMain", "0/5500", nullptr));
        labelTitleToday_2->setText(QApplication::translate("MyMain", "\344\273\212\346\227\245\347\233\256\346\240\207", nullptr));
        labelWordNew_2->setText(QApplication::translate("MyMain", "0/150", nullptr));
        labelWrodReview_2->setText(QApplication::translate("MyMain", "0/300", nullptr));
        pbReciteWord_2->setText(QApplication::translate("MyMain", "\345\274\200\345\247\213", nullptr));
        pbViewWord_2->setText(QApplication::translate("MyMain", "\346\265\217\350\247\210\345\215\225\350\257\215\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyMain: public Ui_MyMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAIN_H
