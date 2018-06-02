/********************************************************************************
** Form generated from reading UI file 'MyVeggies.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYVEGGIES_H
#define UI_MYVEGGIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyVeggies
{
public:

    void setupUi(QWidget *MyVeggies)
    {
        if (MyVeggies->objectName().isEmpty())
            MyVeggies->setObjectName(QStringLiteral("MyVeggies"));
        MyVeggies->resize(400, 300);

        retranslateUi(MyVeggies);

        QMetaObject::connectSlotsByName(MyVeggies);
    } // setupUi

    void retranslateUi(QWidget *MyVeggies)
    {
        MyVeggies->setWindowTitle(QApplication::translate("MyVeggies", "MyVeggies", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyVeggies: public Ui_MyVeggies {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYVEGGIES_H
