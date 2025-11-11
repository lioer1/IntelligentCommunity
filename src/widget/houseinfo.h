//
// Created by 56303 on 2025/11/4.
//

#ifndef INTELLIGENTCOMMUNITY2_HOUSEINFO_H
#define INTELLIGENTCOMMUNITY2_HOUSEINFO_H

#include <QWidget>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRecord>
#include <QDebug>


QT_BEGIN_NAMESPACE

namespace Ui {
    class houseinfo;
}

QT_END_NAMESPACE

class houseinfo : public QWidget {
    Q_OBJECT

public:
    explicit houseinfo(QWidget *parent = 0);

    ~houseinfo();

private:
    Ui::houseinfo *ui;
    QSqlTableModel *houseInfoModel;

    bool judgeEmpty();
    void clearAll();

private slots:
    void on_houseInfoConfirmBtn_clicked();
    void on_houseInfoReturnBtn_clicked();
};


#endif //INTELLIGENTCOMMUNITY2_HOUSEINFO_H