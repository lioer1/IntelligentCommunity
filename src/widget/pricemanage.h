//
// Created by 56303 on 2025/11/5.
//

#ifndef INTELLIGENTCOMMUNITY2_PRICEMANAGE_H
#define INTELLIGENTCOMMUNITY2_PRICEMANAGE_H

#include <QWidget>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRecord>
#include <QDebug>

QT_BEGIN_NAMESPACE

namespace Ui {
    class pricemanage;
}

QT_END_NAMESPACE

class pricemanage : public QWidget {
    Q_OBJECT

public:
    explicit pricemanage(QWidget *parent = 0);

    ~pricemanage();

private:
    Ui::pricemanage *ui;
    QSqlTableModel *priceModel;

private slots:
    void on_priceConfirmBtn_clicked();

    void on_priceReturnBtn_clicked();
};


#endif //INTELLIGENTCOMMUNITY2_PRICEMANAGE_H