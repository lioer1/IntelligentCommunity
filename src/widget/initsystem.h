//
// Created by 56303 on 2025/11/3.
//

#ifndef INTELLIGENTCOMMUNITY2_INITSYSTEM_H
#define INTELLIGENTCOMMUNITY2_INITSYSTEM_H

#include <QWidget>


QT_BEGIN_NAMESPACE

namespace Ui {
    class initsystem;
}

QT_END_NAMESPACE

class initsystem : public QWidget {
    Q_OBJECT

public:
    explicit initsystem(QWidget *parent = 0);

    ~initsystem();

private:
    Ui::initsystem *ui;

private slots:
    void on_btnCarInit_clicked();
    void on_btnIssue_clicked();
    void on_btnPrice_clicked();
    void on_btnPriceRecord_clicked();
    void on_btnFree_clicked();
};


#endif //INTELLIGENTCOMMUNITY2_INITSYSTEM_H