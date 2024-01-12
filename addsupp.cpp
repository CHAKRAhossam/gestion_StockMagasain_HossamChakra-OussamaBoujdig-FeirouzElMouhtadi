#include "addsupp.h"
#include "ui_addsupp.h"

AddSupp::AddSupp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddSupp)
{
    ui->setupUi(this);
}

AddSupp::~AddSupp()
{
    delete ui;
}

void AddSupp::Show()
{
    this->show();
}

void AddSupp::on_btnAdd_clicked()
{
    ui->lblInfo->setText("");
    QString sName = ui->txtName->text();
    QString sContact = ui->txtContact->text();

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.clear();
    query.prepare("insert into supplier(Name, Contact ) values ('" +sName +"','" +sContact + "')");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->lblInfo->setText("Unable to Add Supplier");
    }
    else
    {
        if(query.numRowsAffected() > 0)
        {
            qDebug() <<"read was successful "<< query.lastQuery();
            ui->lblInfo->setText("Supplier Added Successfully!");
            resetElements();
        }
        else
            qDebug() <<"Unable to Add new Supplier";
     }

}

void AddSupp::resetElements()
{
    ui->txtName->clear();
    ui->txtContact->clear();

}

