//
// Created by 56303 on 2025/11/5.
//

// You may need to build the project (run Qt uic code generator) to get "ui_pricemanage.h" resolved

#include "pricemanage.h"
#include "ui_pricemanage.h"


pricemanage::pricemanage(QWidget *parent) : QWidget(parent), ui(new Ui::pricemanage) {
    ui->setupUi(this);
    priceModel=new QSqlTableModel(this);
    priceModel->setTable("price");
    priceModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
}

pricemanage::~pricemanage() {
    delete ui;
}

void pricemanage::on_priceConfirmBtn_clicked()
{
    if(ui->pmFreeLineEdit->text().isEmpty()&&ui->carStationFreeLineEdit->text().isEmpty()
            &&ui->repareFreeLineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"警告","请填写完整信息",QMessageBox::Yes);
        return;
    }
    priceModel->select();

    QSqlRecord record=priceModel->record();
    record.setValue("pmfree",ui->pmFreeLineEdit->text());
    record.setValue("carstationfree",ui->carStationFreeLineEdit->text());
    record.setValue("repairfree",ui->repareFreeLineEdit->text());

    priceModel->insertRecord(-1,record);
    if(priceModel->submitAll())
    {
        QMessageBox::information(this,"提示","价格信息修改成功",QMessageBox::Yes);
        ui->carStationFreeLineEdit->clear();
        ui->pmFreeLineEdit->clear();
        ui->repareFreeLineEdit->clear();
    }
    else
    {
        QMessageBox::information(this,"提示","价格信息修改失败，请重新输入",QMessageBox::Yes);
    }
}

void pricemanage::on_priceReturnBtn_clicked()
{
    this->hide();
}
