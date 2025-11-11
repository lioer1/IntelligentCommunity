//
// Created by 56303 on 2025/11/4.
//

// You may need to build the project (run Qt uic code generator) to get "ui_carstationinfo.h" resolved

#include "carstationinfo.h"
#include "ui_carstationinfo.h"


carstationinfo::carstationinfo(QWidget *parent) : QWidget(parent), ui(new Ui::carstationinfo) {
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

    rentRadioGRroup=new QButtonGroup;
    rentRadioGRroup->addButton(ui->carStationWaitRentRadioBtn,0);
    rentRadioGRroup->addButton(ui->carStationRentedRadioBtn,1);
    ui->carStationWaitRentRadioBtn->setChecked(true);


    carStationModel=new QSqlTableModel(this);
    carStationModel->setTable("mycarstation");
    carStationModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
}

carstationinfo::~carstationinfo() {
    delete ui;
}

void carstationinfo::on_addCarStationConfirmBtn_clicked()
{
    if(!this->judgeEmpty())
        return;
    carStationModel->select();
    int i;
    for(i=0;i<carStationModel->rowCount();i++)
    {
        if(carStationModel->data(carStationModel->index(i,0)).toString()==ui->carStationNumLineEdit->text())
        {
            break;
        }
    }
    if(i!=carStationModel->rowCount())
    {
        QMessageBox::information(this,"提示","该车位信息已经存在",QMessageBox::Yes);
        this->clearAll();
        return;
    }
    QSqlRecord record=carStationModel->record();
    record.setValue("carnum",ui->carStationNumLineEdit->text());
    record.setValue("type",typeRadioGroup->checkedId());
    record.setValue("large",largeRadioGroup->checkedId());
    record.setValue("electric",electRadioGroup->checkedId());
    record.setValue("rentstate",rentRadioGRroup->checkedId());

    carStationModel->insertRecord(-1,record);
    if(carStationModel->submitAll())
    {
        QMessageBox::information(this,"提示","车位信息添加成功",QMessageBox::Yes);
        this->clearAll();
    }
}

void carstationinfo::on_addCarStationReturnBtn_clicked()
{
    if(ui->carStationNumLineEdit->text().isEmpty())
    {
        //emit EmitWorkerChanged();
        this->hide();
        return;

    }
    if(QMessageBox::question(this,"提示","尚未保存，是否退出",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        //emit EmitToTeacherManage();
        this->hide();
        carStationModel->select();
        //刷新tableview
    }
}

bool carstationinfo::judgeEmpty()
{
    if(ui->carStationNumLineEdit->text().isEmpty()&&(typeRadioGroup->checkedId()==-1))
    {
        QMessageBox::warning(this,"警告","车位信息不能为空",QMessageBox::Yes);
        return false;
    }
    else
        return true;
}
void carstationinfo::clearAll()
{
    ui->carStationNumLineEdit->clear();
}