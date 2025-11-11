/********************************************************************************
** Form generated from reading UI file 'carstationinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARSTATIONINFO_H
#define UI_CARSTATIONINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_carstationinfo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *carStationNumLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QRadioButton *carStationUpRadioBtn;
    QRadioButton *carStationDownRadioBtn;
    QRadioButton *carStationLargeRadioBtn;
    QRadioButton *carStationSmallRadioBtn;
    QRadioButton *carStationEnableRadioBtn;
    QRadioButton *carStationDisableRadioBtn;
    QRadioButton *carStationWaitRentRadioBtn;
    QRadioButton *carStationRentedRadioBtn;
    QPushButton *addCarStationConfirmBtn;
    QPushButton *addCarStationReturnBtn;

    void setupUi(QWidget *carstationinfo)
    {
        if (carstationinfo->objectName().isEmpty())
            carstationinfo->setObjectName(QString::fromUtf8("carstationinfo"));
        carstationinfo->resize(400, 433);
        label = new QLabel(carstationinfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 321, 61));
        label_2 = new QLabel(carstationinfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 80, 91, 41));
        carStationNumLineEdit = new QLineEdit(carstationinfo);
        carStationNumLineEdit->setObjectName(QString::fromUtf8("carStationNumLineEdit"));
        carStationNumLineEdit->setGeometry(QRect(150, 80, 191, 41));
        label_3 = new QLabel(carstationinfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 140, 111, 41));
        label_4 = new QLabel(carstationinfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 190, 111, 41));
        label_5 = new QLabel(carstationinfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 240, 111, 41));
        label_6 = new QLabel(carstationinfo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 290, 111, 41));
        carStationUpRadioBtn = new QRadioButton(carstationinfo);
        carStationUpRadioBtn->setObjectName(QString::fromUtf8("carStationUpRadioBtn"));
        carStationUpRadioBtn->setGeometry(QRect(170, 150, 132, 22));
        carStationDownRadioBtn = new QRadioButton(carstationinfo);
        carStationDownRadioBtn->setObjectName(QString::fromUtf8("carStationDownRadioBtn"));
        carStationDownRadioBtn->setGeometry(QRect(260, 150, 132, 22));
        carStationLargeRadioBtn = new QRadioButton(carstationinfo);
        carStationLargeRadioBtn->setObjectName(QString::fromUtf8("carStationLargeRadioBtn"));
        carStationLargeRadioBtn->setGeometry(QRect(170, 200, 132, 22));
        carStationSmallRadioBtn = new QRadioButton(carstationinfo);
        carStationSmallRadioBtn->setObjectName(QString::fromUtf8("carStationSmallRadioBtn"));
        carStationSmallRadioBtn->setGeometry(QRect(260, 200, 132, 22));
        carStationEnableRadioBtn = new QRadioButton(carstationinfo);
        carStationEnableRadioBtn->setObjectName(QString::fromUtf8("carStationEnableRadioBtn"));
        carStationEnableRadioBtn->setGeometry(QRect(170, 250, 132, 22));
        carStationDisableRadioBtn = new QRadioButton(carstationinfo);
        carStationDisableRadioBtn->setObjectName(QString::fromUtf8("carStationDisableRadioBtn"));
        carStationDisableRadioBtn->setGeometry(QRect(260, 250, 132, 22));
        carStationWaitRentRadioBtn = new QRadioButton(carstationinfo);
        carStationWaitRentRadioBtn->setObjectName(QString::fromUtf8("carStationWaitRentRadioBtn"));
        carStationWaitRentRadioBtn->setGeometry(QRect(170, 300, 132, 22));
        carStationRentedRadioBtn = new QRadioButton(carstationinfo);
        carStationRentedRadioBtn->setObjectName(QString::fromUtf8("carStationRentedRadioBtn"));
        carStationRentedRadioBtn->setGeometry(QRect(260, 300, 132, 22));
        addCarStationConfirmBtn = new QPushButton(carstationinfo);
        addCarStationConfirmBtn->setObjectName(QString::fromUtf8("addCarStationConfirmBtn"));
        addCarStationConfirmBtn->setGeometry(QRect(70, 360, 112, 34));
        addCarStationReturnBtn = new QPushButton(carstationinfo);
        addCarStationReturnBtn->setObjectName(QString::fromUtf8("addCarStationReturnBtn"));
        addCarStationReturnBtn->setGeometry(QRect(220, 360, 112, 34));

        retranslateUi(carstationinfo);

        QMetaObject::connectSlotsByName(carstationinfo);
    } // setupUi

    void retranslateUi(QWidget *carstationinfo)
    {
        carstationinfo->setWindowTitle(QCoreApplication::translate("carstationinfo", "\346\267\273\345\212\240\350\275\246\344\275\215\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("carstationinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\346\231\272\346\205\247\345\260\217\345\214\272\350\275\246\344\275\215\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("carstationinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\275\246\344\275\215\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("carstationinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\275\246\344\275\215\347\261\273\345\236\213\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("carstationinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\275\246\344\275\215\345\244\247\345\260\217\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("carstationinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\203\275\345\220\246\345\205\205\347\224\265\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("carstationinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\275\246\344\275\215\347\212\266\346\200\201\357\274\232</span></p></body></html>", nullptr));
        carStationUpRadioBtn->setText(QCoreApplication::translate("carstationinfo", "\345\234\260\344\270\212", nullptr));
        carStationDownRadioBtn->setText(QCoreApplication::translate("carstationinfo", "\345\234\260\344\270\213", nullptr));
        carStationLargeRadioBtn->setText(QCoreApplication::translate("carstationinfo", "\345\244\247", nullptr));
        carStationSmallRadioBtn->setText(QCoreApplication::translate("carstationinfo", "\345\260\217", nullptr));
        carStationEnableRadioBtn->setText(QCoreApplication::translate("carstationinfo", "\350\203\275", nullptr));
        carStationDisableRadioBtn->setText(QCoreApplication::translate("carstationinfo", "\344\270\215\350\203\275", nullptr));
        carStationWaitRentRadioBtn->setText(QCoreApplication::translate("carstationinfo", "\345\276\205\347\247\237", nullptr));
        carStationRentedRadioBtn->setText(QCoreApplication::translate("carstationinfo", "\345\267\262\347\247\237", nullptr));
        addCarStationConfirmBtn->setText(QCoreApplication::translate("carstationinfo", "\346\267\273\345\212\240", nullptr));
        addCarStationReturnBtn->setText(QCoreApplication::translate("carstationinfo", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class carstationinfo: public Ui_carstationinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARSTATIONINFO_H
