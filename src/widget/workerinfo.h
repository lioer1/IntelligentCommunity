//
// Created by 56303 on 2025/11/3.
//

#ifndef INTELLIGENTCOMMUNITY2_WORKERINFO_H
#define INTELLIGENTCOMMUNITY2_WORKERINFO_H

#include <QWidget>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRecord>
#include <QDebug>
#include <QButtonGroup>


QT_BEGIN_NAMESPACE

namespace Ui {
    class workerinfo;
}

QT_END_NAMESPACE

class workerinfo : public QWidget {
    Q_OBJECT

public:
    explicit workerinfo(QWidget *parent = 0);

    ~workerinfo();

private:
    Ui::workerinfo *ui;
    QSqlTableModel *model;
    QButtonGroup *isManagerRadioGroup;

    bool judgeEmpty();
    void clearAll();

signals:
    void EmitWorkerChanged();

private slots:
    void on_AddActBtn_clicked();
    void on_ReturnBtn_clicked();
};


#endif //INTELLIGENTCOMMUNITY2_WORKERINFO_H