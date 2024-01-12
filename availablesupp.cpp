#include "availablesupp.h"
#include "ui_availablesupp.h"

AvailableSupp::AvailableSupp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AvailableSupp)
{
    ui->setupUi(this);
}

AvailableSupp::~AvailableSupp()
{
    delete ui;
}

void AvailableSupp::Show()
{
    updateUI();
    show();
}

void AvailableSupp::updateUI()
{
    qDebug() << "in init()";
    QSqlQueryModel * model = new QSqlQueryModel(this);

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("select * from supplier ");

    if(!query.exec())
       qDebug() << query.lastError().text() << query.lastQuery();
    else
       qDebug() << "== success query fetch()";

    while(query.next())
    qDebug()<<query.value(0).toString();

    model->setQuery(query);
    ui->tableView->setModel(model);
    qDebug() << "rows are : " << model->rowCount();
    ui->tableView->show();

}
