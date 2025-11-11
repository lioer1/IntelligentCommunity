/********************************************************************************
** Form generated from reading UI file 'ownermanage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNERMANAGE_H
#define UI_OWNERMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ownermanage
{
public:
    QAction *applyCarStationAct;
    QAction *showCarStationAct;
    QAction *payShowAct;
    QAction *payAct;
    QAction *issueReportAct;
    QAction *issueProcessAct;
    QAction *issueEvaluateAct;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *myCarStationMenu;
    QMenu *payManageMenu;
    QMenu *issueManageAct;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ownermanage)
    {
        if (ownermanage->objectName().isEmpty())
            ownermanage->setObjectName(QString::fromUtf8("ownermanage"));
        ownermanage->resize(716, 489);
        applyCarStationAct = new QAction(ownermanage);
        applyCarStationAct->setObjectName(QString::fromUtf8("applyCarStationAct"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/image/carstation1.png"), QSize(), QIcon::Normal, QIcon::Off);
        applyCarStationAct->setIcon(icon);
        showCarStationAct = new QAction(ownermanage);
        showCarStationAct->setObjectName(QString::fromUtf8("showCarStationAct"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/image/rentcarstation.png"), QSize(), QIcon::Normal, QIcon::Off);
        showCarStationAct->setIcon(icon1);
        payShowAct = new QAction(ownermanage);
        payShowAct->setObjectName(QString::fromUtf8("payShowAct"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/image/pay.png"), QSize(), QIcon::Normal, QIcon::Off);
        payShowAct->setIcon(icon2);
        payAct = new QAction(ownermanage);
        payAct->setObjectName(QString::fromUtf8("payAct"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/image/price.png"), QSize(), QIcon::Normal, QIcon::Off);
        payAct->setIcon(icon3);
        issueReportAct = new QAction(ownermanage);
        issueReportAct->setObjectName(QString::fromUtf8("issueReportAct"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/image/issuerepair.png"), QSize(), QIcon::Normal, QIcon::Off);
        issueReportAct->setIcon(icon4);
        issueProcessAct = new QAction(ownermanage);
        issueProcessAct->setObjectName(QString::fromUtf8("issueProcessAct"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/image/issueshow.png"), QSize(), QIcon::Normal, QIcon::Off);
        issueProcessAct->setIcon(icon5);
        issueEvaluateAct = new QAction(ownermanage);
        issueEvaluateAct->setObjectName(QString::fromUtf8("issueEvaluateAct"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/image/houses.png"), QSize(), QIcon::Normal, QIcon::Off);
        issueEvaluateAct->setIcon(icon6);
        centralwidget = new QWidget(ownermanage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ownermanage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ownermanage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 716, 29));
        myCarStationMenu = new QMenu(menubar);
        myCarStationMenu->setObjectName(QString::fromUtf8("myCarStationMenu"));
        payManageMenu = new QMenu(menubar);
        payManageMenu->setObjectName(QString::fromUtf8("payManageMenu"));
        issueManageAct = new QMenu(menubar);
        issueManageAct->setObjectName(QString::fromUtf8("issueManageAct"));
        ownermanage->setMenuBar(menubar);
        statusbar = new QStatusBar(ownermanage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ownermanage->setStatusBar(statusbar);
        toolBar = new QToolBar(ownermanage);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        ownermanage->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(myCarStationMenu->menuAction());
        menubar->addAction(payManageMenu->menuAction());
        menubar->addAction(issueManageAct->menuAction());
        myCarStationMenu->addAction(applyCarStationAct);
        myCarStationMenu->addAction(showCarStationAct);
        payManageMenu->addAction(payShowAct);
        payManageMenu->addAction(payAct);
        issueManageAct->addAction(issueReportAct);
        issueManageAct->addAction(issueProcessAct);
        issueManageAct->addAction(issueEvaluateAct);
        toolBar->addAction(applyCarStationAct);
        toolBar->addAction(showCarStationAct);
        toolBar->addSeparator();
        toolBar->addAction(payShowAct);
        toolBar->addAction(payAct);
        toolBar->addSeparator();
        toolBar->addAction(issueReportAct);
        toolBar->addAction(issueProcessAct);
        toolBar->addAction(issueEvaluateAct);

        retranslateUi(ownermanage);

        QMetaObject::connectSlotsByName(ownermanage);
    } // setupUi

    void retranslateUi(QMainWindow *ownermanage)
    {
        ownermanage->setWindowTitle(QCoreApplication::translate("ownermanage", "\346\231\272\346\205\247\345\260\217\345\214\272\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        applyCarStationAct->setText(QCoreApplication::translate("ownermanage", "\350\275\246\344\275\215\347\224\263\350\257\267", nullptr));
        showCarStationAct->setText(QCoreApplication::translate("ownermanage", "\350\275\246\344\275\215\346\237\245\347\234\213", nullptr));
        payShowAct->setText(QCoreApplication::translate("ownermanage", "\347\274\264\350\264\271\346\237\245\350\257\242", nullptr));
        payAct->setText(QCoreApplication::translate("ownermanage", "\350\207\252\345\212\251\347\274\264\350\264\271", nullptr));
        issueReportAct->setText(QCoreApplication::translate("ownermanage", "\346\225\205\351\232\234\346\212\245\344\277\256", nullptr));
        issueProcessAct->setText(QCoreApplication::translate("ownermanage", "\347\273\264\344\277\256\350\277\233\345\272\246", nullptr));
        issueEvaluateAct->setText(QCoreApplication::translate("ownermanage", "\347\273\264\344\277\256\350\257\204\344\273\267", nullptr));
        myCarStationMenu->setTitle(QCoreApplication::translate("ownermanage", "\346\210\221\347\232\204\350\275\246\344\275\215", nullptr));
        payManageMenu->setTitle(QCoreApplication::translate("ownermanage", "\347\274\264\350\264\271\347\256\241\347\220\206", nullptr));
        issueManageAct->setTitle(QCoreApplication::translate("ownermanage", "\346\225\205\351\232\234\346\212\245\344\277\256", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("ownermanage", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ownermanage: public Ui_ownermanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNERMANAGE_H
