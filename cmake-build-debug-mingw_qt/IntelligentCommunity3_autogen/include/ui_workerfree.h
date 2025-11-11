/********************************************************************************
** Form generated from reading UI file 'workerfree.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKERFREE_H
#define UI_WORKERFREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workerfree
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *workerNameLineEdit;
    QRadioButton *attendRadioButton;
    QRadioButton *freeRadioButton;
    QLineEdit *freeTimeLineEdit;
    QLineEdit *freeTextLineEdit;
    QPushButton *workerFreeBtn;
    QPushButton *workerFreeReturnBtn;

    void setupUi(QWidget *workerfree)
    {
        if (workerfree->objectName().isEmpty())
            workerfree->setObjectName(QString::fromUtf8("workerfree"));
        workerfree->resize(400, 355);
        label = new QLabel(workerfree);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 0, 351, 71));
        label_2 = new QLabel(workerfree);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 80, 121, 41));
        label_3 = new QLabel(workerfree);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 130, 121, 41));
        label_4 = new QLabel(workerfree);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 180, 121, 41));
        label_5 = new QLabel(workerfree);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 230, 121, 41));
        workerNameLineEdit = new QLineEdit(workerfree);
        workerNameLineEdit->setObjectName(QString::fromUtf8("workerNameLineEdit"));
        workerNameLineEdit->setGeometry(QRect(160, 90, 171, 31));
        attendRadioButton = new QRadioButton(workerfree);
        attendRadioButton->setObjectName(QString::fromUtf8("attendRadioButton"));
        attendRadioButton->setGeometry(QRect(180, 140, 132, 22));
        freeRadioButton = new QRadioButton(workerfree);
        freeRadioButton->setObjectName(QString::fromUtf8("freeRadioButton"));
        freeRadioButton->setGeometry(QRect(260, 140, 132, 22));
        freeTimeLineEdit = new QLineEdit(workerfree);
        freeTimeLineEdit->setObjectName(QString::fromUtf8("freeTimeLineEdit"));
        freeTimeLineEdit->setGeometry(QRect(160, 180, 171, 31));
        freeTextLineEdit = new QLineEdit(workerfree);
        freeTextLineEdit->setObjectName(QString::fromUtf8("freeTextLineEdit"));
        freeTextLineEdit->setGeometry(QRect(160, 230, 171, 31));
        workerFreeBtn = new QPushButton(workerfree);
        workerFreeBtn->setObjectName(QString::fromUtf8("workerFreeBtn"));
        workerFreeBtn->setGeometry(QRect(60, 290, 112, 34));
        workerFreeReturnBtn = new QPushButton(workerfree);
        workerFreeReturnBtn->setObjectName(QString::fromUtf8("workerFreeReturnBtn"));
        workerFreeReturnBtn->setGeometry(QRect(220, 290, 112, 34));

        retranslateUi(workerfree);

        QMetaObject::connectSlotsByName(workerfree);
    } // setupUi

    void retranslateUi(QWidget *workerfree)
    {
        workerfree->setWindowTitle(QCoreApplication::translate("workerfree", "\345\207\272\345\213\244/\350\257\267\345\201\207", nullptr));
        label->setText(QCoreApplication::translate("workerfree", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\346\231\272\346\205\247\345\260\217\345\214\272\345\221\230\345\267\245\345\207\272\345\213\244/\350\257\267\345\201\207</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("workerfree", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\221\230\345\267\245\345\247\223\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("workerfree", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\207\272\345\213\244\347\212\266\346\200\201\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("workerfree", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\275\223\345\211\215\346\227\266\351\227\264\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("workerfree", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\345\201\207\344\272\213\347\224\261\357\274\232</span></p></body></html>", nullptr));
        attendRadioButton->setText(QCoreApplication::translate("workerfree", "\345\207\272\345\213\244", nullptr));
        freeRadioButton->setText(QCoreApplication::translate("workerfree", "\350\257\267\345\201\207", nullptr));
        workerFreeBtn->setText(QCoreApplication::translate("workerfree", "\346\217\220\344\272\244", nullptr));
        workerFreeReturnBtn->setText(QCoreApplication::translate("workerfree", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workerfree: public Ui_workerfree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKERFREE_H
