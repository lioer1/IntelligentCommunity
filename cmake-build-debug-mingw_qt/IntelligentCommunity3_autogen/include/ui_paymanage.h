/********************************************************************************
** Form generated from reading UI file 'paymanage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMANAGE_H
#define UI_PAYMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paymanage
{
public:
    QTableView *payTableView;
    QLabel *label;
    QLineEdit *ownerNameLineEdit;
    QLabel *label_2;
    QRadioButton *payedRadioButton;
    QRadioButton *payRadioButton;
    QPushButton *squreBtn;
    QPushButton *pushButton;

    void setupUi(QWidget *paymanage)
    {
        if (paymanage->objectName().isEmpty())
            paymanage->setObjectName(QString::fromUtf8("paymanage"));
        paymanage->resize(675, 478);
        payTableView = new QTableView(paymanage);
        payTableView->setObjectName(QString::fromUtf8("payTableView"));
        payTableView->setGeometry(QRect(10, 20, 401, 441));
        label = new QLabel(paymanage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 30, 81, 18));
        ownerNameLineEdit = new QLineEdit(paymanage);
        ownerNameLineEdit->setObjectName(QString::fromUtf8("ownerNameLineEdit"));
        ownerNameLineEdit->setGeometry(QRect(480, 20, 141, 31));
        label_2 = new QLabel(paymanage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 80, 81, 18));
        payedRadioButton = new QRadioButton(paymanage);
        payedRadioButton->setObjectName(QString::fromUtf8("payedRadioButton"));
        payedRadioButton->setGeometry(QRect(430, 120, 132, 22));
        payRadioButton = new QRadioButton(paymanage);
        payRadioButton->setObjectName(QString::fromUtf8("payRadioButton"));
        payRadioButton->setGeometry(QRect(550, 120, 132, 22));
        squreBtn = new QPushButton(paymanage);
        squreBtn->setObjectName(QString::fromUtf8("squreBtn"));
        squreBtn->setGeometry(QRect(480, 170, 112, 34));
        pushButton = new QPushButton(paymanage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 410, 112, 34));

        retranslateUi(paymanage);

        QMetaObject::connectSlotsByName(paymanage);
    } // setupUi

    void retranslateUi(QWidget *paymanage)
    {
        paymanage->setWindowTitle(QCoreApplication::translate("paymanage", "\346\231\272\346\205\247\345\260\217\345\214\272\347\274\264\350\264\271\347\256\241\347\220\206", nullptr));
        label->setText(QCoreApplication::translate("paymanage", "\344\270\232\344\270\273\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("paymanage", "\347\274\264\350\264\271\344\277\241\346\201\257\357\274\232", nullptr));
        payedRadioButton->setText(QCoreApplication::translate("paymanage", "\350\275\246\344\275\215\347\247\237\351\207\221", nullptr));
        payRadioButton->setText(QCoreApplication::translate("paymanage", "\347\211\251\344\270\232\350\264\271", nullptr));
        squreBtn->setText(QCoreApplication::translate("paymanage", "\346\237\245\350\257\242", nullptr));
        pushButton->setText(QCoreApplication::translate("paymanage", "\347\274\264\350\264\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paymanage: public Ui_paymanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMANAGE_H
