//
// Created by 56303 on 2025/11/3.
//

// You may need to build the project (run Qt uic code generator) to get "ui_managermanage.h" resolved

#include <QSqlQuery>
#include <QMessageBox>
#include "managermanage.h"
#include "ui_managermanage.h"
#include "initsystem.h"

managermanage::managermanage(QWidget *parent) : QMainWindow(parent), ui(new Ui::managermanage) {
    ui->setupUi(this);
    //创建人事管理下拉的菜单栏
    createActions();
    //创建菜单目录，把下拉菜单的内容加入到menu中
    createMenus();
    //创建工具栏
    createToolBars();

    //创建一个文本编辑器
    tableView=new QTableView;
    //textEdit=new QPlainTextEdit;

    //设置文本编辑器为中心部件
    setCentralWidget(tableView);

    //设置model实现与数据库交互
    model=new QSqlTableModel(this);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    status=0;
}

managermanage::~managermanage() {
    delete ui;
}

void managermanage::createActions() {
    showWorkerAct = new QAction(QIcon(":/resources/image/show.png"),tr("查看人员"), this);
    showWorkerAct->setStatusTip(tr("查看员工"));
    connect(showWorkerAct,SIGNAL(triggered()),this,SLOT(showWorkerSlot()));

    addWorkerAct=new QAction(QIcon(":/resources/image/add.png"), tr("添加人员"), this);
    //addWorkerAct->setShortcuts(QKeySequence::Add);
    addWorkerAct->setStatusTip(tr("添加员工"));
    connect(addWorkerAct, SIGNAL(triggered()), this, SLOT(addWorkerSlot()));

    //修改工作人员
    alterWorkerAct=new QAction(QIcon(":/resources/image/free.png"), tr("修改人员"), this);
    //addWorkerAct->setShortcuts(QKeySequence::Add);
    alterWorkerAct->setStatusTip(tr("修改员工"));
    connect(alterWorkerAct, SIGNAL(triggered()), this, SLOT(alterWorkerSlot()));

    //删除工作选定人员
    delWorkerAct=new QAction(QIcon(":/resources/image/del.png"), tr("删除人员"), this);
    //delWorkerAct->setShortcuts(QKeySequence::Del);
    delWorkerAct->setStatusTip(tr("删除员工"));
    connect(delWorkerAct, SIGNAL(triggered()), this, SLOT(delWorkerSlot()));

    //查看请假
    freeApproveAct=new QAction(QIcon(":/resources/image/free1.png"), tr("员工请假"), this);
    //freeApproveAct->setShortcuts(QKeySequence::Add);
    freeApproveAct->setStatusTip(tr("请假审批"));
    connect(freeApproveAct, SIGNAL(triggered()), this, SLOT(freeWorkerSlot()));

    //请假审批
    freeConfirmAct=new QAction(QIcon(":/resources/image/confirm2.png"), tr("请假审批"), this);
    //freeApproveAct->setShortcuts(QKeySequence::Add);
    freeConfirmAct->setStatusTip(tr("请假审批"));
    connect(freeConfirmAct, SIGNAL(triggered()), this, SLOT(freeConfirmSlot()));

    //查看出勤
    queryrAttendAct=new QAction(QIcon(":/resources/image/attend1.png"), tr("查看出勤"), this);
    //queryAttendAct->setShortcuts(QKeySequence::Add);
    queryrAttendAct->setStatusTip(tr("查看出勤"));
    connect(queryrAttendAct, SIGNAL(triggered()), this, SLOT(attendWorkerSlot()));

    //参数设置
    setParameterAct=new QAction(QIcon(":/resources/image/attend.png"), tr("参数设置"), this);
    //queryAttendAct->setShortcuts(QKeySequence::Add);
    setParameterAct->setStatusTip(tr("设置系统参数"));
    connect(setParameterAct, SIGNAL(triggered()), this, SLOT(initSystemSlot()));

    initSystemAct=new QAction(QIcon(":/resources/image/attend.png"), tr("系统初始化"), this);
    //queryAttendAct->setShortcuts(QKeySequence::Add);
    initSystemAct->setStatusTip(tr("系统初始化"));
    connect(initSystemAct, SIGNAL(triggered()), this, SLOT(initSystemSlot()));

}

