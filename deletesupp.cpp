
#include "deletesupp.h"
#include "ui_deletesupp.h"

DeleteSupp::DeleteSupp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteSupp)
{
    ui->setupUi(this);
}

DeleteSupp::~DeleteSupp()
{
    delete ui;
}

void DeleteSupp::deleteUI()
{

}

void DeleteSupp::Show()
{
    deleteUI();
    this->show();
}

void DeleteSupp::on_pushButton_clicked()
{
    ui->lblInfo->clear();
    QString sId = ui->txtId->text();

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("DELETE FROM supplier WHERE Id = '" + sId + "'");

    if(!query.exec())
    {
       qDebug() << query.lastError().text() << query.lastQuery();
       ui->lblInfo->setText("Unable to delete Supplier" + query.lastError().text());
    }
    else{
       if(query.numRowsAffected()>0)
       {
            qDebug() << "Supplier deleted Successfully!";
            ui->lblInfo->setText("Supplier deleted Successfully!");
       }
       else
       {
        qDebug() << " Unable to Delete Supplier";
        ui->lblInfo->setText("Unable to Delete Supplier");
      }
    }
}
