//
// Created by 56303 on 2025/11/2.
//

#ifndef INTELLIGENTCOMMUNITY2_LOGINDIALOG_H
#define INTELLIGENTCOMMUNITY2_LOGINDIALOG_H

#include <QWidget>
#include <QMessageBox>
#include <QButtonGroup>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QDebug>
#include "managermanage.h"
#include "workermanage.h"
#include "ownermanage.h"


QT_BEGIN_NAMESPACE

namespace Ui {
    class logindialog;
}

QT_END_NAMESPACE

class logindialog : public QWidget {
    Q_OBJECT

public:
    explicit logindialog(QWidget *parent = 0);
    ~logindialog();
    void clearAll();
    bool judgeEmpty();
    // static QString currentUsername;

private:
    Ui::logindialog *ui;
    QButtonGroup *radioGroup;
    managermanage *manager;
    workermanage *worker;
    ownermanage *owner;
    QSqlTableModel *model;

signals:
    void toManagerManage(QString, QString);
    void toWorkerManage(QString,QString);
    void toOwnnerManage(QString,QString);

private slots:
    void exitbtnSlot();
    void loginbtnSlot();
};

#endif //INTELLIGENTCOMMUNITY2_LOGINDIALOG_H