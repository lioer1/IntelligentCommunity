//
// Created by 56303 on 2025/11/3.
//

// You may need to build the project (run Qt uic code generator) to get "ui_workerinfo.h" resolved

#include "workerinfo.h"
#include "ui_workerinfo.h"


workerinfo::workerinfo(QWidget *parent) : QWidget(parent), ui(new Ui::workerinfo) {
    ui->setupUi(this);
    isManagerRadioGroup = new QButtonGroup;
    isManagerRadioGroup->addButton(ui->yesradioButton,0);
    isManagerRadioGroup->addButton(ui->noradioButton,1);
    ui->noradioButton->setChecked(true);

    model = new QSqlTableModel(this);
    model->setTable("worker");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->removeColumns(5,5);/*?*/
}

workerinfo::~workerinfo() {
    delete ui;
}

void workerinfo::on_AddActBtn_clicked() {
    if (!this->judgeEmpty())
        return;
    model->select();
    int i;
    for (i=0;i<model->rowCount();i++) {
        if (model->data(model->index(i,0)).toString()==ui->worknumlineEdit->text()) {
            break;
        }
    }
    if (i!=model->rowCount()) {
        QMessageBox::information(this,"提示","该人员已经存在",QMessageBox::Yes);
        this->clearAll();
        return;
    }
    QSqlRecord record = model->record();
    record.setValue("workernum",ui->worknumlineEdit->text());
    record.setValue("workerpass",ui->workpasslineEdit->text());
    record.setValue("workerphone",ui->workphonelineEdit->text());
    if (isManagerRadioGroup->checkedId()==0) {
        record.setValue("workertype","是");
    }else {
        record.setValue("workertype","否");
    }
    model->insertRecord(-1,record);
    if (model->submitAll()) {
        QMessageBox::information(this,"提示","工作人员添加成功",QMessageBox::Yes);
        this->clearAll();
    }
}

void workerinfo::on_ReturnBtn_clicked() {
    if (ui->worknumlineEdit->text().isEmpty()&&ui->workpasslineEdit->text().isEmpty()&&ui->workphonelineEdit->text().isEmpty()) {
        emit EmitWorkerChanged();
        this->hide();
        qDebug("addworker");
        return;
    }
    if (QMessageBox::question(this,"提示","尚未保存，是否退出",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes) {
        this->hide();
    }
}


bool workerinfo::judgeEmpty() {
    if (ui->worknumlineEdit->text().isEmpty()) {
        QMessageBox::warning(this,"警告","人员编号不能为空",QMessageBox::Yes);
        return false;
    }else if (ui->workpasslineEdit->text().isEmpty()) {
        QMessageBox::warning(this,"警告","密码不能为空",QMessageBox::Yes);
        return false;
    }else
        return true;
}

void workerinfo::clearAll() {
    ui->worknumlineEdit->clear();
    ui->workpasslineEdit->clear();
    ui->workphonelineEdit->clear();
}