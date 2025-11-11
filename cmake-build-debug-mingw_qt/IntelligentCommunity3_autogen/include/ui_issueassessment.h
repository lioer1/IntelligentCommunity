/********************************************************************************
** Form generated from reading UI file 'issueassessment.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSUEASSESSMENT_H
#define UI_ISSUEASSESSMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_issueassessment
{
public:
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *issueassessment)
    {
        if (issueassessment->objectName().isEmpty())
            issueassessment->setObjectName(QString::fromUtf8("issueassessment"));
        issueassessment->resize(554, 300);
        label = new QLabel(issueassessment);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 481, 71));
        textEdit = new QTextEdit(issueassessment);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 70, 511, 161));
        pushButton_2 = new QPushButton(issueassessment);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 250, 112, 34));
        pushButton = new QPushButton(issueassessment);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 250, 112, 34));

        retranslateUi(issueassessment);

        QMetaObject::connectSlotsByName(issueassessment);
    } // setupUi

    void retranslateUi(QWidget *issueassessment)
    {
        issueassessment->setWindowTitle(QCoreApplication::translate("issueassessment", "\347\273\264\344\277\256\350\257\204\344\273\267", nullptr));
        label->setText(QCoreApplication::translate("issueassessment", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\254\242\350\277\216\346\202\250\345\257\271\346\210\221\344\273\254\347\232\204\347\273\264\344\277\256\347\273\223\346\236\234\346\217\220\345\207\272\345\256\235\350\264\265\346\204\217\350\247\201</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("issueassessment", "\346\217\220\344\272\244", nullptr));
        pushButton->setText(QCoreApplication::translate("issueassessment", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class issueassessment: public Ui_issueassessment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSUEASSESSMENT_H
