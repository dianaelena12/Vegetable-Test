/********************************************************************************
** Form generated from reading UI file 'Exam2.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAM2_H
#define UI_EXAM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Exam2Class
{
public:
    QWidget *centralWidget;
    QListWidget *veggieList;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Exam2Class)
    {
        if (Exam2Class->objectName().isEmpty())
            Exam2Class->setObjectName(QStringLiteral("Exam2Class"));
        Exam2Class->resize(600, 400);
        centralWidget = new QWidget(Exam2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        veggieList = new QListWidget(centralWidget);
        veggieList->setObjectName(QStringLiteral("veggieList"));
        veggieList->setGeometry(QRect(30, 20, 171, 211));
        Exam2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Exam2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        Exam2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Exam2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Exam2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Exam2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Exam2Class->setStatusBar(statusBar);

        retranslateUi(Exam2Class);

        QMetaObject::connectSlotsByName(Exam2Class);
    } // setupUi

    void retranslateUi(QMainWindow *Exam2Class)
    {
        Exam2Class->setWindowTitle(QApplication::translate("Exam2Class", "Exam2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Exam2Class: public Ui_Exam2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAM2_H
