//
// Created by LP on 2025/11/2.
//

// You may need to build the project (run Qt uic code generator) to get "ui_logindialog.h" resolved

#include "logindialog.h"
#include "ui_logindialog.h"


logindialog::logindialog(QWidget *parent) : QWidget(parent), ui(new Ui::logindialog) {
    ui->setupUi(this);
    radioGroup = new QButtonGroup(this);
    radioGroup->addButton(ui->managerRadio,0);
    radioGroup->addButton(ui->workerRadio,1);
    radioGroup->addButton(ui->ownerRadio,2);

    connect(ui->loginBtn,&QPushButton::clicked,this,&logindialog::loginbtnSlot);
    connect(ui->exitBtn,&QPushButton::clicked,this,&logindialog::exitbtnSlot);
}

void logindialog::exitbtnSlot() {
    this->close();
}

void logindialog::loginbtnSlot() {
    if (!judgeEmpty()) {
        clearAll();
        return;
    }
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::warning(this,"警告","数据库未连接");
        return;
    }
    QString username = ui->userLine->text();
    QString password = ui->passwordLine->text();
    int role = radioGroup->checkedId();

    QSqlQuery query;
    if (role == 0) {
        query.prepare("select * from worker where workernum=? AND workertype = '是'");
        query.addBindValue(username);
        if (!query.exec()) {
            QMessageBox::warning(this,"警告","查询失败");
            return;
        }
        if (query.next()) {
            if (query.value(1).toString() == password) {
                QMessageBox::information(this,"提示","管理员登录成功");
                manager = new managermanage;
                manager->show();
                this->showMinimized();
                return;
            }else {
                QMessageBox::warning(this,"警告","密码错误");
            }
        }else {
            QMessageBox::warning(this,"警告","用户名不存在或者不是管理员");
        }
    }else if (role == 1) {
        query.prepare("select * from worker where workernum = ?");
        query.addBindValue(username);
        if (!query.exec()) {
            QMessageBox::warning(this,"警告","查询失败");
            return;
        }
        if (query.next()) {
            if (query.value(1).toString() == password) {
                QMessageBox::information(this,"提示","工作人员登录成功");
                worker=new workermanage;
                worker->setWindowTitle(ui->userLine->text());
                worker->show();
                this->showMinimized();
                return;
            }else {
                QMessageBox::warning(this,"警告","密码错误");
            }
        }else {
            QMessageBox::warning(this,"警告","用户名不存在");
        }
    }else if (role == 2){
        query.prepare("select * from houseowner where ownername = ?");
        query.addBindValue(username);
        if (!query.exec()) {
            QMessageBox::warning(this,"警告","查询失败");
            return;
        }
        if (query.next()) {
            if (query.value(1).toString() == password) {
                QMessageBox::information(this,"提示","业主登录成功");
                // logindialog::currentUsername = username;
                owner=new ownermanage;
                owner->setWindowTitle(ui->userLine->text());
                owner->show();
                this->showMinimized();
                return;
            }else {
                QMessageBox::warning(this,"警告","密码错误");
            }
        }else {
            QMessageBox::warning(this,"警告","用户名不存在");
        }
    }else {
        QMessageBox::warning(this,"警告","请选择角色");
    }
}

bool logindialog::judgeEmpty() {
    if (ui->userLine->text().isEmpty()) {
        QMessageBox::warning(this,"警告","用户名不能为空");
        return false;
    }
    if (ui->passwordLine->text().isEmpty()) {
        QMessageBox::warning(this,"警告","密码不能为空");
        return false;
    }
    return true;
}

void logindialog::clearAll() {
    ui->userLine->clear();
    ui->passwordLine->clear();
}

logindialog::~logindialog() {
    delete ui;
}