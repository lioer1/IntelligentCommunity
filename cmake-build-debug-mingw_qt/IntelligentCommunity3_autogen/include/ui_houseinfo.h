/********************************************************************************
** Form generated from reading UI file 'houseinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOUSEINFO_H
#define UI_HOUSEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_houseinfo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *houseOwnerLineEdit;
    QLineEdit *houseAddressLineEdit;
    QLineEdit *houseTypeLineEdit;
    QLineEdit *houseAreaLineEdit;
    QPushButton *houseInfoConfirmBtn;
    QPushButton *houseInfoReturnBtn;

    void setupUi(QWidget *houseinfo)
    {
        if (houseinfo->objectName().isEmpty())
            houseinfo->setObjectName(QString::fromUtf8("houseinfo"));
        houseinfo->resize(400, 380);
        label = new QLabel(houseinfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 371, 41));
        label_2 = new QLabel(houseinfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 90, 81, 31));
        label_3 = new QLabel(houseinfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 140, 81, 31));
        label_4 = new QLabel(houseinfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 190, 81, 31));
        label_5 = new QLabel(houseinfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 230, 81, 31));
        houseOwnerLineEdit = new QLineEdit(houseinfo);
        houseOwnerLineEdit->setObjectName(QString::fromUtf8("houseOwnerLineEdit"));
        houseOwnerLineEdit->setGeometry(QRect(140, 90, 191, 31));
        houseAddressLineEdit = new QLineEdit(houseinfo);
        houseAddressLineEdit->setObjectName(QString::fromUtf8("houseAddressLineEdit"));
        houseAddressLineEdit->setGeometry(QRect(140, 140, 191, 31));
        houseTypeLineEdit = new QLineEdit(houseinfo);
        houseTypeLineEdit->setObjectName(QString::fromUtf8("houseTypeLineEdit"));
        houseTypeLineEdit->setGeometry(QRect(140, 190, 191, 31));
        houseAreaLineEdit = new QLineEdit(houseinfo);
        houseAreaLineEdit->setObjectName(QString::fromUtf8("houseAreaLineEdit"));
        houseAreaLineEdit->setGeometry(QRect(140, 230, 191, 31));
        houseInfoConfirmBtn = new QPushButton(houseinfo);
        houseInfoConfirmBtn->setObjectName(QString::fromUtf8("houseInfoConfirmBtn"));
        houseInfoConfirmBtn->setGeometry(QRect(40, 300, 112, 34));
        houseInfoReturnBtn = new QPushButton(houseinfo);
        houseInfoReturnBtn->setObjectName(QString::fromUtf8("houseInfoReturnBtn"));
        houseInfoReturnBtn->setGeometry(QRect(230, 300, 112, 34));

        retranslateUi(houseinfo);

        QMetaObject::connectSlotsByName(houseinfo);
    } // setupUi

    void retranslateUi(QWidget *houseinfo)
    {
        houseinfo->setWindowTitle(QCoreApplication::translate("houseinfo", "\346\267\273\345\212\240\346\210\277\345\261\213\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("houseinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\346\231\272\346\205\247\345\260\217\345\214\272\344\270\232\344\270\273\346\210\277\345\261\213\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("houseinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("houseinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\234\260\345\235\200\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("houseinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\210\267\345\236\213\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("houseinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\351\235\242\347\247\257\357\274\232</span></p></body></html>", nullptr));
        houseInfoConfirmBtn->setText(QCoreApplication::translate("houseinfo", "\347\241\256\345\256\232", nullptr));
        houseInfoReturnBtn->setText(QCoreApplication::translate("houseinfo", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class houseinfo: public Ui_houseinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOUSEINFO_H
