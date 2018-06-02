#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Exam2.h"

class Exam2 : public QMainWindow
{
	Q_OBJECT

public:
	Exam2(QWidget *parent = Q_NULLPTR);

private:
	Ui::Exam2Class ui;
};
