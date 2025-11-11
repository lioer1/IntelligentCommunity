/********************************************************************************
** Form generated from reading UI file 'workerinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKERINFO_H
#define UI_WORKERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workerinfo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *worknumlineEdit;
    QLineEdit *workpasslineEdit;
    QLineEdit *workphonelineEdit;
    QLabel *label_5;
    QRadioButton *yesradioButton;
    QRadioButton *noradioButton;
    QPushButton *AddActBtn;
    QPushButton *ReturnBtn;

    void setupUi(QWidget *workerinfo)
    {
        if (workerinfo->objectName().isEmpty())
            workerinfo->setObjectName(QString::fromUtf8("workerinfo"));
        workerinfo->resize(358, 380);
        label = new QLabel(workerinfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 331, 71));
        label_2 = new QLabel(workerinfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 70, 81, 31));
        label_3 = new QLabel(workerinfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 120, 81, 31));
        label_4 = new QLabel(workerinfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 170, 81, 31));
        worknumlineEdit = new QLineEdit(workerinfo);
        worknumlineEdit->setObjectName(QString::fromUtf8("worknumlineEdit"));
        worknumlineEdit->setGeometry(QRect(120, 70, 181, 31));
        workpasslineEdit = new QLineEdit(workerinfo);
        workpasslineEdit->setObjectName(QString::fromUtf8("workpasslineEdit"));
        workpasslineEdit->setGeometry(QRect(120, 120, 181, 31));
        workphonelineEdit = new QLineEdit(workerinfo);
        workphonelineEdit->setObjectName(QString::fromUtf8("workphonelineEdit"));
        workphonelineEdit->setGeometry(QRect(120, 170, 181, 31));
        label_5 = new QLabel(workerinfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 240, 111, 31));
        yesradioButton = new QRadioButton(workerinfo);
        yesradioButton->setObjectName(QString::fromUtf8("yesradioButton"));
        yesradioButton->setGeometry(QRect(170, 240, 132, 22));
        noradioButton = new QRadioButton(workerinfo);
        noradioButton->setObjectName(QString::fromUtf8("noradioButton"));
        noradioButton->setGeometry(QRect(250, 240, 132, 22));
        AddActBtn = new QPushButton(workerinfo);
        AddActBtn->setObjectName(QString::fromUtf8("AddActBtn"));
        AddActBtn->setGeometry(QRect(40, 300, 112, 34));
        ReturnBtn = new QPushButton(workerinfo);
        ReturnBtn->setObjectName(QString::fromUtf8("ReturnBtn"));
        ReturnBtn->setGeometry(QRect(200, 300, 112, 34));

        retranslateUi(workerinfo);

        QMetaObject::connectSlotsByName(workerinfo);
    } // setupUi

    void retranslateUi(QWidget *workerinfo)
    {
        workerinfo->setWindowTitle(QCoreApplication::translate("workerinfo", "\346\267\273\345\212\240\347\211\251\344\270\232\345\267\245\344\275\234\344\272\272\345\221\230", nullptr));
        label->setText(QCoreApplication::translate("workerinfo", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\346\231\272\346\205\247\345\260\217\345\214\272\347\211\251\344\270\232\344\272\272\345\221\230\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("workerinfo", "<html><head/><body><p><span style=\" font-size:11pt;\">\350\264\246\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("workerinfo", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("workerinfo", "<html><head/><body><p><span style=\" font-size:11pt;\">\347\224\265\350\257\235\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("workerinfo", "<html><head/><body><p>\346\230\257\345\220\246\347\256\241\347\220\206\345\221\230\357\274\232</p></body></html>", nullptr));
        yesradioButton->setText(QCoreApplication::translate("workerinfo", "\346\230\257", nullptr));
        noradioButton->setText(QCoreApplication::translate("workerinfo", "\345\220\246", nullptr));
        AddActBtn->setText(QCoreApplication::translate("workerinfo", "\346\267\273\345\212\240", nullptr));
        ReturnBtn->setText(QCoreApplication::translate("workerinfo", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workerinfo: public Ui_workerinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKERINFO_H
