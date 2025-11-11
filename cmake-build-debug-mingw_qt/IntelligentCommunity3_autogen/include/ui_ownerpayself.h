/********************************************************************************
** Form generated from reading UI file 'ownerpayself.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNERPAYSELF_H
#define UI_OWNERPAYSELF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ownerpayself
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ownerpayself)
    {
        if (ownerpayself->objectName().isEmpty())
            ownerpayself->setObjectName(QString::fromUtf8("ownerpayself"));
        ownerpayself->resize(400, 300);
        comboBox = new QComboBox(ownerpayself);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(60, 30, 281, 31));
        comboBox->setEditable(false);
        label = new QLabel(ownerpayself);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 90, 81, 18));
        label_2 = new QLabel(ownerpayself);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 130, 81, 18));
        lineEdit_2 = new QLineEdit(ownerpayself);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 80, 191, 31));
        lineEdit = new QLineEdit(ownerpayself);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 120, 191, 31));
        pushButton = new QPushButton(ownerpayself);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 210, 112, 34));
        pushButton_2 = new QPushButton(ownerpayself);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 210, 112, 34));

        retranslateUi(ownerpayself);

        QMetaObject::connectSlotsByName(ownerpayself);
    } // setupUi

    void retranslateUi(QWidget *ownerpayself)
    {
        ownerpayself->setWindowTitle(QCoreApplication::translate("ownerpayself", "Form", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ownerpayself", "\350\275\246\344\275\215\347\247\237\351\207\221", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ownerpayself", "\347\211\251\344\270\232\350\264\271", nullptr));

        comboBox->setCurrentText(QCoreApplication::translate("ownerpayself", "\350\275\246\344\275\215\347\247\237\351\207\221", nullptr));
        label->setText(QCoreApplication::translate("ownerpayself", "\344\270\232\344\270\273\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("ownerpayself", "\347\274\264\350\264\271\351\207\221\351\242\235\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("ownerpayself", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ownerpayself", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ownerpayself: public Ui_ownerpayself {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNERPAYSELF_H
