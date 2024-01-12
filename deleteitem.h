#ifndef DELETEITEM_H
#define DELETEITEM_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class DeleteItem;
}

class DeleteItem : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteItem(QWidget *parent = nullptr);
    ~DeleteItem();
    void Show();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DeleteItem *ui;
    void deleteUI();

};

#endif // DELETEITEM_H


