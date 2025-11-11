//
// Created by 56303 on 2025/11/4.
//

#ifndef INTELLIGENTCOMMUNITY2_CARSTATIONINFO_H
#define INTELLIGENTCOMMUNITY2_CARSTATIONINFO_H

#include <QWidget>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRecord>
#include <QDebug>
#include <QButtonGroup>

QT_BEGIN_NAMESPACE

namespace Ui {
    class carstationinfo;
}

QT_END_NAMESPACE

class carstationinfo : public QWidget {
    Q_OBJECT

public:
    explicit carstationinfo(QWidget *parent = 0);

    ~carstationinfo();

private:
    Ui::carstationinfo *ui;
    QSqlTableModel *carStationModel;
    QButtonGroup *typeRadioGroup;
    QButtonGroup *largeRadioGroup;
    QButtonGroup *electRadioGroup;
    QButtonGroup *rentRadioGRroup;

    bool judgeEmpty();
    void clearAll();

private slots:
    void on_addCarStationConfirmBtn_clicked();

    void on_addCarStationReturnBtn_clicked();
};


#endif //INTELLIGENTCOMMUNITY2_CARSTATIONINFO_H