//
// Created by 56303 on 2025/11/5.
//

// You may need to build the project (run Qt uic code generator) to get "ui_paymanage.h" resolved

#include "paymanage.h"
#include "ui_paymanage.h"
#include "ownerpayself.h"

paymanage::paymanage(QWidget *parent) : QWidget(parent), ui(new Ui::paymanage) {
    ui->setupUi(this);
    payModel = new QSqlTableModel(this);
    payModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    payModel->setTable("priceRecord");
    payModel->select();
    payModel->setHeaderData(0,Qt::Horizontal,tr("缴费人"));
    payModel->setHeaderData(1,Qt::Horizontal,tr("缴费类型"));
    payModel->setHeaderData(2,Qt::Horizontal,tr("缴费金额"));
    payModel->setHeaderData(3,Qt::Horizontal,tr("缴费时间"));
    ui->payTableView->setModel(payModel);

    payStatusGroup=new QButtonGroup(this);
    payStatusGroup->addButton(ui->payedRadioButton,0);
    payStatusGroup->addButton(ui->payRadioButton,1);
    ui->payRadioButton->setChecked(true);
}

paymanage::~paymanage() {
    delete ui;
}

void paymanage::on_squreBtn_clicked()
{
    if(ui->ownerNameLineEdit->text().isEmpty())
    {
        if(payStatusGroup->checkedId()== 0)
        {
            payModel->setFilter("type='车位租金'");
        }
        else
        {
            payModel->setFilter("type='物业费'");
        }
    }
    else
    {
        if(payStatusGroup->checkedId()==0)
        {
            payModel->setFilter(QString("ownername= '%1'and type='车位租金'")
                                .arg(ui->ownerNameLineEdit->text()));
        }
        else
        {
            payModel->setFilter(QString("ownername= '%1'andtype='物业费'")
                                .arg(ui->ownerNameLineEdit->text()));
        }
    }
    payModel->select();
    ui->payTableView->setModel(payModel);

}

// void paymanage::on_payConfirmBtn_clicked()
// {
//
//     payModel->database().transaction();
//     if(payModel->submitAll())
//     {
//         payModel->database().commit();
//     }
//     else
//     {
//         payModel->database().rollback();
//         QMessageBox::warning(this,tr("tabalModel"),
//                              tr("数据库错误:% 1").arg(payModel->lastError().text()));
//     }
// }

void paymanage::on_pushButton_clicked()
{
    ownerpayself *p = new ownerpayself;
    p->show();
}
