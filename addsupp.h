#ifndef ADDSUPP_H
#define ADDSUPP_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class AddSupp;
}

class AddSupp : public QDialog
{
    Q_OBJECT

public:
    explicit AddSupp(QWidget *parent = nullptr);
    ~AddSupp();
     void Show();

private slots:
    void on_btnAdd_clicked();

private:
    Ui::AddSupp *ui;
    void resetElements();

};

#endif // ADDSUPP_H
