#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "additem.h"
#include "addsupp.h"
#include "availableitems.h"
#include "availablesupp.h"
#include "updateitem.h"
#include "deleteitem.h"
#include "deletesupp.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAddItem_clicked();
    void on_btnAddSupp_clicked();
    void on_btnAvailableItems_clicked();
    void on_btnAvailableSupp_clicked();
    void on_btnUpdateItem_clicked();
    void on_btnDeleteItem_clicked();
    void on_btnDeleteSupp_clicked();






private:
    Ui::MainWindow *ui;
    AddItem * ptrAddItem;
    AddSupp * ptrAddSupp;
    AvailableItems *ptrAvailableItems;
    AvailableSupp *ptrAvailableSupp;
    UpdateItem *ptrUpdateItem;
    DeleteItem *ptrDeleteItem;
    DeleteSupp *ptrDeleteSupp;




};

#endif // MAINWINDOW_H
