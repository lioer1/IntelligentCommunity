//
// Created by 56303 on 2025/11/6.
//

#ifndef INTELLIGENTCOMMUNITY2_OWNERMANAGE_H
#define INTELLIGENTCOMMUNITY2_OWNERMANAGE_H

#include <QMainWindow>
#include <QTableView>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>

#include "issueinfo.h"
#include "applycarstation.h"

QT_BEGIN_NAMESPACE

namespace Ui {
    class ownermanage;
}

QT_END_NAMESPACE

class ownermanage : public QMainWindow {
    Q_OBJECT

public:
    explicit ownermanage(QWidget *parent = 0);

    ~ownermanage();

private:
    Ui::ownermanage *ui;
    QTableView *ownerTableView;
    QSqlQueryModel *ownerQueryModel;
    QSqlTableModel *ownerModel;
    issueinfo *issue;
    applycarstation *applyCarStation;
    int ownerState;

signals:
    //void EmitToManagerManage();
    void EmitOwnerChanged();

private slots:
    void on_applyCarStationAct_triggered();
    void on_showCarStationAct_triggered();
    void on_payAct_triggered();
    void on_issueReportAct_triggered();
    void on_issueProcessAct_triggered();
    void on_issueEvaluateAct_triggered();
    void on_payShowAct_triggered();
};


#endif //INTELLIGENTCOMMUNITY2_OWNERMANAGE_H