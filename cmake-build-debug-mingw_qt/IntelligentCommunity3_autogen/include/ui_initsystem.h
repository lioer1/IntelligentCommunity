/********************************************************************************
** Form generated from reading UI file 'initsystem.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITSYSTEM_H
#define UI_INITSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_initsystem
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *btnCarInit;
    QPushButton *btnIssue;
    QPushButton *btnPrice;
    QPushButton *btnPriceRecord;
    QPushButton *btnFree;

    void setupUi(QWidget *initsystem)
    {
        if (initsystem->objectName().isEmpty())
            initsystem->setObjectName(QString::fromUtf8("initsystem"));
        initsystem->resize(400, 300);
        label = new QLabel(initsystem);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 171, 41));
        label_2 = new QLabel(initsystem);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 80, 171, 41));
        label_3 = new QLabel(initsystem);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 130, 171, 41));
        label_4 = new QLabel(initsystem);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 170, 171, 41));
        label_5 = new QLabel(initsystem);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 210, 171, 41));
        btnCarInit = new QPushButton(initsystem);
        btnCarInit->setObjectName(QString::fromUtf8("btnCarInit"));
        btnCarInit->setGeometry(QRect(240, 40, 112, 34));
        btnIssue = new QPushButton(initsystem);
        btnIssue->setObjectName(QString::fromUtf8("btnIssue"));
        btnIssue->setGeometry(QRect(240, 80, 112, 34));
        btnPrice = new QPushButton(initsystem);
        btnPrice->setObjectName(QString::fromUtf8("btnPrice"));
        btnPrice->setGeometry(QRect(240, 130, 112, 34));
        btnPriceRecord = new QPushButton(initsystem);
        btnPriceRecord->setObjectName(QString::fromUtf8("btnPriceRecord"));
        btnPriceRecord->setGeometry(QRect(240, 180, 112, 34));
        btnFree = new QPushButton(initsystem);
        btnFree->setObjectName(QString::fromUtf8("btnFree"));
        btnFree->setGeometry(QRect(240, 220, 112, 34));

        retranslateUi(initsystem);

        QMetaObject::connectSlotsByName(initsystem);
    } // setupUi

    void retranslateUi(QWidget *initsystem)
    {
        initsystem->setWindowTitle(QCoreApplication::translate("initsystem", "Form", nullptr));
        label->setText(QCoreApplication::translate("initsystem", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\210\235\345\247\213\345\214\226\350\275\246\344\275\215\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("initsystem", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\210\235\345\247\213\345\214\226\347\273\264\344\277\256\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("initsystem", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\210\235\345\247\213\345\214\226\346\224\266\350\264\271\346\240\207\345\207\206</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("initsystem", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\210\235\345\247\213\345\214\226\346\224\266\350\264\271\350\256\260\345\275\225</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("initsystem", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\210\235\345\247\213\345\214\226\350\257\267\345\201\207\350\256\260\345\275\225</span></p></body></html>", nullptr));
        btnCarInit->setText(QCoreApplication::translate("initsystem", "\345\210\235\345\247\213\345\214\226", nullptr));
        btnIssue->setText(QCoreApplication::translate("initsystem", "\345\210\235\345\247\213\345\214\226", nullptr));
        btnPrice->setText(QCoreApplication::translate("initsystem", "\345\210\235\345\247\213\345\214\226", nullptr));
        btnPriceRecord->setText(QCoreApplication::translate("initsystem", "\345\210\235\345\247\213\345\214\226", nullptr));
        btnFree->setText(QCoreApplication::translate("initsystem", "\345\210\235\345\247\213\345\214\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class initsystem: public Ui_initsystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITSYSTEM_H
