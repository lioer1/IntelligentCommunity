//
// Created by 56303 on 2025/11/6.
//

// You may need to build the project (run Qt uic code generator) to get "ui_issueassessment.h" resolved

#include "issueassessment.h"
#include "ui_issueassessment.h"
#include <QMessageBox>
#include <QSqlQuery>

issueassessment::issueassessment(QWidget *parent) : QDialog(parent), ui(new Ui::issueassessment) {
    ui->setupUi(this);
    m_strIndex = "";
}

issueassessment::~issueassessment() {
    delete ui;
}

void issueassessment::on_pushButton_2_clicked()
{
    if(m_strIndex.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请在上一个界面选中要评论的记录");
        return;
    }
    QString strInfo = ui->textEdit->toPlainText();
    if(strInfo.isEmpty())
    {
        QMessageBox::warning(this, "提示", "请填写评价");
        return;
    }
    QSqlQuery query;
    QString strSql = QString("update errorinfo set assessment = '%1' where errortime = '%2' ")
            .arg(strInfo).arg(m_strIndex);
    if(query.exec(strSql))
    {
        QMessageBox::warning(this, "提示", "评价成功");
        this->close();
    }
    else
    {
        QMessageBox::warning(this, "提示", "评价失败，请重新输入");
    }
    return;

}
void issueassessment::setMessageIndex(QString strIndex)
{
    m_strIndex = strIndex;
}
void issueassessment::on_pushButton_clicked()
{
    this->close();
}
