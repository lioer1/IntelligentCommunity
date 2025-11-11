//
// Created by 56303 on 2025/11/4.
//

// You may need to build the project (run Qt uic code generator) to get "ui_workermanage.h" resolved

#include "workermanage.h"
#include "ui_workermanage.h"


workermanage::workermanage(QWidget *parent) : QMainWindow(parent), ui(new Ui::workermanage) {
    ui->setupUi(this);
    ui->toolBar->setIconSize(QSize(50,50));


    lable=new QLabel;
    setCentralWidget(lable);


    QImage *img=new QImage;
    img->load("/image/show.png");
    lable->clear();//清空
    lable->setPixmap(QPixmap::fromImage(*img));//加载到Label标签
    lable->show();//显示

    //创建一个中心部件
    workerTableView=new QTableView;
    setCentralWidget(workerTableView);

    //设置model实现与数据库交互
    workerModel=new QSqlTableModel(this);
    workerModel->setEditStrategy(QSqlTableModel::OnManualSubmit);

    //owner=new SetOwner;
    //setCentralWidget(owner);

    workerManageStatus=0;
    connect(ui->showOwnerAct, SIGNAL(triggered()), this, SLOT(showOwnerSlot()));
    connect(ui->addOwnerAct, SIGNAL(triggered()), this, SLOT(addOwnerSlot()));
    connect(ui->alterOwnerAct,SIGNAL(triggered(bool)),this,SLOT(alterOwnerSlot()));
    connect(ui->delOwnerAct, SIGNAL(triggered()), this, SLOT(delOwnerSlot()));
    connect(ui->addHouseAct, SIGNAL(triggered()), this, SLOT(addHouseSlot()));

    connect(ui->addCarStationAct,SIGNAL(triggered()),this,SLOT(addCarStationSlot()));
    connect(ui->showCarStationAct, SIGNAL(triggered()), this, SLOT(showCarStationSlot()));
    connect(ui->alterCarStationAct,SIGNAL(triggered()),this,SLOT(alterCarStationSlot()));
    connect(ui->delCarStationAct,SIGNAL(triggered()),this,SLOT(delCarStationSlot()));
    connect(ui->carStationRenAct, SIGNAL(triggered()), this, SLOT(carStationRentActSlot()));
    //connect(ui->houseInfoAct, SIGNAL(triggered()), this, SLOT(houseInfoSlot()));

    connect(ui->priceManageAct, SIGNAL(triggered()), this, SLOT(priceManageSlot()));
    connect(ui->payInfoAct, SIGNAL(triggered()), this, SLOT(payInfoSlot()));
    connect(ui->payAct, SIGNAL(triggered()), this, SLOT(paySlot()));

    connect(ui->issueShowAct,SIGNAL(triggered(bool)),this,SLOT(issueShowSlot()));
    connect(ui->issueRepairAct,SIGNAL(triggered(bool)),this,SLOT(issueRepairSlot()));


    connect(ui->freeAct, SIGNAL(triggered()), this, SLOT(freeSlot()));
    connect(ui->freeConfirmAct, SIGNAL(triggered()), this, SLOT(freeConfirmSlot()));
    connect(ui->attendAct, SIGNAL(triggered()), this, SLOT(attendSlot()));

    //connect(this,SIGNAL(EmitWorkerChanged()),this,SLOT(refreshTableViewSlot()));
    //connect(workerInfo,SIGNAL(EmitWorkerChanged()),this,SLOT(refreshTableViewSlot()));
}

workermanage::~workermanage() {
    delete ui;
}

void workermanage::showOwnerSlot()
{
    workerManageStatus=1;
    workerModel->setTable("houseowner");

    workerModel->setHeaderData(0,Qt::Horizontal,tr("业主姓名"));
    workerModel->setHeaderData(1,Qt::Horizontal,tr("业主密码"));
    workerModel->setHeaderData(2,Qt::Horizontal,tr("地址"));
    workerModel->setHeaderData(3,Qt::Horizontal,tr("电话"));
    workerModel->select();
    workerTableView->setModel(workerModel);
}

void workermanage::addOwnerSlot()
{
    if(workerManageStatus==1)
    {
        ownerInfo=new ownerinfo;
        ownerInfo->show();
    }
}
void workermanage::alterOwnerSlot()
{
    if(workerManageStatus==1)
    {
        alterCurRow();
    }
}

void workermanage::delOwnerSlot()
{
    if(workerManageStatus==1)
    {
        delCurRow();
    }
}

void workermanage::showCarStationSlot()
{
    workerManageStatus=2;

    workerModel->setTable("mycarstation");
    workerModel->select();
    workerModel->setHeaderData(0,Qt::Horizontal,tr("车位号"));
    workerModel->setHeaderData(1,Qt::Horizontal,tr("地上/地下"));
    workerModel->setHeaderData(2,Qt::Horizontal,tr("大/小"));
    workerModel->setHeaderData(3,Qt::Horizontal,tr("能否充电"));
    workerModel->setHeaderData(4,Qt::Horizontal,tr("所属业主"));
    workerModel->setHeaderData(5,Qt::Horizontal,tr("缴费状态"));
    workerTableView->setModel(workerModel);
}

