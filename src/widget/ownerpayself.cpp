//
// Created by 56303 on 2025/11/5.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ownerpayself.h" resolved

#include "ownerpayself.h"
#include "ui_ownerpayself.h"
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QMessageBox>
#include <QDateTime>
#include <QSqlQuery>
#include <QDebug>

ownerpayself::ownerpayself(QWidget *parent) : QWidget(parent), ui(new Ui::ownerpayself) {
    ui->setupUi(this);
    QRegExp regx("[0-9]+$");
    QValidator* validator = new QRegExpValidator(regx);
    ui->lineEdit->setValidator(validator);
}

ownerpayself::~ownerpayself() {
    delete ui;
}

void ownerpayself::on_pushButton_clicked()
{
    QString strValue = ui->lineEdit->text().trimmed();
    if(strValue.isEmpty())
    {
        QMessageBox::warning(this, tr("提示"), tr("请输入缴费金额"));
        return ;
    }
    QString strType = ui->comboBox->currentText();
    QSqlTableModel tableModel;
    tableModel.setTable("priceRecord");
    tableModel.select();
    QSqlRecord record = tableModel.record(0);
    record.setValue("ownername", ui->lineEdit_2->text().trimmed());
    record.setValue("type", strType);
    record.setValue("price", strValue);

    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss");
    record.setValue("time", str);

    tableModel.insertRecord(-1, record);
    if(tableModel.submitAll() && updateState(ui->comboBox->currentIndex()))
    {
        QMessageBox::information(this,"提示","缴费成功",QMessageBox::Yes);
        ui->lineEdit->clear();
    }
    else
    {
        QMessageBox::information(this,"提示","缴费出错，请重新缴费",QMessageBox::Yes);
    }
}

void ownerpayself::on_pushButton_2_clicked()
{
    this->close();
}
bool  ownerpayself::updateState(int nType)
{
    if(0 ==  nType)
    {
        // 车位缴费，更新车位缴费状态
        QString strSql = QString("update mycarstation set paystate = '已缴费' \
                            where ownername = '%1'").arg(ui->lineEdit_2->text().trimmed());
        QSqlQuery query;
        return query.exec(strSql);
    }
    else
    {
        return true;//其他缴费
    }
}