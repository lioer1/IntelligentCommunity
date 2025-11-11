//
// Created by 56303 on 2025/11/3.
//

#ifndef INTELLIGENTCOMMUNITY2_MANAGERMANAGE_H
#define INTELLIGENTCOMMUNITY2_MANAGERMANAGE_H

#include <QMainWindow>
#include <QToolBar>
#include <QMenu>
#include <QDebug>
#include <QAction>
#include <QTableView>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QString>
#include <QSize>
#include <QSqlError>
#include "workerinfo.h"

QT_BEGIN_NAMESPACE

namespace Ui {
    class managermanage;
}

QT_END_NAMESPACE

class managermanage : public QMainWindow {
    Q_OBJECT

public:
    explicit managermanage(QWidget *parent = 0);

    ~managermanage();

private:
    Ui::managermanage *ui;
    QTableView *tableView;
    QSqlTableModel *model;

    QMenu *workerManageMenu;
    QMenu *systemParameterMenu;

    QToolBar *workerManageToolBar;
    QToolBar *systemParameterToolBar;

    QAction *showWorkerAct;
    QAction *addWorkerAct;
    QAction *alterWorkerAct;
    QAction *delWorkerAct;

    QAction *freeConfirmAct;
    QAction *freeApproveAct;
    QAction *queryrAttendAct;

    QAction *setParameterAct;
    QAction *initSystemAct;

    workerinfo *workerInfo;
    int status;

    void createMenus();
    void createActions();
    void createToolBars();
    void alterCurRow();
    void setTableHead();

signals:
    void EmitWorkerChanged();

private slots:
    void test();
    void showWorkerSlot();
    void addWorkerSlot();
    void alterWorkerSlot();
    void delWorkerSlot();

    void freeWorkerSlot();
    void freeConfirmSlot();
    void attendWorkerSlot();
    void refreshTableViewSlot();
    void initSystemSlot();
};


#endif //INTELLIGENTCOMMUNITY2_MANAGERMANAGE_H