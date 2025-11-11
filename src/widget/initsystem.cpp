//
// Created by 56303 on 2025/11/3.
//

// You may need to build the project (run Qt uic code generator) to get "ui_initsystem.h" resolved

#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
#include "initsystem.h"
#include "ui_initsystem.h"


initsystem::initsystem(QWidget *parent) : QWidget(parent), ui(new Ui::initsystem) {
    ui->setupUi(this);
}

initsystem::~initsystem() {
    delete ui;
}

void initsystem::on_btnCarInit_clicked() {
    int ret = QMessageBox::warning(this,"提示","确定是否要对系统进行初始化",QMessageBox::Yes|QMessageBox::No);
    if (ret == QMessageBox::Yes) {
        QSqlQuery query;
        QString strSql = "delete from carstation";
        query.exec(strSql);
    }else {
        qDebug()<< "取消系统初始化";
    }
}

void initsystem::on_btnIssue_clicked() {
    int ret = QMessageBox::warning(this,"提示","确定是否要对系统进行初始化",QMessageBox::Yes|QMessageBox::No);
    if (ret == QMessageBox::Yes) {
        QSqlQuery query;
        QString strSql = "delete from errorinfo";
        query.exec(strSql);
    }else {
        qDebug() << "取消系统初始化";
    }
}

void initsystem::on_btnPrice_clicked() {
    int ret = QMessageBox::warning(this,"提示","确定是否要对收费标准进行初始化",QMessageBox::Yes|QMessageBox::No);
    if (ret == QMessageBox::Yes) {
        QSqlQuery query;
        QString strSql = "delete from price";
        query.exec(strSql);
    }else {
        qDebug() << "取消系统初始化";
    }
}

void initsystem::on_btnPriceRecord_clicked() {
    int ret = QMessageBox::warning(this,"提示","确定是否要对收费记录进行初始化",QMessageBox::Yes|QMessageBox::No);
    if (ret == QMessageBox::Yes) {
        QSqlQuery query;
        QString strSql = "delete from priceRecord";
        query.exec(strSql);
    }else {
        qDebug() << "取消系统初始化";
    }
}

void initsystem::on_btnFree_clicked() {
    int ret = QMessageBox::warning(this,"提示","确定是否要对请假信息进行初始化",QMessageBox::Yes|QMessageBox::No);
    if (ret == QMessageBox::Yes) {
        QSqlQuery query;
        QString strSql = "delete from workerattend";
        query.exec(strSql);
    }else {
        qDebug() << "取消系统初始化";
    }
}


