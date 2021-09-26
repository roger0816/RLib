/********************************************************************************
** Form generated from reading UI file 'LayerKeyborad.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERKEYBORAD_H
#define UI_LAYERKEYBORAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerKeyborad
{
public:
    QGridLayout *gridLayout_3;
    QWidget *wBg;
    QGridLayout *gridLayout;
    QWidget *widget_6;
    QGridLayout *gridLayout_9;
    QLineEdit *lineEdit;
    QPushButton *btnCancel;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QWidget *wRow0;
    QGridLayout *gridLayout_4;
    QPushButton *btnI;
    QPushButton *btnQ;
    QPushButton *btnP;
    QPushButton *btnE;
    QPushButton *btnU;
    QPushButton *btnT;
    QPushButton *btnY;
    QPushButton *btnO;
    QPushButton *btnR;
    QPushButton *btnW;
    QWidget *wRow1;
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QPushButton *btnA;
    QPushButton *btnS;
    QPushButton *btnD;
    QPushButton *btnF;
    QPushButton *btnG;
    QPushButton *btnH;
    QPushButton *btnJ;
    QPushButton *btnK;
    QPushButton *btnL;
    QWidget *widget_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_6;
    QWidget *widget_4;
    QGridLayout *gridLayout_7;
    QPushButton *btnShift;
    QPushButton *btnZ;
    QPushButton *btnX;
    QPushButton *btnC;
    QPushButton *btnV;
    QPushButton *btnB;
    QPushButton *btnN;
    QPushButton *btnM;
    QWidget *widget_5;
    QGridLayout *gridLayout_8;
    QPushButton *btnSub;
    QWidget *page_2;
    QGridLayout *gridLayout_15;
    QWidget *wRow0_2;
    QGridLayout *gridLayout_10;
    QPushButton *btnSp07;
    QPushButton *btnSp00;
    QPushButton *btnSp09;
    QPushButton *btnSp02;
    QPushButton *btnSp06;
    QPushButton *btnSp04;
    QPushButton *btnSp05;
    QPushButton *btnSp08;
    QPushButton *btnSp03;
    QPushButton *btnSp01;
    QWidget *wRow0_3;
    QGridLayout *gridLayout_11;
    QPushButton *btnSp14;
    QPushButton *btnSp15;
    QPushButton *btnSp18;
    QPushButton *btnSp10;
    QPushButton *btnSp13;
    QPushButton *btnSp11;
    QPushButton *btnSp19;
    QPushButton *btnSp12;
    QPushButton *btnSp16;
    QWidget *widget_7;
    QGridLayout *gridLayout_12;
    QWidget *widget_8;
    QGridLayout *gridLayout_13;
    QPushButton *btnSpChange;
    QPushButton *btnSp22;
    QPushButton *btnSp20;
    QPushButton *btnSp21;
    QPushButton *btnSp23;
    QWidget *widget_9;
    QGridLayout *gridLayout_14;
    QPushButton *btnSub2;
    QWidget *wTool;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnChange;
    QPushButton *btnSpace;
    QPushButton *btnPoint;
    QPushButton *btnReturn;

    void setupUi(QWidget *LayerKeyborad)
    {
        if (LayerKeyborad->objectName().isEmpty())
            LayerKeyborad->setObjectName(QString::fromUtf8("LayerKeyborad"));
        LayerKeyborad->resize(872, 480);
        gridLayout_3 = new QGridLayout(LayerKeyborad);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        wBg = new QWidget(LayerKeyborad);
        wBg->setObjectName(QString::fromUtf8("wBg"));
        wBg->setStyleSheet(QString::fromUtf8("QWidget#wBg{background-color: rgb(210,210, 210);}\n"
"\n"
"QPushButton \n"
"{\n"
"   background-color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"   background-color:rgb(185,185,185);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    border-radius: 10px;\n"
"}\n"
""));
        gridLayout = new QGridLayout(wBg);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(wBg);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout_9 = new QGridLayout(widget_6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        lineEdit = new QLineEdit(widget_6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font;
        font.setPointSize(30);
        lineEdit->setFont(font);

        gridLayout_9->addWidget(lineEdit, 0, 0, 1, 1);

        btnCancel = new QPushButton(widget_6);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setFont(font);
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"   background-color:rgba(255,255,255,0);\n"
"    border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"	color:rgb(255,255,255);\n"
"    padding: 6px;\n"
"}\n"
""));

        gridLayout_9->addWidget(btnCancel, 0, 1, 1, 1);


        gridLayout->addWidget(widget_6, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(wBg);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget#page{background-color: rgb(220, 220, 220);}\n"
"\n"
""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(9, 0, 9, 0);
        wRow0 = new QWidget(page);
        wRow0->setObjectName(QString::fromUtf8("wRow0"));
        gridLayout_4 = new QGridLayout(wRow0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, -1, 0, -1);
        btnI = new QPushButton(wRow0);
        btnI->setObjectName(QString::fromUtf8("btnI"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnI->sizePolicy().hasHeightForWidth());
        btnI->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(20);
        btnI->setFont(font1);
        btnI->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(btnI, 0, 7, 1, 1);

        btnQ = new QPushButton(wRow0);
        btnQ->setObjectName(QString::fromUtf8("btnQ"));
        sizePolicy.setHeightForWidth(btnQ->sizePolicy().hasHeightForWidth());
        btnQ->setSizePolicy(sizePolicy);
        btnQ->setFont(font1);
        btnQ->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(btnQ, 0, 0, 1, 1);

        btnP = new QPushButton(wRow0);
        btnP->setObjectName(QString::fromUtf8("btnP"));
        sizePolicy.setHeightForWidth(btnP->sizePolicy().hasHeightForWidth());
        btnP->setSizePolicy(sizePolicy);
        btnP->setFont(font1);
        btnP->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(btnP, 0, 9, 1, 1);

        btnE = new QPushButton(wRow0);
        btnE->setObjectName(QString::fromUtf8("btnE"));
        sizePolicy.setHeightForWidth(btnE->sizePolicy().hasHeightForWidth());
        btnE->setSizePolicy(sizePolicy);
        btnE->setFont(font1);
        btnE->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(btnE, 0, 2, 1, 1);

        btnU = new QPushButton(wRow0);
        btnU->setObjectName(QString::fromUtf8("btnU"));
        sizePolicy.setHeightForWidth(btnU->sizePolicy().hasHeightForWidth());
        btnU->setSizePolicy(sizePolicy);
        btnU->setFont(font1);
        btnU->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(btnU, 0, 6, 1, 1);

        btnT = new QPushButton(wRow0);
        btnT->setObjectName(QString::fromUtf8("btnT"));
        sizePolicy.setHeightForWidth(btnT->sizePolicy().hasHeightForWidth());
        btnT->setSizePolicy(sizePolicy);
        btnT->setFont(font1);
        btnT->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(btnT, 0, 4, 1, 1);

        btnY = new QPushButton(wRow0);
        btnY->setObjectName(QString::fromUtf8("btnY"));
        sizePolicy.setHeightForWidth(btnY->sizePolicy().hasHeightForWidth());
        btnY->setSizePolicy(sizePolicy);
        btnY->setFont(font1);
        btnY->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(btnY, 0, 5, 1, 1);

        btnO = new QPushButton(wRow0);
        btnO->setObjectName(QString::fromUtf8("btnO"));
        sizePolicy.setHeightForWidth(btnO->sizePolicy().hasHeightForWidth());
        btnO->setSizePolicy(sizePolicy);
        btnO->setFont(font1);
        btnO->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(btnO, 0, 8, 1, 1);

        btnR = new QPushButton(wRow0);
        btnR->setObjectName(QString::fromUtf8("btnR"));
        sizePolicy.setHeightForWidth(btnR->sizePolicy().hasHeightForWidth());
        btnR->setSizePolicy(sizePolicy);
        btnR->setFont(font1);
        btnR->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(btnR, 0, 3, 1, 1);

        btnW = new QPushButton(wRow0);
        btnW->setObjectName(QString::fromUtf8("btnW"));
        sizePolicy.setHeightForWidth(btnW->sizePolicy().hasHeightForWidth());
        btnW->setSizePolicy(sizePolicy);
        btnW->setFont(font1);
        btnW->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(btnW, 0, 1, 1, 1);


        gridLayout_2->addWidget(wRow0, 0, 0, 1, 1);

        wRow1 = new QWidget(page);
        wRow1->setObjectName(QString::fromUtf8("wRow1"));
        gridLayout_5 = new QGridLayout(wRow1);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        widget = new QWidget(wRow1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(20, 0));

        gridLayout_5->addWidget(widget, 0, 0, 1, 1);

        btnA = new QPushButton(wRow1);
        btnA->setObjectName(QString::fromUtf8("btnA"));
        sizePolicy.setHeightForWidth(btnA->sizePolicy().hasHeightForWidth());
        btnA->setSizePolicy(sizePolicy);
        btnA->setFont(font1);
        btnA->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(btnA, 0, 1, 1, 1);

        btnS = new QPushButton(wRow1);
        btnS->setObjectName(QString::fromUtf8("btnS"));
        sizePolicy.setHeightForWidth(btnS->sizePolicy().hasHeightForWidth());
        btnS->setSizePolicy(sizePolicy);
        btnS->setFont(font1);
        btnS->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(btnS, 0, 2, 1, 1);

        btnD = new QPushButton(wRow1);
        btnD->setObjectName(QString::fromUtf8("btnD"));
        sizePolicy.setHeightForWidth(btnD->sizePolicy().hasHeightForWidth());
        btnD->setSizePolicy(sizePolicy);
        btnD->setFont(font1);

        gridLayout_5->addWidget(btnD, 0, 3, 1, 1);

        btnF = new QPushButton(wRow1);
        btnF->setObjectName(QString::fromUtf8("btnF"));
        sizePolicy.setHeightForWidth(btnF->sizePolicy().hasHeightForWidth());
        btnF->setSizePolicy(sizePolicy);
        btnF->setFont(font1);
        btnF->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(btnF, 0, 4, 1, 1);

        btnG = new QPushButton(wRow1);
        btnG->setObjectName(QString::fromUtf8("btnG"));
        sizePolicy.setHeightForWidth(btnG->sizePolicy().hasHeightForWidth());
        btnG->setSizePolicy(sizePolicy);
        btnG->setFont(font1);
        btnG->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(btnG, 0, 5, 1, 1);

        btnH = new QPushButton(wRow1);
        btnH->setObjectName(QString::fromUtf8("btnH"));
        sizePolicy.setHeightForWidth(btnH->sizePolicy().hasHeightForWidth());
        btnH->setSizePolicy(sizePolicy);
        btnH->setFont(font1);
        btnH->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(btnH, 0, 6, 1, 1);

        btnJ = new QPushButton(wRow1);
        btnJ->setObjectName(QString::fromUtf8("btnJ"));
        sizePolicy.setHeightForWidth(btnJ->sizePolicy().hasHeightForWidth());
        btnJ->setSizePolicy(sizePolicy);
        btnJ->setFont(font1);
        btnJ->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(btnJ, 0, 7, 1, 1);

        btnK = new QPushButton(wRow1);
        btnK->setObjectName(QString::fromUtf8("btnK"));
        sizePolicy.setHeightForWidth(btnK->sizePolicy().hasHeightForWidth());
        btnK->setSizePolicy(sizePolicy);
        btnK->setFont(font1);
        btnK->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(btnK, 0, 8, 1, 1);

        btnL = new QPushButton(wRow1);
        btnL->setObjectName(QString::fromUtf8("btnL"));
        sizePolicy.setHeightForWidth(btnL->sizePolicy().hasHeightForWidth());
        btnL->setSizePolicy(sizePolicy);
        btnL->setFont(font1);
        btnL->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(btnL, 0, 9, 1, 1);

        widget_2 = new QWidget(wRow1);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(20, 0));

        gridLayout_5->addWidget(widget_2, 0, 10, 1, 1);

        gridLayout_5->setColumnStretch(0, 1);
        gridLayout_5->setColumnStretch(1, 2);
        gridLayout_5->setColumnStretch(2, 2);
        gridLayout_5->setColumnStretch(3, 2);
        gridLayout_5->setColumnStretch(4, 2);
        gridLayout_5->setColumnStretch(5, 2);
        gridLayout_5->setColumnStretch(6, 2);
        gridLayout_5->setColumnStretch(7, 2);
        gridLayout_5->setColumnStretch(8, 2);
        gridLayout_5->setColumnStretch(9, 2);
        gridLayout_5->setColumnStretch(10, 1);
        gridLayout_5->setColumnMinimumWidth(0, 1);
        gridLayout_5->setColumnMinimumWidth(1, 2);
        gridLayout_5->setColumnMinimumWidth(2, 2);
        gridLayout_5->setColumnMinimumWidth(3, 2);
        gridLayout_5->setColumnMinimumWidth(4, 2);
        gridLayout_5->setColumnMinimumWidth(5, 2);
        gridLayout_5->setColumnMinimumWidth(6, 2);
        gridLayout_5->setColumnMinimumWidth(7, 2);
        gridLayout_5->setColumnMinimumWidth(8, 2);
        gridLayout_5->setColumnMinimumWidth(9, 2);
        gridLayout_5->setColumnMinimumWidth(10, 1);

        gridLayout_2->addWidget(wRow1, 1, 0, 1, 1);

        widget_3 = new QWidget(page);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_6 = new QGridLayout(widget_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        gridLayout_7 = new QGridLayout(widget_4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(-1, 0, -1, 0);
        btnShift = new QPushButton(widget_4);
        btnShift->setObjectName(QString::fromUtf8("btnShift"));
        sizePolicy.setHeightForWidth(btnShift->sizePolicy().hasHeightForWidth());
        btnShift->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(14);
        btnShift->setFont(font2);
        btnShift->setFocusPolicy(Qt::NoFocus);
        btnShift->setStyleSheet(QString::fromUtf8("\n"
"QPushButton \n"
"{\n"
"   background-color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"   background-color:rgb(185,185,185);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
""));
        btnShift->setCheckable(true);
        btnShift->setChecked(false);

        gridLayout_7->addWidget(btnShift, 0, 0, 1, 1);


        gridLayout_6->addWidget(widget_4, 0, 0, 1, 1);

        btnZ = new QPushButton(widget_3);
        btnZ->setObjectName(QString::fromUtf8("btnZ"));
        sizePolicy.setHeightForWidth(btnZ->sizePolicy().hasHeightForWidth());
        btnZ->setSizePolicy(sizePolicy);
        btnZ->setFont(font1);
        btnZ->setFocusPolicy(Qt::NoFocus);

        gridLayout_6->addWidget(btnZ, 0, 1, 1, 1);

        btnX = new QPushButton(widget_3);
        btnX->setObjectName(QString::fromUtf8("btnX"));
        sizePolicy.setHeightForWidth(btnX->sizePolicy().hasHeightForWidth());
        btnX->setSizePolicy(sizePolicy);
        btnX->setFont(font1);
        btnX->setFocusPolicy(Qt::NoFocus);

        gridLayout_6->addWidget(btnX, 0, 2, 1, 1);

        btnC = new QPushButton(widget_3);
        btnC->setObjectName(QString::fromUtf8("btnC"));
        sizePolicy.setHeightForWidth(btnC->sizePolicy().hasHeightForWidth());
        btnC->setSizePolicy(sizePolicy);
        btnC->setFont(font1);
        btnC->setFocusPolicy(Qt::NoFocus);
        btnC->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(btnC, 0, 3, 1, 1);

        btnV = new QPushButton(widget_3);
        btnV->setObjectName(QString::fromUtf8("btnV"));
        sizePolicy.setHeightForWidth(btnV->sizePolicy().hasHeightForWidth());
        btnV->setSizePolicy(sizePolicy);
        btnV->setFont(font1);
        btnV->setFocusPolicy(Qt::NoFocus);

        gridLayout_6->addWidget(btnV, 0, 4, 1, 1);

        btnB = new QPushButton(widget_3);
        btnB->setObjectName(QString::fromUtf8("btnB"));
        sizePolicy.setHeightForWidth(btnB->sizePolicy().hasHeightForWidth());
        btnB->setSizePolicy(sizePolicy);
        btnB->setFont(font1);
        btnB->setFocusPolicy(Qt::NoFocus);

        gridLayout_6->addWidget(btnB, 0, 5, 1, 1);

        btnN = new QPushButton(widget_3);
        btnN->setObjectName(QString::fromUtf8("btnN"));
        sizePolicy.setHeightForWidth(btnN->sizePolicy().hasHeightForWidth());
        btnN->setSizePolicy(sizePolicy);
        btnN->setFont(font1);
        btnN->setFocusPolicy(Qt::NoFocus);

        gridLayout_6->addWidget(btnN, 0, 6, 1, 1);

        btnM = new QPushButton(widget_3);
        btnM->setObjectName(QString::fromUtf8("btnM"));
        sizePolicy.setHeightForWidth(btnM->sizePolicy().hasHeightForWidth());
        btnM->setSizePolicy(sizePolicy);
        btnM->setFont(font1);
        btnM->setFocusPolicy(Qt::NoFocus);

        gridLayout_6->addWidget(btnM, 0, 7, 1, 1);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_8 = new QGridLayout(widget_5);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(-1, 0, -1, 0);
        btnSub = new QPushButton(widget_5);
        btnSub->setObjectName(QString::fromUtf8("btnSub"));
        sizePolicy.setHeightForWidth(btnSub->sizePolicy().hasHeightForWidth());
        btnSub->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(12);
        btnSub->setFont(font3);
        btnSub->setFocusPolicy(Qt::NoFocus);
        btnSub->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
"   background-color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"   background-color:rgb(185,185,185);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
""));

        gridLayout_8->addWidget(btnSub, 0, 0, 1, 1);


        gridLayout_6->addWidget(widget_5, 0, 8, 1, 1);

        gridLayout_6->setColumnStretch(0, 3);
        gridLayout_6->setColumnStretch(1, 2);
        gridLayout_6->setColumnStretch(2, 2);
        gridLayout_6->setColumnStretch(3, 2);
        gridLayout_6->setColumnStretch(4, 2);
        gridLayout_6->setColumnStretch(5, 2);
        gridLayout_6->setColumnStretch(6, 2);
        gridLayout_6->setColumnStretch(7, 2);
        gridLayout_6->setColumnStretch(8, 3);
        gridLayout_6->setColumnMinimumWidth(0, 3);
        gridLayout_6->setColumnMinimumWidth(1, 2);
        gridLayout_6->setColumnMinimumWidth(2, 2);
        gridLayout_6->setColumnMinimumWidth(3, 2);
        gridLayout_6->setColumnMinimumWidth(4, 2);
        gridLayout_6->setColumnMinimumWidth(5, 2);
        gridLayout_6->setColumnMinimumWidth(6, 2);
        gridLayout_6->setColumnMinimumWidth(7, 2);
        gridLayout_6->setColumnMinimumWidth(8, 3);

        gridLayout_2->addWidget(widget_3, 2, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setStyleSheet(QString::fromUtf8("QWidget#page_2{background-color: rgb(222, 222, 222);}"));
        gridLayout_15 = new QGridLayout(page_2);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        wRow0_2 = new QWidget(page_2);
        wRow0_2->setObjectName(QString::fromUtf8("wRow0_2"));
        gridLayout_10 = new QGridLayout(wRow0_2);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, -1, 0, -1);
        btnSp07 = new QPushButton(wRow0_2);
        btnSp07->setObjectName(QString::fromUtf8("btnSp07"));
        sizePolicy.setHeightForWidth(btnSp07->sizePolicy().hasHeightForWidth());
        btnSp07->setSizePolicy(sizePolicy);
        btnSp07->setFont(font1);
        btnSp07->setFocusPolicy(Qt::NoFocus);

        gridLayout_10->addWidget(btnSp07, 0, 7, 1, 1);

        btnSp00 = new QPushButton(wRow0_2);
        btnSp00->setObjectName(QString::fromUtf8("btnSp00"));
        sizePolicy.setHeightForWidth(btnSp00->sizePolicy().hasHeightForWidth());
        btnSp00->setSizePolicy(sizePolicy);
        btnSp00->setFont(font1);
        btnSp00->setFocusPolicy(Qt::NoFocus);

        gridLayout_10->addWidget(btnSp00, 0, 0, 1, 1);

        btnSp09 = new QPushButton(wRow0_2);
        btnSp09->setObjectName(QString::fromUtf8("btnSp09"));
        sizePolicy.setHeightForWidth(btnSp09->sizePolicy().hasHeightForWidth());
        btnSp09->setSizePolicy(sizePolicy);
        btnSp09->setFont(font1);
        btnSp09->setFocusPolicy(Qt::NoFocus);

        gridLayout_10->addWidget(btnSp09, 0, 9, 1, 1);

        btnSp02 = new QPushButton(wRow0_2);
        btnSp02->setObjectName(QString::fromUtf8("btnSp02"));
        sizePolicy.setHeightForWidth(btnSp02->sizePolicy().hasHeightForWidth());
        btnSp02->setSizePolicy(sizePolicy);
        btnSp02->setFont(font1);
        btnSp02->setFocusPolicy(Qt::NoFocus);

        gridLayout_10->addWidget(btnSp02, 0, 2, 1, 1);

        btnSp06 = new QPushButton(wRow0_2);
        btnSp06->setObjectName(QString::fromUtf8("btnSp06"));
        sizePolicy.setHeightForWidth(btnSp06->sizePolicy().hasHeightForWidth());
        btnSp06->setSizePolicy(sizePolicy);
        btnSp06->setFont(font1);
        btnSp06->setFocusPolicy(Qt::NoFocus);

        gridLayout_10->addWidget(btnSp06, 0, 6, 1, 1);

        btnSp04 = new QPushButton(wRow0_2);
        btnSp04->setObjectName(QString::fromUtf8("btnSp04"));
        sizePolicy.setHeightForWidth(btnSp04->sizePolicy().hasHeightForWidth());
        btnSp04->setSizePolicy(sizePolicy);
        btnSp04->setFont(font1);
        btnSp04->setFocusPolicy(Qt::NoFocus);

        gridLayout_10->addWidget(btnSp04, 0, 4, 1, 1);

        btnSp05 = new QPushButton(wRow0_2);
        btnSp05->setObjectName(QString::fromUtf8("btnSp05"));
        sizePolicy.setHeightForWidth(btnSp05->sizePolicy().hasHeightForWidth());
        btnSp05->setSizePolicy(sizePolicy);
        btnSp05->setFont(font1);
        btnSp05->setFocusPolicy(Qt::NoFocus);

        gridLayout_10->addWidget(btnSp05, 0, 5, 1, 1);

        btnSp08 = new QPushButton(wRow0_2);
        btnSp08->setObjectName(QString::fromUtf8("btnSp08"));
        sizePolicy.setHeightForWidth(btnSp08->sizePolicy().hasHeightForWidth());
        btnSp08->setSizePolicy(sizePolicy);
        btnSp08->setFont(font1);
        btnSp08->setFocusPolicy(Qt::NoFocus);

        gridLayout_10->addWidget(btnSp08, 0, 8, 1, 1);

        btnSp03 = new QPushButton(wRow0_2);
        btnSp03->setObjectName(QString::fromUtf8("btnSp03"));
        sizePolicy.setHeightForWidth(btnSp03->sizePolicy().hasHeightForWidth());
        btnSp03->setSizePolicy(sizePolicy);
        btnSp03->setFont(font1);
        btnSp03->setFocusPolicy(Qt::NoFocus);

        gridLayout_10->addWidget(btnSp03, 0, 3, 1, 1);

        btnSp01 = new QPushButton(wRow0_2);
        btnSp01->setObjectName(QString::fromUtf8("btnSp01"));
        sizePolicy.setHeightForWidth(btnSp01->sizePolicy().hasHeightForWidth());
        btnSp01->setSizePolicy(sizePolicy);
        btnSp01->setFont(font1);
        btnSp01->setFocusPolicy(Qt::NoFocus);

        gridLayout_10->addWidget(btnSp01, 0, 1, 1, 1);


        gridLayout_15->addWidget(wRow0_2, 0, 0, 1, 1);

        wRow0_3 = new QWidget(page_2);
        wRow0_3->setObjectName(QString::fromUtf8("wRow0_3"));
        gridLayout_11 = new QGridLayout(wRow0_3);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, -1, 0, -1);
        btnSp14 = new QPushButton(wRow0_3);
        btnSp14->setObjectName(QString::fromUtf8("btnSp14"));
        sizePolicy.setHeightForWidth(btnSp14->sizePolicy().hasHeightForWidth());
        btnSp14->setSizePolicy(sizePolicy);
        btnSp14->setFont(font1);
        btnSp14->setFocusPolicy(Qt::NoFocus);

        gridLayout_11->addWidget(btnSp14, 0, 4, 1, 1);

        btnSp15 = new QPushButton(wRow0_3);
        btnSp15->setObjectName(QString::fromUtf8("btnSp15"));
        sizePolicy.setHeightForWidth(btnSp15->sizePolicy().hasHeightForWidth());
        btnSp15->setSizePolicy(sizePolicy);
        btnSp15->setFont(font1);
        btnSp15->setFocusPolicy(Qt::NoFocus);

        gridLayout_11->addWidget(btnSp15, 0, 5, 1, 1);

        btnSp18 = new QPushButton(wRow0_3);
        btnSp18->setObjectName(QString::fromUtf8("btnSp18"));
        sizePolicy.setHeightForWidth(btnSp18->sizePolicy().hasHeightForWidth());
        btnSp18->setSizePolicy(sizePolicy);
        btnSp18->setFont(font1);
        btnSp18->setFocusPolicy(Qt::NoFocus);

        gridLayout_11->addWidget(btnSp18, 0, 7, 1, 1);

        btnSp10 = new QPushButton(wRow0_3);
        btnSp10->setObjectName(QString::fromUtf8("btnSp10"));
        sizePolicy.setHeightForWidth(btnSp10->sizePolicy().hasHeightForWidth());
        btnSp10->setSizePolicy(sizePolicy);
        btnSp10->setFont(font1);
        btnSp10->setFocusPolicy(Qt::NoFocus);

        gridLayout_11->addWidget(btnSp10, 0, 0, 1, 1);

        btnSp13 = new QPushButton(wRow0_3);
        btnSp13->setObjectName(QString::fromUtf8("btnSp13"));
        sizePolicy.setHeightForWidth(btnSp13->sizePolicy().hasHeightForWidth());
        btnSp13->setSizePolicy(sizePolicy);
        btnSp13->setFont(font1);
        btnSp13->setFocusPolicy(Qt::NoFocus);

        gridLayout_11->addWidget(btnSp13, 0, 3, 1, 1);

        btnSp11 = new QPushButton(wRow0_3);
        btnSp11->setObjectName(QString::fromUtf8("btnSp11"));
        sizePolicy.setHeightForWidth(btnSp11->sizePolicy().hasHeightForWidth());
        btnSp11->setSizePolicy(sizePolicy);
        btnSp11->setFont(font1);
        btnSp11->setFocusPolicy(Qt::NoFocus);

        gridLayout_11->addWidget(btnSp11, 0, 1, 1, 1);

        btnSp19 = new QPushButton(wRow0_3);
        btnSp19->setObjectName(QString::fromUtf8("btnSp19"));
        sizePolicy.setHeightForWidth(btnSp19->sizePolicy().hasHeightForWidth());
        btnSp19->setSizePolicy(sizePolicy);
        btnSp19->setFont(font1);
        btnSp19->setFocusPolicy(Qt::NoFocus);

        gridLayout_11->addWidget(btnSp19, 0, 8, 1, 1);

        btnSp12 = new QPushButton(wRow0_3);
        btnSp12->setObjectName(QString::fromUtf8("btnSp12"));
        sizePolicy.setHeightForWidth(btnSp12->sizePolicy().hasHeightForWidth());
        btnSp12->setSizePolicy(sizePolicy);
        btnSp12->setFont(font1);
        btnSp12->setFocusPolicy(Qt::NoFocus);

        gridLayout_11->addWidget(btnSp12, 0, 2, 1, 1);

        btnSp16 = new QPushButton(wRow0_3);
        btnSp16->setObjectName(QString::fromUtf8("btnSp16"));
        sizePolicy.setHeightForWidth(btnSp16->sizePolicy().hasHeightForWidth());
        btnSp16->setSizePolicy(sizePolicy);
        btnSp16->setFont(font1);
        btnSp16->setFocusPolicy(Qt::NoFocus);

        gridLayout_11->addWidget(btnSp16, 0, 6, 1, 1);


        gridLayout_15->addWidget(wRow0_3, 1, 0, 1, 1);

        widget_7 = new QWidget(page_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        gridLayout_12 = new QGridLayout(widget_7);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        gridLayout_13 = new QGridLayout(widget_8);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(-1, 0, -1, 0);
        btnSpChange = new QPushButton(widget_8);
        btnSpChange->setObjectName(QString::fromUtf8("btnSpChange"));
        sizePolicy.setHeightForWidth(btnSpChange->sizePolicy().hasHeightForWidth());
        btnSpChange->setSizePolicy(sizePolicy);
        btnSpChange->setFont(font2);
        btnSpChange->setFocusPolicy(Qt::NoFocus);
        btnSpChange->setStyleSheet(QString::fromUtf8("\n"
"QPushButton \n"
"{\n"
"   background-color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"   background-color:rgb(185,185,185);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
""));
        btnSpChange->setCheckable(true);
        btnSpChange->setChecked(false);

        gridLayout_13->addWidget(btnSpChange, 0, 0, 1, 1);


        gridLayout_12->addWidget(widget_8, 0, 0, 1, 1);

        btnSp22 = new QPushButton(widget_7);
        btnSp22->setObjectName(QString::fromUtf8("btnSp22"));
        sizePolicy.setHeightForWidth(btnSp22->sizePolicy().hasHeightForWidth());
        btnSp22->setSizePolicy(sizePolicy);
        btnSp22->setFont(font1);
        btnSp22->setFocusPolicy(Qt::NoFocus);

        gridLayout_12->addWidget(btnSp22, 0, 3, 1, 1);

        btnSp20 = new QPushButton(widget_7);
        btnSp20->setObjectName(QString::fromUtf8("btnSp20"));
        sizePolicy.setHeightForWidth(btnSp20->sizePolicy().hasHeightForWidth());
        btnSp20->setSizePolicy(sizePolicy);
        btnSp20->setFont(font1);
        btnSp20->setFocusPolicy(Qt::NoFocus);

        gridLayout_12->addWidget(btnSp20, 0, 1, 1, 1);

        btnSp21 = new QPushButton(widget_7);
        btnSp21->setObjectName(QString::fromUtf8("btnSp21"));
        sizePolicy.setHeightForWidth(btnSp21->sizePolicy().hasHeightForWidth());
        btnSp21->setSizePolicy(sizePolicy);
        btnSp21->setFont(font1);
        btnSp21->setFocusPolicy(Qt::NoFocus);

        gridLayout_12->addWidget(btnSp21, 0, 2, 1, 1);

        btnSp23 = new QPushButton(widget_7);
        btnSp23->setObjectName(QString::fromUtf8("btnSp23"));
        sizePolicy.setHeightForWidth(btnSp23->sizePolicy().hasHeightForWidth());
        btnSp23->setSizePolicy(sizePolicy);
        btnSp23->setFont(font1);
        btnSp23->setFocusPolicy(Qt::NoFocus);

        gridLayout_12->addWidget(btnSp23, 0, 4, 1, 1);

        widget_9 = new QWidget(widget_7);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        gridLayout_14 = new QGridLayout(widget_9);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(-1, 0, -1, 0);
        btnSub2 = new QPushButton(widget_9);
        btnSub2->setObjectName(QString::fromUtf8("btnSub2"));
        sizePolicy.setHeightForWidth(btnSub2->sizePolicy().hasHeightForWidth());
        btnSub2->setSizePolicy(sizePolicy);
        btnSub2->setFont(font3);
        btnSub2->setFocusPolicy(Qt::NoFocus);
        btnSub2->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
"   background-color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"   background-color:rgb(185,185,185);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
""));

        gridLayout_14->addWidget(btnSub2, 0, 0, 1, 1);


        gridLayout_12->addWidget(widget_9, 0, 5, 1, 1);

        gridLayout_12->setColumnStretch(0, 2);
        gridLayout_12->setColumnStretch(1, 1);
        gridLayout_12->setColumnStretch(2, 1);
        gridLayout_12->setColumnStretch(3, 1);
        gridLayout_12->setColumnStretch(4, 1);
        gridLayout_12->setColumnStretch(5, 3);

        gridLayout_15->addWidget(widget_7, 2, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);

        wTool = new QWidget(wBg);
        wTool->setObjectName(QString::fromUtf8("wTool"));
        wTool->setMinimumSize(QSize(0, 30));
        wTool->setStyleSheet(QString::fromUtf8("QWidget#wTool{background-color: rgba(220, 220, 220, 220);}"));
        horizontalLayout = new QHBoxLayout(wTool);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnChange = new QPushButton(wTool);
        btnChange->setObjectName(QString::fromUtf8("btnChange"));
        sizePolicy.setHeightForWidth(btnChange->sizePolicy().hasHeightForWidth());
        btnChange->setSizePolicy(sizePolicy);
        btnChange->setFont(font1);
        btnChange->setFocusPolicy(Qt::NoFocus);
        btnChange->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
"   background-color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"   background-color:rgb(185,185,185);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
""));
        btnChange->setCheckable(true);

        horizontalLayout->addWidget(btnChange);

        btnSpace = new QPushButton(wTool);
        btnSpace->setObjectName(QString::fromUtf8("btnSpace"));
        sizePolicy.setHeightForWidth(btnSpace->sizePolicy().hasHeightForWidth());
        btnSpace->setSizePolicy(sizePolicy);
        btnSpace->setFont(font1);
        btnSpace->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnSpace);

        btnPoint = new QPushButton(wTool);
        btnPoint->setObjectName(QString::fromUtf8("btnPoint"));
        sizePolicy.setHeightForWidth(btnPoint->sizePolicy().hasHeightForWidth());
        btnPoint->setSizePolicy(sizePolicy);
        btnPoint->setFont(font1);
        btnPoint->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnPoint);

        btnReturn = new QPushButton(wTool);
        btnReturn->setObjectName(QString::fromUtf8("btnReturn"));
        sizePolicy.setHeightForWidth(btnReturn->sizePolicy().hasHeightForWidth());
        btnReturn->setSizePolicy(sizePolicy);
        btnReturn->setFont(font1);
        btnReturn->setFocusPolicy(Qt::NoFocus);
        btnReturn->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
"   background-color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"   background-color:rgb(185,185,185);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 6px;\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(btnReturn);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 2);

        gridLayout->addWidget(wTool, 2, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 3);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowMinimumHeight(0, 1);
        gridLayout->setRowMinimumHeight(1, 3);
        gridLayout->setRowMinimumHeight(2, 1);

        gridLayout_3->addWidget(wBg, 0, 0, 1, 1);


        retranslateUi(LayerKeyborad);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LayerKeyborad);
    } // setupUi

    void retranslateUi(QWidget *LayerKeyborad)
    {
        LayerKeyborad->setWindowTitle(QCoreApplication::translate("LayerKeyborad", "Form", nullptr));
        btnCancel->setText(QCoreApplication::translate("LayerKeyborad", "cancel", nullptr));
        btnI->setText(QCoreApplication::translate("LayerKeyborad", "I", nullptr));
        btnQ->setText(QCoreApplication::translate("LayerKeyborad", "Q", nullptr));
        btnP->setText(QCoreApplication::translate("LayerKeyborad", "P", nullptr));
        btnE->setText(QCoreApplication::translate("LayerKeyborad", "E", nullptr));
        btnU->setText(QCoreApplication::translate("LayerKeyborad", "U", nullptr));
        btnT->setText(QCoreApplication::translate("LayerKeyborad", "T", nullptr));
        btnY->setText(QCoreApplication::translate("LayerKeyborad", "Y", nullptr));
        btnO->setText(QCoreApplication::translate("LayerKeyborad", "O", nullptr));
        btnR->setText(QCoreApplication::translate("LayerKeyborad", "R", nullptr));
#if QT_CONFIG(tooltip)
        btnW->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        btnW->setText(QCoreApplication::translate("LayerKeyborad", "W", nullptr));
        btnA->setText(QCoreApplication::translate("LayerKeyborad", "A", nullptr));
        btnS->setText(QCoreApplication::translate("LayerKeyborad", "S", nullptr));
        btnD->setText(QCoreApplication::translate("LayerKeyborad", "D", nullptr));
        btnF->setText(QCoreApplication::translate("LayerKeyborad", "F", nullptr));
        btnG->setText(QCoreApplication::translate("LayerKeyborad", "G", nullptr));
        btnH->setText(QCoreApplication::translate("LayerKeyborad", "H", nullptr));
        btnJ->setText(QCoreApplication::translate("LayerKeyborad", "J", nullptr));
        btnK->setText(QCoreApplication::translate("LayerKeyborad", "K", nullptr));
        btnL->setText(QCoreApplication::translate("LayerKeyborad", "L", nullptr));
        btnShift->setText(QCoreApplication::translate("LayerKeyborad", "shift", nullptr));
        btnZ->setText(QCoreApplication::translate("LayerKeyborad", "Z", nullptr));
        btnX->setText(QCoreApplication::translate("LayerKeyborad", "X", nullptr));
        btnC->setText(QCoreApplication::translate("LayerKeyborad", "C", nullptr));
        btnV->setText(QCoreApplication::translate("LayerKeyborad", "V", nullptr));
        btnB->setText(QCoreApplication::translate("LayerKeyborad", "B", nullptr));
        btnN->setText(QCoreApplication::translate("LayerKeyborad", "N", nullptr));
        btnM->setText(QCoreApplication::translate("LayerKeyborad", "M", nullptr));
        btnSub->setText(QCoreApplication::translate("LayerKeyborad", "backspace", nullptr));
        btnSp07->setText(QCoreApplication::translate("LayerKeyborad", "8.*", nullptr));
        btnSp00->setText(QCoreApplication::translate("LayerKeyborad", "1.[", nullptr));
        btnSp09->setText(QCoreApplication::translate("LayerKeyborad", "0.=", nullptr));
        btnSp02->setText(QCoreApplication::translate("LayerKeyborad", "3.{", nullptr));
        btnSp06->setText(QCoreApplication::translate("LayerKeyborad", "7.^", nullptr));
        btnSp04->setText(QCoreApplication::translate("LayerKeyborad", "5.#", nullptr));
        btnSp05->setText(QCoreApplication::translate("LayerKeyborad", "6.%", nullptr));
        btnSp08->setText(QCoreApplication::translate("LayerKeyborad", "9.+", nullptr));
        btnSp03->setText(QCoreApplication::translate("LayerKeyborad", "4.}", nullptr));
#if QT_CONFIG(tooltip)
        btnSp01->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        btnSp01->setText(QCoreApplication::translate("LayerKeyborad", "2.]", nullptr));
        btnSp14->setText(QCoreApplication::translate("LayerKeyborad", "(.<", nullptr));
        btnSp15->setText(QCoreApplication::translate("LayerKeyborad", ").>", nullptr));
        btnSp18->setText(QCoreApplication::translate("LayerKeyborad", "@.\302\245", nullptr));
        btnSp10->setText(QCoreApplication::translate("LayerKeyborad", "-._", nullptr));
        btnSp13->setText(QCoreApplication::translate("LayerKeyborad", ";.~", nullptr));
#if QT_CONFIG(tooltip)
        btnSp11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        btnSp11->setText(QCoreApplication::translate("LayerKeyborad", "/.\\", nullptr));
        btnSp19->setText(QCoreApplication::translate("LayerKeyborad", "\".\342\200\242", nullptr));
        btnSp12->setText(QCoreApplication::translate("LayerKeyborad", ":.|", nullptr));
        btnSp16->setText(QCoreApplication::translate("LayerKeyborad", "$.\302\243", nullptr));
        btnSpChange->setText(QCoreApplication::translate("LayerKeyborad", "#+=", nullptr));
        btnSp22->setText(QCoreApplication::translate("LayerKeyborad", "!.!", nullptr));
        btnSp20->setText(QCoreApplication::translate("LayerKeyborad", ",.,", nullptr));
        btnSp21->setText(QCoreApplication::translate("LayerKeyborad", "?.?", nullptr));
        btnSp23->setText(QCoreApplication::translate("LayerKeyborad", "\342\235\234.\342\235\234", nullptr));
        btnSub2->setText(QCoreApplication::translate("LayerKeyborad", "backspace", nullptr));
        btnChange->setText(QCoreApplication::translate("LayerKeyborad", "123", nullptr));
        btnSpace->setText(QCoreApplication::translate("LayerKeyborad", "space", nullptr));
        btnPoint->setText(QCoreApplication::translate("LayerKeyborad", ".", nullptr));
        btnReturn->setText(QCoreApplication::translate("LayerKeyborad", "return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerKeyborad: public Ui_LayerKeyborad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERKEYBORAD_H
