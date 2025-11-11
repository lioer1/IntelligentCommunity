//
// Created by 56303 on 2025/11/5.
//

#ifndef INTELLIGENTCOMMUNITY2_WORKERFREE_H
#define INTELLIGENTCOMMUNITY2_WORKERFREE_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRecord>
#include <QDebug>
#include <QDateTime>
#include <QString>
#include <QButtonGroup>

QT_BEGIN_NAMESPACE

namespace Ui {
    class workerfree;
}

QT_END_NAMESPACE

class workerfree : public QWidget {
    Q_OBJECT

public:
    explicit workerfree(QWidget *parent = 0);

    ~workerfree();

private:
    Ui::workerfree *ui;
    QSqlTableModel *workerFreeModel;
    QButtonGroup *freeInfoRadioGroup;

    bool judgeEmpty();
    void clearAll();

private slots:
    void on_workerFreeBtn_clicked();

    void on_workerFreeReturnBtn_clicked();

    void on_freeRadioButton_clicked();

    void on_attendRadioButton_clicked();
};


#endif //INTELLIGENTCOMMUNITY2_WORKERFREE_H