//
// Created by 56303 on 2025/11/6.
//

// You may need to build the project (run Qt uic code generator) to get "ui_applycarstation.h" resolved

#include "applycarstation.h"
#include "ui_applycarstation.h"


applycarstation::applycarstation(QWidget *parent) : QWidget(parent), ui(new Ui::applycarstation) {
    ui->setupUi(this);
    typeRadioGroup=new QButtonGroup(this);
    typeRadioGroup->addButton(ui->carStationUpRadioBtn,0);
    typeRadioGroup->addButton(ui->carStationDownRadioBtn,1);
    ui->carStationUpRadioBtn->setChecked(true);

    largeRadioGroup=new QButtonGroup(this);
    largeRadioGroup->addButton(ui->carStationLargeRadioBtn,0);
    largeRadioGroup->addButton(ui->carStationSmallRadioBtn,1);
    ui->carStationLargeRadioBtn->setChecked(true);

    electRadioGroup=new QButtonGroup(this);
    electRadioGroup->addButton(ui->carStationEnableRadioBtn,0);
    electRadioGroup->addButton(ui->carStationDisableRadioBtn,1);
    ui->carStationDisableRadioBtn->setChecked(true);

    myCarStationModel=new QSqlTableModel(this);
    myCarStationModel->setTable("mycarstation");
    myCarStationModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
}

applycarstation::~applycarstation() {
    delete ui;
}

void applycarstation::on_applyCarStationConfirmBtn_clicked()
{
    if(ui->nameLineEdit->text().isEmpty())
        return;
    myCarStationModel->setTable("mycarstation");
    QString strFilter = QString("type = %1 and large = %2\
                                 and electric = %3 and rentstate = '0' and ownername = ''\
                                 or ownername is null")
                        .arg(typeRadioGroup->checkedId())
                        .arg(largeRadioGroup->checkedId())
                        .arg(electRadioGroup->checkedId());
    qDebug() << "strFilter: " << strFilter;
    myCarStationModel->setFilter(strFilter);
    myCarStationModel->select();
    if(0 == myCarStationModel->rowCount())
    {
        QMessageBox::information(this,"提示","没有查询到符合条件的车位",QMessageBox::Yes);
        return;
    }
    QSqlRecord record=myCarStationModel->record(0);

    record.setValue("ownername",ui->nameLineEdit->text());
    // record.setValue("carnum",ui->carNumLineEdit->text());
    record.setValue("paystate","未缴费");
    myCarStationModel->setRecord(0, record);
    if(myCarStationModel->submitAll())
    {
        QMessageBox::information(this,"提示","申请成功",QMessageBox::Yes);
        ui->nameLineEdit->clear();
        this->close();
    }
    else
    {
        QMessageBox::information(this,"提示","没有查询到符合条件的车位",QMessageBox::Yes);
    }
}

void applycarstation::on_applyCarStationReturnBtn_clicked()
{
    this->close();
}