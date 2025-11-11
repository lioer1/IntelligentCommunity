#include <QApplication>
#include <QPushButton>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include "widget/logindialog.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    if (!QSqlDatabase::isDriverAvailable("QSQLITE")) {
        qDebug() << "数据库驱动未安装";
        return -1;
    }
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SoftWare/CodeProgram/Clion/IntelligentCommunity3/IntelligentCommunity3.db");
    if (db.open()) {
        qDebug() << "数据库连接成功";
        logindialog login;
        login.show();
        // TestMaMa test;
        // test.show();
        return a.exec();
    }else {
        QMessageBox::critical(nullptr,"错误","数据库连接失败");
        return -1;
    }

    return 0;
}