void workermanage::carStationRentActSlot()
{
    if(workerManageStatus == 2)
    {
        workerModel->setTable("mycarstation");
        workerModel->setFilter("ownername is null ");
        workerModel->select();
        workerTableView->setModel(workerModel);
    }
}

void workermanage::addHouseSlot()
{
    houseInfo=new houseinfo;
    houseInfo->show();
}

void workermanage::priceManageSlot()
{
    priceManage=new pricemanage;
    priceManage->show();
}

void workermanage::payInfoSlot()
{
    workerModel->setTable("priceRecord");
    workerModel->select();
    workerModel->setHeaderData(0,Qt::Horizontal,tr("缴费人"));
    workerModel->setHeaderData(1,Qt::Horizontal,tr("缴费类型"));
    workerModel->setHeaderData(2,Qt::Horizontal,tr("缴费金额"));
    workerModel->setHeaderData(3,Qt::Horizontal,tr("缴费时间"));
    workerTableView->setModel(workerModel);
}

void workermanage::paySlot()
{
    payManage=new paymanage;
    payManage->show();
}

void workermanage::issueShowSlot()
{
    workerManageStatus=3;
    workerModel->setTable("errorinfo");
    workerModel->select();
    workerModel->setHeaderData(0,Qt::Horizontal,tr("报修人"));
    workerModel->setHeaderData(1,Qt::Horizontal,tr("故障信息"));
    workerModel->setHeaderData(2,Qt::Horizontal,tr("报修记录人"));
    workerModel->setHeaderData(3,Qt::Horizontal,tr("报修时间"));
    workerModel->setHeaderData(4,Qt::Horizontal,tr("报修状态"));
    workerModel->setHeaderData(5,Qt::Horizontal,tr("处理时间"));
    workerModel->setHeaderData(6,Qt::Horizontal,tr("维修评价"));
    workerTableView->setModel(workerModel);
}

void workermanage::issueRepairSlot()
{
    if(workerManageStatus==3)
    {
        alterCurRow();
    }
}
void workermanage::freeSlot()
{
    workerManageStatus=4;
    workFree=new workerfree;
    workFree->show();
}
void workermanage::freeConfirmSlot()
{
    if(workerManageStatus==4)
    {
        QString name = this->windowTitle();
        workerModel->setTable("workerattend");
        workerModel->setFilter(QString("freeact ='未销假'"));
        setTableHead();
    }

}

void workermanage::attendSlot()
{
    workerManageStatus=5;
    QString name = this->windowTitle();

    workerModel->setTable("workerattend");
    workerModel->setFilter(QString("workfree= '出勤'"));
    setTableHead();
}

void workermanage::refreshTableViewSlot()
{

}

void workermanage::addCarStationSlot()
{
    if(workerManageStatus==2)
    {
        carStationInfo=new carstationinfo;
        carStationInfo->show();
    }
}
void workermanage::delCarStationSlot()
{
    if(workerManageStatus==2)
    {
        delCurRow();
    }
}

void workermanage::alterCarStationSlot()
{
    if(workerManageStatus==2)
    {
         alterCurRow();
    }
}

void workermanage::delCurRow()
{
    //获取当前鼠标行
    int curRow=workerTableView->currentIndex().row();
    //删除当前行
    workerModel->removeRow(curRow);
    int ok=QMessageBox::warning(this,tr("删除当前信息")
                                ,tr("你确定删除此信息吗？"),QMessageBox::Yes,QMessageBox::No);
    if(ok==QMessageBox::No)
    {
        workerModel->revertAll();
    }
    else
    {
        workerModel->submitAll();
    }
}
void workermanage::alterCurRow()
{
    workerModel->database().transaction();
    if(workerModel->submitAll())
    {
        workerModel->database().commit();
    }
    else
    {
        workerModel->database().rollback();
        QMessageBox::warning(this,tr("tabalModel"),
                             tr("数据库错误:% 1").arg(workerModel->lastError().text()));
    }
}

void workermanage::setTableHead()
{
    workerModel->setHeaderData(0,Qt::Horizontal,tr("员工账号"));
    workerModel->setHeaderData(1,Qt::Horizontal,tr("请假/出勤"));
    workerModel->setHeaderData(2,Qt::Horizontal,tr("请假/出勤时间"));
    workerModel->setHeaderData(3,Qt::Horizontal,tr("请假理由"));
    workerModel->setHeaderData(4,Qt::Horizontal,tr("是否批准"));
    workerModel->setHeaderData(5,Qt::Horizontal,tr("是否销假"));
    workerModel->select();
    workerTableView->setModel(workerModel);
}