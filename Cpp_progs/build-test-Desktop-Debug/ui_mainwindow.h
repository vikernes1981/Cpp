/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *sum;
    QLineEdit *input1;
    QLabel *label1;
    QLineEdit *input2;
    QPushButton *pushButton_2;
    QPushButton *divide;
    QPushButton *sub;
    QPushButton *mult;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(685, 324);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sum = new QPushButton(centralWidget);
        sum->setObjectName(QString::fromUtf8("sum"));
        sum->setGeometry(QRect(140, 110, 84, 28));
        input1 = new QLineEdit(centralWidget);
        input1->setObjectName(QString::fromUtf8("input1"));
        input1->setGeometry(QRect(290, 30, 113, 28));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(310, 180, 63, 20));
        input2 = new QLineEdit(centralWidget);
        input2->setObjectName(QString::fromUtf8("input2"));
        input2->setGeometry(QRect(290, 70, 113, 28));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 110, 84, 28));
        divide = new QPushButton(centralWidget);
        divide->setObjectName(QString::fromUtf8("divide"));
        divide->setGeometry(QRect(370, 110, 84, 28));
        sub = new QPushButton(centralWidget);
        sub->setObjectName(QString::fromUtf8("sub"));
        sub->setGeometry(QRect(480, 110, 84, 28));
        mult = new QPushButton(centralWidget);
        mult->setObjectName(QString::fromUtf8("mult"));
        mult->setGeometry(QRect(260, 110, 84, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 685, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        sum->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Push Me", 0, QApplication::UnicodeUTF8));
        divide->setText(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        sub->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        mult->setText(QApplication::translate("MainWindow", "x", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
