#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "Library.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    QLabel *lb;
    void exUseKeyBoard();

    void exUseScrollView();

private:
    Ui::Widget *ui;
    LayerScrollView *m_scrollView;

};

#endif // WIDGET_H
