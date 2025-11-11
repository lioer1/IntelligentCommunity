//
// Created by 56303 on 2025/11/4.
//

#ifndef INTELLIGENTCOMMUNITY2_OWNERINFO_H
#define INTELLIGENTCOMMUNITY2_OWNERINFO_H

#include <QWidget>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRecord>
#include <QDebug>

QT_BEGIN_NAMESPACE

namespace Ui {
    class ownerinfo;
}

QT_END_NAMESPACE

class ownerinfo : public QWidget {
    Q_OBJECT

public:
    explicit ownerinfo(QWidget *parent = 0);

    ~ownerinfo();

private:
    Ui::ownerinfo *ui;
    QSqlTableModel *model;
    bool judgeEmpty();
    void clearAll();

signals:
    void EmitWorkerChanged();
private slots:
    void on_ownerInfoConfirmBtn_clicked();
    void on_ownerInfoReturnBtn_clicked();
};


#endif //INTELLIGENTCOMMUNITY2_OWNERINFO_H