void managermanage::createToolBars() {
    workerManageToolBar=addToolBar(tr("人事管理"));
    workerManageToolBar->addAction(showWorkerAct);
    workerManageToolBar->addAction(addWorkerAct);
    workerManageToolBar->addAction(alterWorkerAct);
    workerManageToolBar->addAction(delWorkerAct);
    workerManageToolBar->addSeparator();
    workerManageToolBar->addSeparator();
    workerManageToolBar->addAction(freeApproveAct);
    workerManageToolBar->addAction(freeConfirmAct);
    workerManageToolBar->addAction(queryrAttendAct);
    workerManageToolBar->setIconSize(QSize(50,50));

    systemParameterToolBar=addToolBar(tr("系统参数"));
    //systemParameterToolBar->addAction(setParameterAct);
    systemParameterToolBar->addAction(initSystemAct);
    systemParameterToolBar->setIconSize(QSize(50,50));
}

void managermanage::createMenus() {
    workerManageMenu=menuBar()->addMenu(tr("人事管理"));
    workerManageMenu->addAction(showWorkerAct);
    workerManageMenu->addAction(addWorkerAct);
    workerManageMenu->addAction(alterWorkerAct);
    workerManageMenu->addAction(delWorkerAct);
    workerManageMenu->addSeparator();
    workerManageMenu->addAction(freeApproveAct);
    workerManageMenu->addAction(freeConfirmAct);
    workerManageMenu->addAction(queryrAttendAct);

    systemParameterMenu=menuBar()->addMenu(tr("系统参数"));
    systemParameterMenu->addAction(initSystemAct);
}


void managermanage::test()
{

}
void managermanage::showWorkerSlot()
{
    status=1;
    model->setTable("worker");
    model->select();
    model->setHeaderData(0,Qt::Horizontal,tr("物业人员"));
    model->setHeaderData(1,Qt::Horizontal,tr("密码"));
    model->setHeaderData(2,Qt::Horizontal,tr("电话"));
    model->setHeaderData(3,Qt::Horizontal,tr("是否管理员"));
    tableView->setModel(model);
}


void managermanage::addWorkerSlot()
{
    if(status==1)
    {
        workerInfo=new workerinfo;
        workerInfo->show();
    }
}

void managermanage::alterWorkerSlot()
{
   if(status==1)
    {
       model->database().transaction();
       if(model->submitAll())
       {
           model->database().commit();
       }
       else
       {
           model->database().rollback();
           QMessageBox::warning(this,tr("tabalModel"),
                             tr("数据库错误:%1").arg(model->lastError().text()));
       }
   }
}

void managermanage::refreshTableViewSlot()
{
    model->setTable("worker");
    model->select();
    tableView->setModel(model);
}

void managermanage::delWorkerSlot()
{
    if(status==1)
    {
        //获取当前鼠标行
        int curRow=tableView->currentIndex().row();
        //删除当前行
        model->removeRow(curRow);
        int ok=QMessageBox::warning(this,tr("删除当前人员")
                                    ,tr("你确定删除此人员吗？"),QMessageBox::Yes,QMessageBox::No);
        if(ok==QMessageBox::No)
        {
            model->revertAll();
        }
        else
        {
            model->submitAll();
            emit EmitWorkerChanged();

        }
    }
}

void managermanage::freeWorkerSlot()
{
    status=2;
    model->setTable("workerattend");
    model->setFilter("workfree='请假' and freestatus='未批准'");
    model->select();
    setTableHead();
}

void managermanage::freeConfirmSlot()
{
    if(status==2)
    {
        alterCurRow();
        model->setTable("workerattend");
        model->setFilter("workfree='请假'");
        setTableHead();
    }

}

void managermanage::attendWorkerSlot()
{
    status=3;
    model->setTable("workerattend");
    model->setFilter("workfree='出勤'");
    setTableHead();
}
void managermanage::alterCurRow()
{
    model->database().transaction();
    if(model->submitAll())
    {
        model->database().commit();
        //qDebug("alter1");
    }
    else
    {
        model->database().rollback();
        QMessageBox::warning(this,tr("attendWorkerModel"),
                             tr("数据库错误:%1").arg(model->lastError().text()));
    }
}

void managermanage::setTableHead()
{
    model->setHeaderData(0,Qt::Horizontal,tr("员工账号"));
    model->setHeaderData(1,Qt::Horizontal,tr("请假/出勤"));
    model->setHeaderData(2,Qt::Horizontal,tr("请假/出勤时间"));
    model->setHeaderData(3,Qt::Horizontal,tr("请假理由"));
    model->setHeaderData(4,Qt::Horizontal,tr("是否批准"));
    model->select();
    tableView->setModel(model);
}
// 系统初始化
void managermanage::initSystemSlot()
{
    initsystem  *pInit = new initsystem;
    pInit->show();
}