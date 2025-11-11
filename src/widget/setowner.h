//
// Created by 56303 on 2025/11/5.
//

#ifndef INTELLIGENTCOMMUNITY2_SETOWNER_H
#define INTELLIGENTCOMMUNITY2_SETOWNER_H

#include <QWidget>
#include <QSqlTableModel>

QT_BEGIN_NAMESPACE

namespace Ui {
    class setowner;
}

QT_END_NAMESPACE

class setowner : public QWidget {
    Q_OBJECT

public:
    explicit setowner(QWidget *parent = 0);

    ~setowner();

private:
    Ui::setowner *ui;
    QSqlTableModel *showOwnerTalbe;
};


#endif //INTELLIGENTCOMMUNITY2_SETOWNER_H