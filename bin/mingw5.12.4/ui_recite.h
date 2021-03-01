/********************************************************************************
** Form generated from reading UI file 'recite.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECITE_H
#define UI_RECITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recite
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbEz;
    QPushButton *pbForget;
    QPushButton *pbKnow;

    void setupUi(QWidget *Recite)
    {
        if (Recite->objectName().isEmpty())
            Recite->setObjectName(QString::fromUtf8("Recite"));
        Recite->resize(800, 621);
        Recite->setMinimumSize(QSize(0, 0));
        Recite->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(Recite);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(Recite);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        label = new QLabel(Recite);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(40, 20, 40, 20);
        label_2 = new QLabel(Recite);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbEz = new QPushButton(Recite);
        pbEz->setObjectName(QString::fromUtf8("pbEz"));
        pbEz->setMinimumSize(QSize(0, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        pbEz->setFont(font2);

        horizontalLayout->addWidget(pbEz);

        pbForget = new QPushButton(Recite);
        pbForget->setObjectName(QString::fromUtf8("pbForget"));
        pbForget->setMinimumSize(QSize(0, 40));
        pbForget->setFont(font2);

        horizontalLayout->addWidget(pbForget);

        pbKnow = new QPushButton(Recite);
        pbKnow->setObjectName(QString::fromUtf8("pbKnow"));
        pbKnow->setMinimumSize(QSize(0, 40));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        pbKnow->setFont(font3);

        horizontalLayout->addWidget(pbKnow);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 6);
        verticalLayout->setStretch(3, 2);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Recite);

        QMetaObject::connectSlotsByName(Recite);
    } // setupUi

    void retranslateUi(QWidget *Recite)
    {
        Recite->setWindowTitle(QApplication::translate("Recite", "Form", nullptr));
        pushButton->setText(QApplication::translate("Recite", "PushButton", nullptr));
        label->setText(QApplication::translate("Recite", "abandon", nullptr));
        label_2->setText(QApplication::translate("Recite", "TextLabeldfasd\n"
"dfas\n"
"dfasd\n"
"fasd\n"
"fa\n"
"sdf\n"
"sd\n"
"fvt.\347\246\273\345\274\203\357\274\214\344\270\242\345\274\203;\351\201\227\345\274\203\357\274\214\346\212\233\345\274\203;\346\224\276\345\274\203", nullptr));
        pbEz->setText(QApplication::translate("Recite", "\345\244\252\347\256\200\345\215\225\344\272\206", nullptr));
        pbForget->setText(QApplication::translate("Recite", "\344\270\215\347\237\245\351\201\223", nullptr));
        pbKnow->setText(QApplication::translate("Recite", "\347\237\245\351\201\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recite: public Ui_Recite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECITE_H
