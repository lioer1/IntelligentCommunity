/********************************************************************************
** Form generated from reading UI file 'applycarstation.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYCARSTATION_H
#define UI_APPLYCARSTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_applycarstation
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *nameLineEdit;
    QRadioButton *carStationUpRadioBtn;
    QRadioButton *carStationDownRadioBtn;
    QRadioButton *carStationLargeRadioBtn;
    QRadioButton *carStationSmallRadioBtn;
    QRadioButton *carStationEnableRadioBtn;
    QRadioButton *carStationDisableRadioBtn;
    QPushButton *applyCarStationConfirmBtn;
    QPushButton *applyCarStationReturnBtn;

    void setupUi(QWidget *applycarstation)
    {
        if (applycarstation->objectName().isEmpty())
            applycarstation->setObjectName(QString::fromUtf8("applycarstation"));
        applycarstation->resize(400, 338);
        label = new QLabel(applycarstation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 361, 61));
        label_2 = new QLabel(applycarstation);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 90, 81, 31));
        label_4 = new QLabel(applycarstation);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 150, 111, 31));
        label_5 = new QLabel(applycarstation);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 190, 111, 31));
        label_6 = new QLabel(applycarstation);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 230, 111, 31));
        nameLineEdit = new QLineEdit(applycarstation);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(150, 90, 171, 31));
        carStationUpRadioBtn = new QRadioButton(applycarstation);
        carStationUpRadioBtn->setObjectName(QString::fromUtf8("carStationUpRadioBtn"));
        carStationUpRadioBtn->setGeometry(QRect(150, 160, 132, 22));
        carStationDownRadioBtn = new QRadioButton(applycarstation);
        carStationDownRadioBtn->setObjectName(QString::fromUtf8("carStationDownRadioBtn"));
        carStationDownRadioBtn->setGeometry(QRect(250, 160, 132, 22));
        carStationLargeRadioBtn = new QRadioButton(applycarstation);
        carStationLargeRadioBtn->setObjectName(QString::fromUtf8("carStationLargeRadioBtn"));
        carStationLargeRadioBtn->setGeometry(QRect(150, 200, 132, 22));
        carStationSmallRadioBtn = new QRadioButton(applycarstation);
        carStationSmallRadioBtn->setObjectName(QString::fromUtf8("carStationSmallRadioBtn"));
        carStationSmallRadioBtn->setGeometry(QRect(250, 200, 132, 22));
        carStationEnableRadioBtn = new QRadioButton(applycarstation);
        carStationEnableRadioBtn->setObjectName(QString::fromUtf8("carStationEnableRadioBtn"));
        carStationEnableRadioBtn->setGeometry(QRect(150, 240, 132, 22));
        carStationDisableRadioBtn = new QRadioButton(applycarstation);
        carStationDisableRadioBtn->setObjectName(QString::fromUtf8("carStationDisableRadioBtn"));
        carStationDisableRadioBtn->setGeometry(QRect(250, 240, 132, 22));
        applyCarStationConfirmBtn = new QPushButton(applycarstation);
        applyCarStationConfirmBtn->setObjectName(QString::fromUtf8("applyCarStationConfirmBtn"));
        applyCarStationConfirmBtn->setGeometry(QRect(40, 280, 112, 34));
        applyCarStationReturnBtn = new QPushButton(applycarstation);
        applyCarStationReturnBtn->setObjectName(QString::fromUtf8("applyCarStationReturnBtn"));
        applyCarStationReturnBtn->setGeometry(QRect(220, 280, 112, 34));

        retranslateUi(applycarstation);

        QMetaObject::connectSlotsByName(applycarstation);
    } // setupUi

    void retranslateUi(QWidget *applycarstation)
    {
        applycarstation->setWindowTitle(QCoreApplication::translate("applycarstation", "\347\224\263\350\257\267\350\275\246\344\275\215", nullptr));
        label->setText(QCoreApplication::translate("applycarstation", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\346\231\272\346\205\247\345\260\217\345\214\272\347\211\251\344\270\232\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("applycarstation", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\247\223 \345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("applycarstation", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\275\246\344\275\215\347\261\273\345\236\213\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("applycarstation", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\275\246\344\275\215\345\244\247\345\260\217\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("applycarstation", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\203\275\345\220\246\345\205\205\347\224\265\357\274\232</span></p></body></html>", nullptr));
        carStationUpRadioBtn->setText(QCoreApplication::translate("applycarstation", "\345\234\260\344\270\212", nullptr));
        carStationDownRadioBtn->setText(QCoreApplication::translate("applycarstation", "\345\234\260\344\270\213", nullptr));
        carStationLargeRadioBtn->setText(QCoreApplication::translate("applycarstation", "\345\244\247", nullptr));
        carStationSmallRadioBtn->setText(QCoreApplication::translate("applycarstation", "\345\260\217", nullptr));
        carStationEnableRadioBtn->setText(QCoreApplication::translate("applycarstation", "\350\203\275", nullptr));
        carStationDisableRadioBtn->setText(QCoreApplication::translate("applycarstation", "\344\270\215\350\203\275", nullptr));
        applyCarStationConfirmBtn->setText(QCoreApplication::translate("applycarstation", "\347\224\263\350\257\267", nullptr));
        applyCarStationReturnBtn->setText(QCoreApplication::translate("applycarstation", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class applycarstation: public Ui_applycarstation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYCARSTATION_H
