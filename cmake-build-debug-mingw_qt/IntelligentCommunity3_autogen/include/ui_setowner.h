/********************************************************************************
** Form generated from reading UI file 'setowner.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETOWNER_H
#define UI_SETOWNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setowner
{
public:
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QWidget *setowner)
    {
        if (setowner->objectName().isEmpty())
            setowner->setObjectName(QString::fromUtf8("setowner"));
        setowner->resize(400, 300);
        tableView = new QTableView(setowner);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 21, 231, 261));
        pushButton = new QPushButton(setowner);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 30, 112, 34));

        retranslateUi(setowner);

        QMetaObject::connectSlotsByName(setowner);
    } // setupUi

    void retranslateUi(QWidget *setowner)
    {
        setowner->setWindowTitle(QCoreApplication::translate("setowner", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("setowner", "\346\267\273\345\212\240\344\272\272\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setowner: public Ui_setowner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETOWNER_H
