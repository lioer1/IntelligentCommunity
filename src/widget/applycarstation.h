//
// Created by 56303 on 2025/11/6.
//

#ifndef INTELLIGENTCOMMUNITY2_APPLYCARSTATION_H
#define INTELLIGENTCOMMUNITY2_APPLYCARSTATION_H

#include <QWidget>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRecord>
#include <QDebug>
#include <QButtonGroup>

QT_BEGIN_NAMESPACE

namespace Ui {
    class applycarstation;
}

QT_END_NAMESPACE

class applycarstation : public QWidget {
    Q_OBJECT

public:
    explicit applycarstation(QWidget *parent = 0);

    ~applycarstation();

private:
    Ui::applycarstation *ui;
    QSqlTableModel *myCarStationModel;
    QButtonGroup *typeRadioGroup;
    QButtonGroup *largeRadioGroup;
    QButtonGroup *electRadioGroup;

private slots:
    void on_applyCarStationConfirmBtn_clicked();

    void on_applyCarStationReturnBtn_clicked();

};


#endif //INTELLIGENTCOMMUNITY2_APPLYCARSTATION_H