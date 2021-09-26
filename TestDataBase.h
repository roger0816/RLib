#ifndef TESTDATABASE_H
#define TESTDATABASE_H

#include <QWidget>
#include "Library.h"

namespace Ui {
class TestDataBase;
}

class TestDataBase : public QWidget
{
    Q_OBJECT

public:
    explicit TestDataBase(QWidget *parent = nullptr);
    ~TestDataBase();

private slots:

    void on_btnOpenDb_clicked(bool checked);

    void on_cbSelectDb_currentIndexChanged(int index);

private:
    Ui::TestDataBase *ui;
};

#endif // TESTDATABASE_H
