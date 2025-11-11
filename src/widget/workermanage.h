//
// Created by 56303 on 2025/11/4.
//

#ifndef INTELLIGENTCOMMUNITY2_WORKERMANAGE_H
#define INTELLIGENTCOMMUNITY2_WORKERMANAGE_H

#include <QMainWindow>
#include <QTableView>
#include <QSqlTableModel>
#include <QLabel>
#include <QDebug>
#include <QSqlError>
#include <QString>
#include "ownerinfo.h"
#include "houseinfo.h"
#include "carstationinfo.h"
#include "workerfree.h"
#include "setowner.h"
#include "pricemanage.h"
#include "paymanage.h"

QT_BEGIN_NAMESPACE

namespace Ui {
    class workermanage;
}

QT_END_NAMESPACE

class workermanage : public QMainWindow {
    Q_OBJECT

public:
    explicit workermanage(QWidget *parent = 0);

    ~workermanage();

private:
    Ui::workermanage *ui;
    QLabel *lable;
    QTableView *workerTableView;
    QSqlTableModel *workerModel;

    ownerinfo *ownerInfo;
    houseinfo *houseInfo;
    carstationinfo *carStationInfo;
    workerfree *workFree;
    setowner *owner;
    paymanage *payManage;
    pricemanage *priceManage;
    int workerManageStatus;

    void delCurRow();
    void alterCurRow();
    void setTableHead();

signals:
    //void EmitToManagerManage();
    void EmitOwnerChanged();

private slots:
    void showOwnerSlot();
    void addOwnerSlot();
    void addHouseSlot();
    void alterOwnerSlot();
    void delOwnerSlot();

    void showCarStationSlot();
    void addCarStationSlot();
    void alterCarStationSlot();
    void delCarStationSlot();
    void carStationRentActSlot();
    //void houseInfoSlot();
    void priceManageSlot();
    void payInfoSlot();
    void paySlot();

    void issueShowSlot();
    void issueRepairSlot();

    void freeSlot();
    void freeConfirmSlot();
    void attendSlot();

    //void attendWorkerSlot();
    void refreshTableViewSlot();
};


#endif //INTELLIGENTCOMMUNITY2_WORKERMANAGE_H