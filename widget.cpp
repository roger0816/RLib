#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>

#include <QByteArray>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //how to use RLb
    //1.  use library
    //2. (in .pro)      include(RLib/include/RLib.pri)
    //3. (in class)    #include "Library.h"

    // just easy

    //   exUseKeyBoard();

    qDebug()<<LIB.LibTest();



    m_scrollView = new LayerScrollView(this);

    QList<QWidget*> list;

    for(int i=0;i<400;i++)
    {
        QLabel *l=new QLabel(QString::number(i));

        l->setAlignment(Qt::AlignCenter|Qt::AlignHCenter);
        list.append(l);
    }

    m_scrollView->setPage(rect(),true,4,3,list.mid(0,300),0,0);

    m_scrollView->setContent(true,false,false);




}

Widget::~Widget()
{
    delete ui;
}

void Widget::exUseKeyBoard()
{

    //#include "Ui.h"

    //1. ui第一層指定位置大小，預設是隱藏
    LayerKeyborad().Instance(this)->setGeometry(0,0,640,480);

    //2. new 出文字輸入框元件(可使用QLineEdit 提升)
    ItemLineEdit *tx = new ItemLineEdit(this);

    tx->setGeometry(10,10,100,40);
}

void Widget::exUseScrollView()
{
    m_scrollView = new LayerScrollView(this);
}
