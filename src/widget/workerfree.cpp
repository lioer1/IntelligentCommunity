//
// Created by 56303 on 2025/11/5.
//

// You may need to build the project (run Qt uic code generator) to get "ui_workerfree.h" resolved

#include "workerfree.h"
#include "ui_workerfree.h"


workerfree::workerfree(QWidget *parent) : QWidget(parent), ui(new Ui::workerfree) {
    ui->setupUi(this);
    workerFreeModel=new QSqlTableModel(this);
    workerFreeModel->setEditStrategy(QSqlTableModel::OnManualSubmit);

    freeInfoRadioGroup=new QButtonGroup(this);
    freeInfoRadioGroup->addButton(ui->freeRadioButton,1);
    freeInfoRadioGroup->addButton(ui->attendRadioButton,0);
    ui->attendRadioButton->setChecked(true);

    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd");
    ui->freeTimeLineEdit->setText(str);

    ui->freeTextLineEdit->hide();
    ui->label_5->hide();
}

workerfree::~workerfree() {
    delete ui;
}

void workerfree::on_workerFreeBtn_clicked()
{
    if(!this->judgeEmpty())
        return;
    workerFreeModel->setTable("worker");
    workerFreeModel->select();
    int i,j=0;
    for(i=0;i<workerFreeModel->rowCount();i++)
    {
        if(workerFreeModel->data(workerFreeModel->index(i,0)).toString()==ui->workerNameLineEdit->text())
        {
           j=1;
           break;
        }
        else
            j=0;
    }
    qDebug()<<j<<workerFreeModel->rowCount();

    if(j==0)
    {
        QMessageBox::information(this,"提示","不存在此员工信息",QMessageBox::Yes);
        this->clearAll();
        return;
    }
    workerFreeModel->setTable("workerattend");
    QSqlRecord record=workerFreeModel->record();
    record.setValue("workernum",ui->workerNameLineEdit->text());
    if(freeInfoRadioGroup->checkedId()==0)
    {
        record.setValue("workfree","出勤");
        record.setValue("freetime",ui->freeTimeLineEdit->text());
    }
    else
    {
        record.setValue("workfree","请假");
        record.setValue("freetime",ui->freeTimeLineEdit->text());
        record.setValue("freetext",ui->freeTextLineEdit->text());
        record.setValue("freestatus","未批准");
    }

    workerFreeModel->insertRecord(-1,record);
    if(workerFreeModel->submitAll())
    {
        QMessageBox::information(this,"提示","提交成功",QMessageBox::Yes);
        this->clearAll();
    }
    else
    {
        QMessageBox::information(this,"提示","提交失败",QMessageBox::Yes);
        this->clearAll();
    }

}

void workerfree::on_workerFreeReturnBtn_clicked()
{
    if(ui->workerNameLineEdit->text().isEmpty()&&ui->freeTimeLineEdit->text().isEmpty())
    {
        this->hide();
        return;
    }
    if(QMessageBox::question(this,"提示","是否取消提交",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        this->hide();
    }
}
bool workerfree::judgeEmpty()
{
    if(ui->workerNameLineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"警告","请填写请假人员姓名",QMessageBox::Yes);
        return false;
    }
    else
        return true;
}
void workerfree::clearAll()
{
    ui->workerNameLineEdit->clear();
    ui->freeTextLineEdit->clear();
}


void workerfree::on_freeRadioButton_clicked()
{
    ui->freeTextLineEdit->show();
    ui->label_5->show();
}

void workerfree::on_attendRadioButton_clicked()
{
    ui->freeTextLineEdit->hide();
    ui->label_5->hide();
}
