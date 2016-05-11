/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Thu Apr 21 17:52:07 2016
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Num0;
    QPushButton *Delete;
    QPushButton *Num7;
    QPushButton *Num2;
    QPushButton *Num3;
    QPushButton *Num4;
    QPushButton *NumDot;
    QPushButton *Num1;
    QPushButton *Num9;
    QPushButton *Num6;
    QPushButton *Num8;
    QPushButton *Num5;
    QPushButton *Enter;
    QPushButton *Reset;
    QTextEdit *textX;
    QTextEdit *textY;
    QTextEdit *textTheta;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *Walk;
    QPushButton *Sit;
    QPushButton *Stand;
    QPushButton *Speak;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menuNAO_commands;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(487, 259);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(190, 50, 241, 131));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Num0 = new QPushButton(gridLayoutWidget);
        Num0->setObjectName(QString::fromUtf8("Num0"));

        gridLayout->addWidget(Num0, 3, 1, 1, 1);

        Delete = new QPushButton(gridLayoutWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));

        gridLayout->addWidget(Delete, 3, 2, 1, 1);

        Num7 = new QPushButton(gridLayoutWidget);
        Num7->setObjectName(QString::fromUtf8("Num7"));

        gridLayout->addWidget(Num7, 2, 0, 1, 1);

        Num2 = new QPushButton(gridLayoutWidget);
        Num2->setObjectName(QString::fromUtf8("Num2"));

        gridLayout->addWidget(Num2, 0, 1, 1, 1);

        Num3 = new QPushButton(gridLayoutWidget);
        Num3->setObjectName(QString::fromUtf8("Num3"));

        gridLayout->addWidget(Num3, 0, 2, 1, 1);

        Num4 = new QPushButton(gridLayoutWidget);
        Num4->setObjectName(QString::fromUtf8("Num4"));

        gridLayout->addWidget(Num4, 1, 0, 1, 1);

        NumDot = new QPushButton(gridLayoutWidget);
        NumDot->setObjectName(QString::fromUtf8("NumDot"));

        gridLayout->addWidget(NumDot, 3, 0, 1, 1);

        Num1 = new QPushButton(gridLayoutWidget);
        Num1->setObjectName(QString::fromUtf8("Num1"));

        gridLayout->addWidget(Num1, 0, 0, 1, 1);

        Num9 = new QPushButton(gridLayoutWidget);
        Num9->setObjectName(QString::fromUtf8("Num9"));

        gridLayout->addWidget(Num9, 2, 2, 1, 1);

        Num6 = new QPushButton(gridLayoutWidget);
        Num6->setObjectName(QString::fromUtf8("Num6"));

        gridLayout->addWidget(Num6, 1, 2, 1, 1);

        Num8 = new QPushButton(gridLayoutWidget);
        Num8->setObjectName(QString::fromUtf8("Num8"));

        gridLayout->addWidget(Num8, 2, 1, 1, 1);

        Num5 = new QPushButton(gridLayoutWidget);
        Num5->setObjectName(QString::fromUtf8("Num5"));

        gridLayout->addWidget(Num5, 1, 1, 1, 1);

        Enter = new QPushButton(gridLayoutWidget);
        Enter->setObjectName(QString::fromUtf8("Enter"));

        gridLayout->addWidget(Enter, 4, 1, 1, 1);

        Reset = new QPushButton(gridLayoutWidget);
        Reset->setObjectName(QString::fromUtf8("Reset"));

        gridLayout->addWidget(Reset, 4, 0, 1, 1);

        textX = new QTextEdit(centralWidget);
        textX->setObjectName(QString::fromUtf8("textX"));
        textX->setGeometry(QRect(10, 10, 61, 35));
        textY = new QTextEdit(centralWidget);
        textY->setObjectName(QString::fromUtf8("textY"));
        textY->setGeometry(QRect(160, 10, 61, 35));
        textTheta = new QTextEdit(centralWidget);
        textTheta->setObjectName(QString::fromUtf8("textTheta"));
        textTheta->setGeometry(QRect(320, 10, 61, 35));
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 50, 151, 91));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Walk = new QPushButton(gridLayoutWidget_2);
        Walk->setObjectName(QString::fromUtf8("Walk"));

        gridLayout_2->addWidget(Walk, 0, 0, 1, 1);

        Sit = new QPushButton(gridLayoutWidget_2);
        Sit->setObjectName(QString::fromUtf8("Sit"));

        gridLayout_2->addWidget(Sit, 1, 0, 1, 1);

        Stand = new QPushButton(gridLayoutWidget_2);
        Stand->setObjectName(QString::fromUtf8("Stand"));

        gridLayout_2->addWidget(Stand, 0, 1, 1, 1);

        Speak = new QPushButton(gridLayoutWidget_2);
        Speak->setObjectName(QString::fromUtf8("Speak"));

        gridLayout_2->addWidget(Speak, 1, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 15, 71, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 15, 71, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(390, 15, 81, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 487, 23));
        menuNAO_commands = new QMenu(menuBar);
        menuNAO_commands->setObjectName(QString::fromUtf8("menuNAO_commands"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuNAO_commands->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        Num0->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        Delete->setText(QApplication::translate("MainWindow", "Del", 0, QApplication::UnicodeUTF8));
        Num7->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        Num2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        Num3->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        Num4->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        NumDot->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
        Num1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        Num9->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        Num6->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        Num8->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        Num5->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        Enter->setText(QApplication::translate("MainWindow", "Enter", 0, QApplication::UnicodeUTF8));
        Reset->setText(QApplication::translate("MainWindow", "Reset", 0, QApplication::UnicodeUTF8));
        textX->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        Walk->setText(QApplication::translate("MainWindow", "Walk", 0, QApplication::UnicodeUTF8));
        Sit->setText(QApplication::translate("MainWindow", "Sit down", 0, QApplication::UnicodeUTF8));
        Stand->setText(QApplication::translate("MainWindow", "Stand up", 0, QApplication::UnicodeUTF8));
        Speak->setText(QApplication::translate("MainWindow", "Speak", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "X position", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Y position", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Theta angle", 0, QApplication::UnicodeUTF8));
        menuNAO_commands->setTitle(QApplication::translate("MainWindow", "NAO commands", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
