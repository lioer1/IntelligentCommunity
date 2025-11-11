//
// Created by 56303 on 2025/11/6.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ownermanage.h" resolved

#include "ownermanage.h"
#include "ui_ownermanage.h"
#include "ownerpayself.h"
#include "issueassessment.h"
#include "logindialog.h"

ownermanage::ownermanage(QWidget *parent) : QMainWindow(parent), ui(new Ui::ownermanage) {
    ui->setupUi(this);
    ui->toolBar->setIconSize(QSize(50,50));

    //创建一个文本编辑器
    ownerTableView=new QTableView;
    //textEdit=new QPlainTextEdit;

    //设置文本编辑器为中心部件
    setCentralWidget(ownerTableView);

    //设置model实现与数据库交互
    ownerModel=new QSqlTableModel(this);
    ownerQueryModel = new QSqlQueryModel;
    ownerModel->setTable("owner");
    ownerModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ownerModel->removeColumns(5,5);/*?*/
}

ownermanage::~ownermanage() {
    delete ui;
}

void ownermanage::on_applyCarStationAct_triggered()
{
    applyCarStation=new applycarstation;
    applyCarStation->show();
}
// 显示我的车位信息
void ownermanage::on_showCarStationAct_triggered()
{
    ownerModel->setTable("mycarstation");
    QString strFilter = QString("ownername = '%1'").arg(this->windowTitle().trimmed());
    qDebug() << "strFilter:" << strFilter;
    ownerModel->setFilter(strFilter);
    ownerModel->select();
    ownerModel->setHeaderData(0,Qt::Horizontal,tr("车位号"));
    ownerModel->setHeaderData(1,Qt::Horizontal,tr("地上/地下"));
    ownerModel->setHeaderData(2,Qt::Horizontal,tr("大/小"));
    ownerModel->setHeaderData(3,Qt::Horizontal,tr("能否充电"));
    ownerModel->setHeaderData(4,Qt::Horizontal,tr("所属业主"));
    ownerModel->setHeaderData(5,Qt::Horizontal,tr("待租/已租"));
    ownerModel->setHeaderData(6,Qt::Horizontal,tr("缴费状态"));
    ownerTableView->setModel(ownerModel);
}
// 自助缴费
void ownermanage::on_payAct_triggered()
{
    ownerpayself *pPay = new ownerpayself();
    QString strOwner = this->windowTitle();
    pPay->setWindowTitle(strOwner);
    pPay->show();
}
//故障报修
void ownermanage::on_issueReportAct_triggered()
{
    issue=new issueinfo;
    issue->setUserName(this->windowTitle().trimmed());
    issue->show();
}
// 维修进度
void ownermanage::on_issueProcessAct_triggered()
{
    ownerState = 2;
    QString strSql = QString("ownername = '%1'").arg(this->windowTitle().trimmed());
    ownerModel->setTable("errorinfo");
    ownerModel->setFilter(strSql);
    ownerModel->select();
    ownerModel->setHeaderData(0,Qt::Horizontal,tr("报修人"));
    ownerModel->setHeaderData(1,Qt::Horizontal,tr("故障信息"));
    ownerModel->setHeaderData(2,Qt::Horizontal,tr("报修记录人"));
    ownerModel->setHeaderData(3,Qt::Horizontal,tr("报修时间"));
    ownerModel->setHeaderData(4,Qt::Horizontal,tr("报修状态"));
    ownerModel->setHeaderData(5,Qt::Horizontal,tr("处理时间"));
    ownerModel->setHeaderData(6,Qt::Horizontal,tr("维修评价"));
    ownerTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ownerTableView->setModel(ownerModel);
}
// 维修评价
void ownermanage::on_issueEvaluateAct_triggered()
{
    if(2 ==  ownerState)
    {
        int n = ownerTableView->currentIndex().row();
        QString strInfo = ownerModel->record(n).value("errortime").toString();
        issueassessment *p = new issueassessment(this);
        p->setMessageIndex(strInfo);
        p->exec();

    }
    ownerModel->select();
}


void ownermanage::on_payShowAct_triggered()
{
    ownerModel->setTable("priceRecord");
    QString strFilter = QString("ownername = '%1'").arg(this->windowTitle().trimmed());
    ownerModel->setFilter(strFilter);
    ownerModel->select();

    ownerModel->setHeaderData(0,Qt::Horizontal,tr("缴费人"));
    ownerModel->setHeaderData(1,Qt::Horizontal,tr("缴费类型"));
    ownerModel->setHeaderData(2,Qt::Horizontal,tr("缴费金额"));
    ownerModel->setHeaderData(3,Qt::Horizontal,tr("缴费时间"));
    ownerTableView->setModel(ownerModel);
}
