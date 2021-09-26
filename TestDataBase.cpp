#include "TestDataBase.h"
#include "ui_TestDataBase.h"

TestDataBase::TestDataBase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestDataBase)
{
    ui->setupUi(this);

    ui->stackSelectDb->setCurrentIndex(0);

}

TestDataBase::~TestDataBase()
{
    delete ui;
}



void TestDataBase::on_btnOpenDb_clicked(bool checked)
{
    if(checked)
    {
        if(ui->cbSelectDb->currentIndex()==1)
        {
            bool bOk = LIB.database()->openDb(ui->txDbName->text().trimmed(),ui->txUser->text().trimmed(),ui->txPassword->text().trimmed()
                                   ,ui->txIp->text().trimmed(),ui->sbPort->text());

            if(bOk)
            {
                ui->wStatusDbOpen->setStyleSheet("background-color:green;");
            }
            else
            {
                ui->wStatusDbOpen->setStyleSheet("background-color:red;");
            }
        }
    }
}


void TestDataBase::on_cbSelectDb_currentIndexChanged(int index)
{
    ui->stackSelectDb->setCurrentIndex(index);
}

