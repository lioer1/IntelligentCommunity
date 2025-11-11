//
// Created by 56303 on 2025/11/4.
//

// You may need to build the project (run Qt uic code generator) to get "ui_houseinfo.h" resolved

#include "houseinfo.h"
#include "ui_houseinfo.h"


houseinfo::houseinfo(QWidget *parent) : QWidget(parent), ui(new Ui::houseinfo) {
    ui->setupUi(this);
    houseInfoModel = new QSqlTableModel(this);
    houseInfoModel->setTable("house");
    houseInfoModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    houseInfoModel->removeColumns(5,5);
}

houseinfo::~houseinfo() {
    delete ui;
}

bool houseinfo::judgeEmpty() {
    if(ui->houseOwnerLineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"警告","业主姓名不能为空",QMessageBox::Yes);
        return false;
    }
    else if(ui->houseAddressLineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"警告","房屋信息不能为空",QMessageBox::Yes);
        return false;
    }
    else
        return true;
}

void houseinfo::clearAll() {
    ui->houseOwnerLineEdit->clear();
    ui->houseAddressLineEdit->clear();
    ui->houseAreaLineEdit->clear();
    ui->houseTypeLineEdit->clear();
}

void houseinfo::on_houseInfoConfirmBtn_clicked() {
    if(!this->judgeEmpty())
        return;
    houseInfoModel->select();
    int i;
    for(i=0;i<houseInfoModel->rowCount();i++)
    {
        if(houseInfoModel->data(houseInfoModel->index(i,0)).toString()==ui->houseAddressLineEdit->text())
        {
            break;
        }
    }
    if(i!=houseInfoModel->rowCount())
    {
        QMessageBox::information(this,"提示","该房屋已经存在",QMessageBox::Yes);
        this->clearAll();
        return;
    }
    QSqlRecord record=houseInfoModel->record();
    record.setValue("ownername",ui->houseOwnerLineEdit->text());
    record.setValue("houseaddress",ui->houseAddressLineEdit->text());
    record.setValue("housetype",ui->houseTypeLineEdit->text());
    record.setValue("housearea",ui->houseAreaLineEdit->text());

    houseInfoModel->insertRecord(-1,record);
    if(houseInfoModel->submitAll())
    {
        QMessageBox::information(this,"提示","业主房屋信息添加成功",QMessageBox::Yes);
        this->clearAll();
    }
}

void houseinfo::on_houseInfoReturnBtn_clicked() {
    if(ui->houseOwnerLineEdit->text().isEmpty()&&ui->houseTypeLineEdit->text().isEmpty()&&
       ui->houseAddressLineEdit->text().isEmpty()&&ui->houseAddressLineEdit->text().isEmpty())
    {
        //emit EmitWorkerChanged();
        this->hide();
        qDebug("addworker");
        return;

    }
    if(QMessageBox::question(this,"提示","尚未保存，是否退出",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        this->hide();
        houseInfoModel->select();
    }
}

