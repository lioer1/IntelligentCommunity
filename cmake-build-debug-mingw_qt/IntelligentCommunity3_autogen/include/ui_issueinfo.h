/********************************************************************************
** Form generated from reading UI file 'issueinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSUEINFO_H
#define UI_ISSUEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_issueinfo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *issueReporterLineEdit;
    QLabel *label_3;
    QTextEdit *issueReportMessTextEdit;
    QPushButton *issueConfirmBtn;
    QPushButton *issueReturnBtn;

    void setupUi(QWidget *issueinfo)
    {
        if (issueinfo->objectName().isEmpty())
            issueinfo->setObjectName(QString::fromUtf8("issueinfo"));
        issueinfo->resize(400, 385);
        label = new QLabel(issueinfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 371, 51));
        label_2 = new QLabel(issueinfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 91, 31));
        issueReporterLineEdit = new QLineEdit(issueinfo);
        issueReporterLineEdit->setObjectName(QString::fromUtf8("issueReporterLineEdit"));
        issueReporterLineEdit->setGeometry(QRect(120, 70, 211, 31));
        label_3 = new QLabel(issueinfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 120, 111, 31));
        issueReportMessTextEdit = new QTextEdit(issueinfo);
        issueReportMessTextEdit->setObjectName(QString::fromUtf8("issueReportMessTextEdit"));
        issueReportMessTextEdit->setGeometry(QRect(40, 160, 321, 151));
        issueConfirmBtn = new QPushButton(issueinfo);
        issueConfirmBtn->setObjectName(QString::fromUtf8("issueConfirmBtn"));
        issueConfirmBtn->setGeometry(QRect(60, 330, 112, 34));
        issueReturnBtn = new QPushButton(issueinfo);
        issueReturnBtn->setObjectName(QString::fromUtf8("issueReturnBtn"));
        issueReturnBtn->setGeometry(QRect(230, 330, 112, 34));

        retranslateUi(issueinfo);

        QMetaObject::connectSlotsByName(issueinfo);
    } // setupUi

    void retranslateUi(QWidget *issueinfo)
    {
        issueinfo->setWindowTitle(QCoreApplication::translate("issueinfo", "\346\225\205\351\232\234\346\212\245\344\277\256", nullptr));
        label->setText(QCoreApplication::translate("issueinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\346\231\272\346\205\247\345\260\217\345\214\272\344\270\232\344\270\273\346\225\205\351\232\234\346\212\245\344\277\256</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("issueinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\212\245\344\277\256\344\272\272\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("issueinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\225\205\351\232\234\346\217\217\350\277\260\357\274\232</span></p></body></html>", nullptr));
        issueConfirmBtn->setText(QCoreApplication::translate("issueinfo", "\346\217\220\344\272\244", nullptr));
        issueReturnBtn->setText(QCoreApplication::translate("issueinfo", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class issueinfo: public Ui_issueinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSUEINFO_H
