#ifndef DELETESUPP_H
#define DELETESUPP_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class DeleteSupp;
}

class DeleteSupp : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteSupp(QWidget *parent = nullptr);
    ~DeleteSupp();
    void Show();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DeleteSupp *ui;
    void deleteUI();

};

#endif // DELETESUPP_H


