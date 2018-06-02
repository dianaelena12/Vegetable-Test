/********************************************************************************
** Form generated from reading UI file 'VeggGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEGGGUI_H
#define UI_VEGGGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VeggGUI
{
public:
    QListWidget *veggieList;
    QListWidget *restList;
    QLineEdit *searchLine;
    QPushButton *searchButton;
    QListWidget *resultList;

    void setupUi(QWidget *VeggGUI)
    {
        if (VeggGUI->objectName().isEmpty())
            VeggGUI->setObjectName(QStringLiteral("VeggGUI"));
        VeggGUI->resize(400, 300);
        veggieList = new QListWidget(VeggGUI);
        veggieList->setObjectName(QStringLiteral("veggieList"));
        veggieList->setGeometry(QRect(20, 20, 121, 192));
        restList = new QListWidget(VeggGUI);
        restList->setObjectName(QStringLiteral("restList"));
        restList->setGeometry(QRect(180, 20, 191, 111));
        searchLine = new QLineEdit(VeggGUI);
        searchLine->setObjectName(QStringLiteral("searchLine"));
        searchLine->setGeometry(QRect(180, 150, 113, 20));
        searchButton = new QPushButton(VeggGUI);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(320, 150, 75, 23));
        resultList = new QListWidget(VeggGUI);
        resultList->setObjectName(QStringLiteral("resultList"));
        resultList->setGeometry(QRect(180, 180, 171, 51));

        retranslateUi(VeggGUI);

        QMetaObject::connectSlotsByName(VeggGUI);
    } // setupUi

    void retranslateUi(QWidget *VeggGUI)
    {
        VeggGUI->setWindowTitle(QApplication::translate("VeggGUI", "VeggGUI", nullptr));
        searchButton->setText(QApplication::translate("VeggGUI", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VeggGUI: public Ui_VeggGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEGGGUI_H
