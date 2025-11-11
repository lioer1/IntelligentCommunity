//
// Created by 56303 on 2025/11/6.
//

#ifndef INTELLIGENTCOMMUNITY2_ISSUEINFO_H
#define INTELLIGENTCOMMUNITY2_ISSUEINFO_H

#include <QWidget>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QMessageBox>
#include <QDateTime>
#include <QDebug>

QT_BEGIN_NAMESPACE

namespace Ui {
    class issueinfo;
}

QT_END_NAMESPACE

class issueinfo : public QWidget {
    Q_OBJECT

public:
    explicit issueinfo(QWidget *parent = 0);

    ~issueinfo();
    void setUserName(const QString strName);

private:
    Ui::issueinfo *ui;
    QSqlTableModel *issueModel;
    QString m_strUserName;

private slots:
    void on_issueConfirmBtn_clicked();

    void on_issueReturnBtn_clicked();
};


#endif //INTELLIGENTCOMMUNITY2_ISSUEINFO_H