//
// Created by 56303 on 2025/11/5.
//

// You may need to build the project (run Qt uic code generator) to get "ui_setowner.h" resolved

#include "setowner.h"
#include "ui_setowner.h"


setowner::setowner(QWidget *parent) : QWidget(parent), ui(new Ui::setowner) {
    ui->setupUi(this);
    showOwnerTalbe = new QSqlTableModel(this);
    showOwnerTalbe->setEditStrategy(QSqlTableModel::OnManualSubmit);
    showOwnerTalbe->setTable("houseowner");
    showOwnerTalbe->select();
    ui->tableView->setModel(showOwnerTalbe);
}

setowner::~setowner() {
    delete ui;
}