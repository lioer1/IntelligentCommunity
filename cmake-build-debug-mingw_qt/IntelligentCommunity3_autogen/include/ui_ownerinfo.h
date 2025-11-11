/********************************************************************************
** Form generated from reading UI file 'ownerinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNERINFO_H
#define UI_OWNERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ownerinfo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *ownerNameLineEdit;
    QLineEdit *ownerPassLineEdit;
    QLineEdit *ownerPhoneLineEdit;
    QLineEdit *ownerAddressLineEdit;
    QPushButton *ownerInfoConfirmBtn;
    QPushButton *ownerInfoReturnBtn;

    void setupUi(QWidget *ownerinfo)
    {
        if (ownerinfo->objectName().isEmpty())
            ownerinfo->setObjectName(QString::fromUtf8("ownerinfo"));
        ownerinfo->resize(400, 398);
        label = new QLabel(ownerinfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 331, 61));
        label_2 = new QLabel(ownerinfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 80, 81, 41));
        label_3 = new QLabel(ownerinfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 140, 81, 41));
        label_4 = new QLabel(ownerinfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 200, 81, 41));
        label_5 = new QLabel(ownerinfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 260, 81, 41));
        ownerNameLineEdit = new QLineEdit(ownerinfo);
        ownerNameLineEdit->setObjectName(QString::fromUtf8("ownerNameLineEdit"));
        ownerNameLineEdit->setGeometry(QRect(130, 80, 201, 41));
        ownerPassLineEdit = new QLineEdit(ownerinfo);
        ownerPassLineEdit->setObjectName(QString::fromUtf8("ownerPassLineEdit"));
        ownerPassLineEdit->setGeometry(QRect(130, 140, 201, 41));
        ownerPhoneLineEdit = new QLineEdit(ownerinfo);
        ownerPhoneLineEdit->setObjectName(QString::fromUtf8("ownerPhoneLineEdit"));
        ownerPhoneLineEdit->setGeometry(QRect(130, 200, 201, 41));
        ownerAddressLineEdit = new QLineEdit(ownerinfo);
        ownerAddressLineEdit->setObjectName(QString::fromUtf8("ownerAddressLineEdit"));
        ownerAddressLineEdit->setGeometry(QRect(130, 260, 201, 41));
        ownerInfoConfirmBtn = new QPushButton(ownerinfo);
        ownerInfoConfirmBtn->setObjectName(QString::fromUtf8("ownerInfoConfirmBtn"));
        ownerInfoConfirmBtn->setGeometry(QRect(40, 330, 112, 34));
        ownerInfoReturnBtn = new QPushButton(ownerinfo);
        ownerInfoReturnBtn->setObjectName(QString::fromUtf8("ownerInfoReturnBtn"));
        ownerInfoReturnBtn->setGeometry(QRect(220, 330, 112, 34));

        retranslateUi(ownerinfo);

        QMetaObject::connectSlotsByName(ownerinfo);
    } // setupUi

    void retranslateUi(QWidget *ownerinfo)
    {
        ownerinfo->setWindowTitle(QCoreApplication::translate("ownerinfo", "\346\267\273\345\212\240\344\270\232\344\270\273\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("ownerinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\346\231\272\346\205\247\345\260\217\345\214\272\344\270\232\344\270\273\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("ownerinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("ownerinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("ownerinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\224\265\350\257\235\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("ownerinfo", "<html><head/><body><p><span style=\" font-size:12pt;\">\344\275\217\345\235\200\357\274\232</span></p></body></html>", nullptr));
        ownerInfoConfirmBtn->setText(QCoreApplication::translate("ownerinfo", "\347\241\256\345\256\232", nullptr));
        ownerInfoReturnBtn->setText(QCoreApplication::translate("ownerinfo", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ownerinfo: public Ui_ownerinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNERINFO_H
