//
// Created by 56303 on 2025/11/6.
//

// You may need to build the project (run Qt uic code generator) to get "ui_issueinfo.h" resolved

#include "issueinfo.h"
#include "ui_issueinfo.h"


issueinfo::issueinfo(QWidget *parent) : QWidget(parent), ui(new Ui::issueinfo) {
    ui->setupUi(this);
    issueModel=new QSqlTableModel(this);
    issueModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    m_strUserName = "";
}

issueinfo::~issueinfo() {
    delete ui;
}

void issueinfo::setUserName(const QString strName)
{
    m_strUserName = strName;
}

void issueinfo::on_issueConfirmBtn_clicked()
{
    if (ui->issueReporterLineEdit->text().isEmpty() ||
        ui->issueReportMessTextEdit->toPlainText().isEmpty())
    {
        QMessageBox::warning(this, "警告", "故障报修请填写完整", QMessageBox::Yes);
        return;
    }

    issueModel->setTable("errorinfo");
    issueModel->select();

    QSqlRecord record = issueModel->record();
    record.setValue("errorowner", ui->issueReporterLineEdit->text());
    record.setValue("errormess", ui->issueReportMessTextEdit->toPlainText());
    record.setValue("ownername",m_strUserName);
    record.setValue("errortime", QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    record.setValue("errorstate", "申报");

    if (!issueModel->insertRecord(-1, record)) {
        QMessageBox::warning(this, "错误", "插入失败，表结构不匹配");
        return;
    }

    if (issueModel->submitAll()) {
        QMessageBox::information(this, "提示", "故障报修成功", QMessageBox::Yes);
        ui->issueReporterLineEdit->clear();
        ui->issueReportMessTextEdit->clear();
        this->close();
    } else {
        QMessageBox::information(this, "提示", "故障报修失败，请重新填写", QMessageBox::Yes);
    }
}

void issueinfo::on_issueReturnBtn_clicked()
{
    this->hide();
}
