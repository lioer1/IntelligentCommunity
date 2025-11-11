/********************************************************************************
** Form generated from reading UI file 'workermanage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKERMANAGE_H
#define UI_WORKERMANAGE_H

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

class Ui_workermanage
{
public:
    QAction *showOwnerAct;
    QAction *alterOwnerAct;
    QAction *addHouseAct;
    QAction *addOwnerAct;
    QAction *showCarStationAct;
    QAction *addCarStationAct;
    QAction *alterCarStationAct;
    QAction *delCarStationAct;
    QAction *carStationRenAct;
    QAction *priceManageAct;
    QAction *payInfoAct;
    QAction *payAct;
    QAction *issueShowAct;
    QAction *issueRepairAct;
    QAction *freeAct;
    QAction *freeConfirmAct;
    QAction *attendAct;
    QAction *delOwnerAct;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *ownerManageMenu;
    QMenu *menu;
    QMenu *carStationManageMenu;
    QMenu *paymentManageMenu;
    QMenu *issueManageMenu;
    QMenu *hrManageMenu;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *workermanage)
    {
        if (workermanage->objectName().isEmpty())
            workermanage->setObjectName(QString::fromUtf8("workermanage"));
        workermanage->resize(800, 600);
        showOwnerAct = new QAction(workermanage);
        showOwnerAct->setObjectName(QString::fromUtf8("showOwnerAct"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/image/show.png"), QSize(), QIcon::Normal, QIcon::Off);
        showOwnerAct->setIcon(icon);
        alterOwnerAct = new QAction(workermanage);
        alterOwnerAct->setObjectName(QString::fromUtf8("alterOwnerAct"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/image/attend.png"), QSize(), QIcon::Normal, QIcon::Off);
        alterOwnerAct->setIcon(icon1);
        addHouseAct = new QAction(workermanage);
        addHouseAct->setObjectName(QString::fromUtf8("addHouseAct"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/image/houses.png"), QSize(), QIcon::Normal, QIcon::Off);
        addHouseAct->setIcon(icon2);
        addOwnerAct = new QAction(workermanage);
        addOwnerAct->setObjectName(QString::fromUtf8("addOwnerAct"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/image/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addOwnerAct->setIcon(icon3);
        showCarStationAct = new QAction(workermanage);
        showCarStationAct->setObjectName(QString::fromUtf8("showCarStationAct"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/image/carstation1.png"), QSize(), QIcon::Normal, QIcon::Off);
        showCarStationAct->setIcon(icon4);
        addCarStationAct = new QAction(workermanage);
        addCarStationAct->setObjectName(QString::fromUtf8("addCarStationAct"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/image/deladdcarstation.png"), QSize(), QIcon::Normal, QIcon::Off);
        addCarStationAct->setIcon(icon5);
        alterCarStationAct = new QAction(workermanage);
        alterCarStationAct->setObjectName(QString::fromUtf8("alterCarStationAct"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/image/carstation.png"), QSize(), QIcon::Normal, QIcon::Off);
        alterCarStationAct->setIcon(icon6);
        delCarStationAct = new QAction(workermanage);
        delCarStationAct->setObjectName(QString::fromUtf8("delCarStationAct"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resources/image/addcarstation.png"), QSize(), QIcon::Normal, QIcon::Off);
        delCarStationAct->setIcon(icon7);
        carStationRenAct = new QAction(workermanage);
        carStationRenAct->setObjectName(QString::fromUtf8("carStationRenAct"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resources/image/rentcarstation.png"), QSize(), QIcon::Normal, QIcon::Off);
        carStationRenAct->setIcon(icon8);
        priceManageAct = new QAction(workermanage);
        priceManageAct->setObjectName(QString::fromUtf8("priceManageAct"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resources/image/price.png"), QSize(), QIcon::Normal, QIcon::Off);
        priceManageAct->setIcon(icon9);
        payInfoAct = new QAction(workermanage);
        payInfoAct->setObjectName(QString::fromUtf8("payInfoAct"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resources/image/paymanage.png"), QSize(), QIcon::Normal, QIcon::Off);
        payInfoAct->setIcon(icon10);
        payAct = new QAction(workermanage);
        payAct->setObjectName(QString::fromUtf8("payAct"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resources/image/pay.png"), QSize(), QIcon::Normal, QIcon::Off);
        payAct->setIcon(icon11);
        issueShowAct = new QAction(workermanage);
        issueShowAct->setObjectName(QString::fromUtf8("issueShowAct"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resources/image/issuerepair.png"), QSize(), QIcon::Normal, QIcon::Off);
        issueShowAct->setIcon(icon12);
        issueRepairAct = new QAction(workermanage);
        issueRepairAct->setObjectName(QString::fromUtf8("issueRepairAct"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/resources/image/issueshow.png"), QSize(), QIcon::Normal, QIcon::Off);
        issueRepairAct->setIcon(icon13);
        freeAct = new QAction(workermanage);
        freeAct->setObjectName(QString::fromUtf8("freeAct"));
        freeAct->setIcon(icon1);
        freeConfirmAct = new QAction(workermanage);
        freeConfirmAct->setObjectName(QString::fromUtf8("freeConfirmAct"));
        freeConfirmAct->setIcon(icon1);
        attendAct = new QAction(workermanage);
        attendAct->setObjectName(QString::fromUtf8("attendAct"));
        attendAct->setIcon(icon1);
        delOwnerAct = new QAction(workermanage);
        delOwnerAct->setObjectName(QString::fromUtf8("delOwnerAct"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/resources/image/del.png"), QSize(), QIcon::Normal, QIcon::Off);
        delOwnerAct->setIcon(icon14);
        centralwidget = new QWidget(workermanage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        workermanage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(workermanage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 29));
        ownerManageMenu = new QMenu(menubar);
        ownerManageMenu->setObjectName(QString::fromUtf8("ownerManageMenu"));
        menu = new QMenu(ownerManageMenu);
        menu->setObjectName(QString::fromUtf8("menu"));
        carStationManageMenu = new QMenu(menubar);
        carStationManageMenu->setObjectName(QString::fromUtf8("carStationManageMenu"));
        paymentManageMenu = new QMenu(menubar);
        paymentManageMenu->setObjectName(QString::fromUtf8("paymentManageMenu"));
        issueManageMenu = new QMenu(menubar);
        issueManageMenu->setObjectName(QString::fromUtf8("issueManageMenu"));
        hrManageMenu = new QMenu(menubar);
        hrManageMenu->setObjectName(QString::fromUtf8("hrManageMenu"));
        workermanage->setMenuBar(menubar);
        statusbar = new QStatusBar(workermanage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        workermanage->setStatusBar(statusbar);
        toolBar = new QToolBar(workermanage);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        workermanage->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(ownerManageMenu->menuAction());
        menubar->addAction(carStationManageMenu->menuAction());
        menubar->addAction(paymentManageMenu->menuAction());
        menubar->addAction(issueManageMenu->menuAction());
        menubar->addAction(hrManageMenu->menuAction());
        ownerManageMenu->addAction(showOwnerAct);
        ownerManageMenu->addAction(alterOwnerAct);
        ownerManageMenu->addAction(menu->menuAction());
        menu->addAction(addHouseAct);
        menu->addAction(addOwnerAct);
        carStationManageMenu->addAction(showCarStationAct);
        carStationManageMenu->addAction(addCarStationAct);
        carStationManageMenu->addAction(alterCarStationAct);
        carStationManageMenu->addAction(delCarStationAct);
        carStationManageMenu->addAction(carStationRenAct);
        paymentManageMenu->addAction(priceManageAct);
        paymentManageMenu->addAction(payInfoAct);
        paymentManageMenu->addAction(payAct);
        issueManageMenu->addAction(issueShowAct);
        issueManageMenu->addAction(issueRepairAct);
        hrManageMenu->addAction(freeAct);
        hrManageMenu->addAction(freeConfirmAct);
        hrManageMenu->addAction(attendAct);
        toolBar->addAction(showOwnerAct);
        toolBar->addAction(alterOwnerAct);
        toolBar->addAction(addOwnerAct);
        toolBar->addAction(delOwnerAct);
        toolBar->addAction(addHouseAct);
        toolBar->addSeparator();
        toolBar->addAction(showCarStationAct);
        toolBar->addAction(addCarStationAct);
        toolBar->addAction(alterCarStationAct);
        toolBar->addAction(delCarStationAct);
        toolBar->addAction(carStationRenAct);
        toolBar->addSeparator();
        toolBar->addAction(priceManageAct);
        toolBar->addAction(payInfoAct);
        toolBar->addAction(payAct);
        toolBar->addSeparator();
        toolBar->addAction(issueShowAct);
        toolBar->addAction(issueRepairAct);
        toolBar->addSeparator();
        toolBar->addAction(freeAct);
        toolBar->addAction(freeConfirmAct);
        toolBar->addAction(attendAct);
        toolBar->addSeparator();

        retranslateUi(workermanage);

        QMetaObject::connectSlotsByName(workermanage);
    } // setupUi

    void retranslateUi(QMainWindow *workermanage)
    {
        workermanage->setWindowTitle(QCoreApplication::translate("workermanage", "\346\231\272\346\205\247\345\260\217\345\214\272\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        showOwnerAct->setText(QCoreApplication::translate("workermanage", "\344\270\232\344\270\273\346\237\245\350\257\242", nullptr));
        alterOwnerAct->setText(QCoreApplication::translate("workermanage", "\344\270\232\344\270\273\344\277\256\346\224\271", nullptr));
        addHouseAct->setText(QCoreApplication::translate("workermanage", "\346\210\277\344\272\247\347\231\273\350\256\260", nullptr));
        addOwnerAct->setText(QCoreApplication::translate("workermanage", "\346\210\220\345\221\230\347\231\273\350\256\260", nullptr));
        showCarStationAct->setText(QCoreApplication::translate("workermanage", "\346\237\245\347\234\213\350\275\246\344\275\215\344\277\241\346\201\257", nullptr));
        addCarStationAct->setText(QCoreApplication::translate("workermanage", "\345\275\225\345\205\245\350\275\246\344\275\215\344\277\241\346\201\257", nullptr));
        alterCarStationAct->setText(QCoreApplication::translate("workermanage", "\344\277\256\346\224\271\350\275\246\344\275\215\344\277\241\346\201\257", nullptr));
        delCarStationAct->setText(QCoreApplication::translate("workermanage", "\345\210\240\351\231\244\350\275\246\344\275\215\344\277\241\346\201\257", nullptr));
        carStationRenAct->setText(QCoreApplication::translate("workermanage", "\350\275\246\344\275\215\345\207\272\347\247\237", nullptr));
        priceManageAct->setText(QCoreApplication::translate("workermanage", "\344\273\267\346\240\274\347\273\264\346\212\244", nullptr));
        payInfoAct->setText(QCoreApplication::translate("workermanage", "\347\274\264\350\264\271\346\237\245\350\257\242", nullptr));
        payAct->setText(QCoreApplication::translate("workermanage", "\346\224\266\350\264\271", nullptr));
        issueShowAct->setText(QCoreApplication::translate("workermanage", "\346\225\205\351\232\234\346\237\245\350\257\242", nullptr));
        issueRepairAct->setText(QCoreApplication::translate("workermanage", "\346\225\205\351\232\234\347\273\264\344\277\256", nullptr));
        freeAct->setText(QCoreApplication::translate("workermanage", "\350\257\267\345\201\207", nullptr));
        freeConfirmAct->setText(QCoreApplication::translate("workermanage", "\351\224\200\345\201\207", nullptr));
        attendAct->setText(QCoreApplication::translate("workermanage", "\346\234\210\345\272\246\345\207\272\345\213\244", nullptr));
        delOwnerAct->setText(QCoreApplication::translate("workermanage", "\345\210\240\351\231\244\344\270\232\344\270\273", nullptr));
#if QT_CONFIG(tooltip)
        delOwnerAct->setToolTip(QCoreApplication::translate("workermanage", "\345\210\240\351\231\244\344\270\232\344\270\273", nullptr));
#endif // QT_CONFIG(tooltip)
        ownerManageMenu->setTitle(QCoreApplication::translate("workermanage", "\344\270\232\344\270\273\347\256\241\347\220\206", nullptr));
        menu->setTitle(QCoreApplication::translate("workermanage", "\344\270\232\344\270\273\347\231\273\350\256\260", nullptr));
        carStationManageMenu->setTitle(QCoreApplication::translate("workermanage", "\350\275\246\344\275\215\347\256\241\347\220\206", nullptr));
        paymentManageMenu->setTitle(QCoreApplication::translate("workermanage", "\347\274\264\350\264\271\347\256\241\347\220\206", nullptr));
        issueManageMenu->setTitle(QCoreApplication::translate("workermanage", "\346\225\205\351\232\234\347\256\241\347\220\206", nullptr));
        hrManageMenu->setTitle(QCoreApplication::translate("workermanage", "\344\272\272\344\272\213\347\256\241\347\220\206", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("workermanage", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workermanage: public Ui_workermanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKERMANAGE_H
