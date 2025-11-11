/********************************************************************************
** Form generated from reading UI file 'pricemanage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRICEMANAGE_H
#define UI_PRICEMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pricemanage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *pmFreeLineEdit;
    QLineEdit *carStationFreeLineEdit;
    QLineEdit *repareFreeLineEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *priceConfirmBtn;
    QPushButton *priceReturnBtn;

    void setupUi(QWidget *pricemanage)
    {
        if (pricemanage->objectName().isEmpty())
            pricemanage->setObjectName(QString::fromUtf8("pricemanage"));
        pricemanage->resize(400, 319);
        label = new QLabel(pricemanage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 321, 61));
        label_2 = new QLabel(pricemanage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 90, 91, 31));
        label_3 = new QLabel(pricemanage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 140, 91, 31));
        label_4 = new QLabel(pricemanage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 190, 91, 31));
        pmFreeLineEdit = new QLineEdit(pricemanage);
        pmFreeLineEdit->setObjectName(QString::fromUtf8("pmFreeLineEdit"));
        pmFreeLineEdit->setGeometry(QRect(140, 90, 141, 31));
        carStationFreeLineEdit = new QLineEdit(pricemanage);
        carStationFreeLineEdit->setObjectName(QString::fromUtf8("carStationFreeLineEdit"));
        carStationFreeLineEdit->setGeometry(QRect(140, 140, 141, 31));
        repareFreeLineEdit = new QLineEdit(pricemanage);
        repareFreeLineEdit->setObjectName(QString::fromUtf8("repareFreeLineEdit"));
        repareFreeLineEdit->setGeometry(QRect(140, 190, 141, 31));
        label_5 = new QLabel(pricemanage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(290, 90, 91, 31));
        label_6 = new QLabel(pricemanage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 140, 91, 31));
        label_7 = new QLabel(pricemanage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 190, 91, 31));
        priceConfirmBtn = new QPushButton(pricemanage);
        priceConfirmBtn->setObjectName(QString::fromUtf8("priceConfirmBtn"));
        priceConfirmBtn->setGeometry(QRect(70, 250, 112, 34));
        priceReturnBtn = new QPushButton(pricemanage);
        priceReturnBtn->setObjectName(QString::fromUtf8("priceReturnBtn"));
        priceReturnBtn->setGeometry(QRect(210, 250, 112, 34));

        retranslateUi(pricemanage);

        QMetaObject::connectSlotsByName(pricemanage);
    } // setupUi

    void retranslateUi(QWidget *pricemanage)
    {
        pricemanage->setWindowTitle(QCoreApplication::translate("pricemanage", "\346\224\266\350\264\271\344\273\267\346\240\274\347\256\241\347\220\206", nullptr));
        label->setText(QCoreApplication::translate("pricemanage", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\346\231\272\346\205\247\345\260\217\345\214\272\350\264\271\347\224\250\347\256\241\347\220\206</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("pricemanage", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\211\251\344\270\232\350\264\271\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("pricemanage", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\275\246\344\275\215\350\264\271\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("pricemanage", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\273\264\344\277\256\350\264\271\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("pricemanage", "<html><head/><body><p>\345\205\203/\346\257\217\345\271\263\346\226\271</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("pricemanage", "<html><head/><body><p>\345\205\203/\344\270\252</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("pricemanage", "<html><head/><body><p>\345\205\203/\351\241\271</p></body></html>", nullptr));
        priceConfirmBtn->setText(QCoreApplication::translate("pricemanage", "\347\241\256\345\256\232", nullptr));
        priceReturnBtn->setText(QCoreApplication::translate("pricemanage", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pricemanage: public Ui_pricemanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRICEMANAGE_H
