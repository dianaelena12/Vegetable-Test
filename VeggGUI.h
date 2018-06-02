#pragma once

#include <QWidget>
#include "ui_VeggGUI.h"
#include "Controller.h"

class VeggGUI : public QWidget
{
	Q_OBJECT

public:
	VeggGUI(Controller& c,QWidget *parent = Q_NULLPTR);
	~VeggGUI();

private:
	Ui::VeggGUI ui;
	Controller& ctrl;
	void populateList();
	void populateResult();
	void connectSlotsAndSignals();
	void showInfoOfAVeggie();
};
