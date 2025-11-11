//
// Created by 56303 on 2025/11/4.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ownerinfo.h" resolved

#include "ownerinfo.h"
#include "ui_ownerinfo.h"


ownerinfo::ownerinfo(QWidget *parent) : QWidget(parent), ui(new Ui::ownerinfo) {
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    model->setTable("houseowner");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->removeColumns(5,5);
}

ownerinfo::~ownerinfo() {
    delete ui;
}

void ownerinfo::on_ownerInfoConfirmBtn_clicked() {
    if (!this->judgeEmpty()) {
        return;
    }
    model->select();
    int i;
    for (i=0;i<model->rowCount();i++) {
        if (model->data(model->index(i,0)).toString()==ui->ownerNameLineEdit->text()) {
            break;
        }
    }
    if (i!=model->rowCount()) {
        QMessageBox::information(this,"提示","该业主已经存在",QMessageBox::Yes);
        this->clearAll();
        return;
    }
    QSqlRecord record = model->record();
    record.setValue("ownername",ui->ownerNameLineEdit->text());
    record.setValue("ownerpass",ui->ownerPassLineEdit->text());
    record.setValue("owneraddr",ui->ownerAddressLineEdit->text());
    record.setValue("ownerphone",ui->ownerPhoneLineEdit->text());

    model->insertRecord(-1,record);
    if (model->submitAll()) {
        QMessageBox::information(this,"提示","业主添加成功",QMessageBox::Yes);
        this->clearAll();
    }
}

void ownerinfo::on_ownerInfoReturnBtn_clicked() {
    if (ui->ownerNameLineEdit->text().isEmpty()&&ui->ownerPhoneLineEdit->text().isEmpty()&&
        ui->ownerPassLineEdit->text().isEmpty()&&ui->ownerAddressLineEdit->text().isEmpty()) {
        emit EmitWorkerChanged();
        this->hide();
        qDebug("addworker");
        return;
    }
    if(QMessageBox::question(this,"提示","尚未保存，是否退出",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        this->hide();
    }
}

bool ownerinfo::judgeEmpty() {
    if(ui->ownerNameLineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"警告","业主姓名不能为空",QMessageBox::Yes);
        return false;
    }
    else if(ui->ownerPassLineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"警告","业主密码不能为空",QMessageBox::Yes);
        return false;
    }
    else
        return true;
}

void ownerinfo::clearAll()
{
    ui->ownerNameLineEdit->clear();
    ui->ownerPassLineEdit->clear();
    ui->ownerPhoneLineEdit->clear();
    ui->ownerAddressLineEdit->clear();
}
