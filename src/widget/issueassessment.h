//
// Created by 56303 on 2025/11/6.
//

#ifndef INTELLIGENTCOMMUNITY2_ISSUEASSESSMENT_H
#define INTELLIGENTCOMMUNITY2_ISSUEASSESSMENT_H

#include <QWidget>
#include <QDialog>

QT_BEGIN_NAMESPACE

namespace Ui {
    class issueassessment;
}

QT_END_NAMESPACE

class issueassessment : public QDialog {
    Q_OBJECT

public:
    explicit issueassessment(QWidget *parent = 0);

    ~issueassessment();
    void setMessageIndex(QString strIndex);

private:
    Ui::issueassessment *ui;
    QString m_strIndex;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();
};


#endif //INTELLIGENTCOMMUNITY2_ISSUEASSESSMENT_H