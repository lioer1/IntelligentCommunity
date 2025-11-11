/********************************************************************************
** Form generated from reading UI file 'managermanage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERMANAGE_H
#define UI_MANAGERMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managermanage
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *managermanage)
    {
        if (managermanage->objectName().isEmpty())
            managermanage->setObjectName(QString::fromUtf8("managermanage"));
        managermanage->resize(800, 600);
        centralwidget = new QWidget(managermanage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        managermanage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(managermanage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 29));
        managermanage->setMenuBar(menubar);
        statusbar = new QStatusBar(managermanage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        managermanage->setStatusBar(statusbar);

        retranslateUi(managermanage);

        QMetaObject::connectSlotsByName(managermanage);
    } // setupUi

    void retranslateUi(QMainWindow *managermanage)
    {
        managermanage->setWindowTitle(QCoreApplication::translate("managermanage", "\346\231\272\346\205\247\345\260\217\345\214\272\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managermanage: public Ui_managermanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERMANAGE_H
