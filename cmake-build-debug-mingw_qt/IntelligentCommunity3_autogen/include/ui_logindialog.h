/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logindialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *userLine;
    QLineEdit *passwordLine;
    QRadioButton *managerRadio;
    QRadioButton *workerRadio;
    QRadioButton *ownerRadio;
    QPushButton *loginBtn;
    QPushButton *exitBtn;

    void setupUi(QWidget *logindialog)
    {
        if (logindialog->objectName().isEmpty())
            logindialog->setObjectName(QString::fromUtf8("logindialog"));
        logindialog->resize(400, 300);
        label = new QLabel(logindialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 331, 61));
        label_2 = new QLabel(logindialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 70, 71, 31));
        label_3 = new QLabel(logindialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 110, 71, 31));
        userLine = new QLineEdit(logindialog);
        userLine->setObjectName(QString::fromUtf8("userLine"));
        userLine->setGeometry(QRect(150, 70, 171, 31));
        passwordLine = new QLineEdit(logindialog);
        passwordLine->setObjectName(QString::fromUtf8("passwordLine"));
        passwordLine->setGeometry(QRect(150, 110, 171, 31));
        managerRadio = new QRadioButton(logindialog);
        managerRadio->setObjectName(QString::fromUtf8("managerRadio"));
        managerRadio->setGeometry(QRect(60, 170, 132, 22));
        workerRadio = new QRadioButton(logindialog);
        workerRadio->setObjectName(QString::fromUtf8("workerRadio"));
        workerRadio->setGeometry(QRect(170, 170, 132, 22));
        ownerRadio = new QRadioButton(logindialog);
        ownerRadio->setObjectName(QString::fromUtf8("ownerRadio"));
        ownerRadio->setGeometry(QRect(310, 170, 132, 22));
        loginBtn = new QPushButton(logindialog);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(80, 230, 112, 34));
        exitBtn = new QPushButton(logindialog);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(230, 230, 112, 34));

        retranslateUi(logindialog);

        QMetaObject::connectSlotsByName(logindialog);
    } // setupUi

    void retranslateUi(QWidget *logindialog)
    {
        logindialog->setWindowTitle(QCoreApplication::translate("logindialog", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("logindialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\346\231\272\346\205\247\345\260\217\345\214\272\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("logindialog", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\264\246\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("logindialog", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        managerRadio->setText(QCoreApplication::translate("logindialog", "\347\256\241\347\220\206\345\221\230", nullptr));
        workerRadio->setText(QCoreApplication::translate("logindialog", "\345\267\245\344\275\234\344\272\272\345\221\230", nullptr));
        ownerRadio->setText(QCoreApplication::translate("logindialog", "\344\270\232\344\270\273", nullptr));
        loginBtn->setText(QCoreApplication::translate("logindialog", "\347\231\273\345\275\225", nullptr));
        exitBtn->setText(QCoreApplication::translate("logindialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logindialog: public Ui_logindialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
