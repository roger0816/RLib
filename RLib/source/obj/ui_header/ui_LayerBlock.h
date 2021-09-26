/********************************************************************************
** Form generated from reading UI file 'LayerBlock.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERBLOCK_H
#define UI_LAYERBLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "ItemLoadingBarA.h"

QT_BEGIN_NAMESPACE

class Ui_LayerBlock
{
public:
    QGridLayout *gridLayout;
    QWidget *wBg;
    QGridLayout *gridLayout_2;
    ItemLoadingBarA *vLoadingBar;

    void setupUi(QWidget *LayerBlock)
    {
        if (LayerBlock->objectName().isEmpty())
            LayerBlock->setObjectName(QString::fromUtf8("LayerBlock"));
        LayerBlock->resize(768, 656);
        gridLayout = new QGridLayout(LayerBlock);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wBg = new QWidget(LayerBlock);
        wBg->setObjectName(QString::fromUtf8("wBg"));
        wBg->setStyleSheet(QString::fromUtf8("QWidget#wBg{background-color: rgba(0, 0, 0, 90);}"));
        gridLayout_2 = new QGridLayout(wBg);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        vLoadingBar = new ItemLoadingBarA(wBg);
        vLoadingBar->setObjectName(QString::fromUtf8("vLoadingBar"));
        vLoadingBar->setMinimumSize(QSize(500, 500));
        vLoadingBar->setMaximumSize(QSize(500, 500));
        vLoadingBar->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(vLoadingBar, 0, 0, 1, 1);


        gridLayout->addWidget(wBg, 0, 0, 1, 1);


        retranslateUi(LayerBlock);

        QMetaObject::connectSlotsByName(LayerBlock);
    } // setupUi

    void retranslateUi(QWidget *LayerBlock)
    {
        LayerBlock->setWindowTitle(QCoreApplication::translate("LayerBlock", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerBlock: public Ui_LayerBlock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERBLOCK_H
