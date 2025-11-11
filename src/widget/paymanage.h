//
// Created by 56303 on 2025/11/5.
//

#ifndef INTELLIGENTCOMMUNITY2_PAYMANAGE_H
#define INTELLIGENTCOMMUNITY2_PAYMANAGE_H

#include <QWidget>
#include <QSqlTableModel>
#include <QButtonGroup>
#include <QMessageBox>
#include <QSqlError>


QT_BEGIN_NAMESPACE

namespace Ui {
    class paymanage;
}

QT_END_NAMESPACE

class paymanage : public QWidget {
    Q_OBJECT

public:
    explicit paymanage(QWidget *parent = 0);

    ~paymanage();

private:
    Ui::paymanage *ui;
    QSqlTableModel *payModel;
    QButtonGroup *payStatusGroup;

private slots:
    void on_squreBtn_clicked();

    // void on_payConfirmBtn_clicked();

    void on_pushButton_clicked();
};


#endif //INTELLIGENTCOMMUNITY2_PAYMANAGE_H