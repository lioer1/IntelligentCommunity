//
// Created by 56303 on 2025/11/5.
//

#ifndef INTELLIGENTCOMMUNITY2_OWNERPAYSELF_H
#define INTELLIGENTCOMMUNITY2_OWNERPAYSELF_H

#include <QWidget>


QT_BEGIN_NAMESPACE

namespace Ui {
    class ownerpayself;
}

QT_END_NAMESPACE

class ownerpayself : public QWidget {
    Q_OBJECT

public:
    explicit ownerpayself(QWidget *parent = nullptr);

    ~ownerpayself() override;

private:
    Ui::ownerpayself *ui;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    bool updateState(int nType);

};


#endif //INTELLIGENTCOMMUNITY2_OWNERPAYSELF_H