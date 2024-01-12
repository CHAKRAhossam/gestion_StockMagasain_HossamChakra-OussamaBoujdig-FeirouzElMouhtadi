#include "deleteitem.h"
#include "ui_deleteitem.h"

DeleteItem::DeleteItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteItem)
{
    ui->setupUi(this);
}

DeleteItem::~DeleteItem()
{
    delete ui;
}

void DeleteItem::deleteUI()
{

}

void DeleteItem::Show()
{
    deleteUI();
    this->show();
}

void DeleteItem::on_pushButton_clicked()
{
    ui->lblInfo->clear();
    QString sId = ui->txtId->text();

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("DELETE FROM item WHERE Id = '" + sId + "'");

    if(!query.exec())
    {
       qDebug() << query.lastError().text() << query.lastQuery();
       ui->lblInfo->setText("Unable to delete Item" + query.lastError().text());
    }
    else{
       if(query.numRowsAffected()>0)
       {
            qDebug() << "Item deleted Successfully!";
            ui->lblInfo->setText("Item deleted Successfully!");
       }
       else
       {
        qDebug() << " Unable to Delete Item";
        ui->lblInfo->setText("Unable to Delete Item");
      }
    }
}
