#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrAddItem = new AddItem(this);
    ptrAddSupp = new AddSupp(this);
    ptrAvailableItems = new AvailableItems(this);
    ptrAvailableSupp = new AvailableSupp(this);
    ptrUpdateItem = new UpdateItem(this);
    ptrDeleteItem = new DeleteItem(this);
    ptrDeleteSupp = new DeleteSupp(this);




}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptrAddItem;
    delete ptrAddSupp;
    delete ptrUpdateItem;
    delete ptrDeleteItem;
    delete ptrDeleteSupp;



    MyDB::ResetInstance();
}

void MainWindow::on_btnAddItem_clicked()
{
    ptrAddItem->Show();
}

void MainWindow::on_btnAddSupp_clicked()
{
    ptrAddSupp->Show();
}

void MainWindow::on_btnAvailableItems_clicked()
{
    ptrAvailableItems->Show();
}

void MainWindow::on_btnAvailableSupp_clicked()
{
    ptrAvailableSupp->Show();
}

void MainWindow::on_btnUpdateItem_clicked()
{
    ptrUpdateItem->Show();
}

void MainWindow::on_btnDeleteItem_clicked()
{
    ptrDeleteItem->Show();
}

void MainWindow::on_btnDeleteSupp_clicked()
{
    ptrDeleteSupp->Show();
}
