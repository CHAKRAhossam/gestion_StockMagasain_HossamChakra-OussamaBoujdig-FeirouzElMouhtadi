#ifndef AVAILABLESUPP_H
#define AVAILABLESUPP_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class AvailableSupp;
}

class AvailableSupp : public QDialog
{
    Q_OBJECT

public:
    explicit AvailableSupp(QWidget *parent = nullptr);
    ~AvailableSupp();
    void Show();


private:
    Ui::AvailableSupp *ui;
    void updateUI();

};

#endif // AVAILABLESUPP_H
