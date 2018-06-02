#include "VeggGUI.h"

VeggGUI::VeggGUI(Controller& c,QWidget *parent)
	: QWidget(parent), ctrl(c)
{
	ui.setupUi(this);
	populateList();
	connectSlotsAndSignals();
}

VeggGUI::~VeggGUI()
{
}

void VeggGUI::populateList()
{
	if (ui.veggieList->count() != 0)
		ui.veggieList->clear();
	vector<Vegetable> all = this->ctrl.getRepo().getAll();

	//unique(all.begin(), all.end(), [](Vegetable &t1, Vegetable &t2) {return t1.getFamily() == t2.getFamily(); });

	sort(all.begin(), all.end(), [](Vegetable &t1, Vegetable& t2) {return t1.getFamily() < t2.getFamily(); });
	for (auto it : all) {
		QString current = "";
		current += QString::fromStdString(it.getFamily());
		QListWidgetItem* item = new QListWidgetItem{ current };
		ui.veggieList->addItem(current);
		
	}


}

void VeggGUI::populateResult()
{
	if (ui.restList->count() != 0)
		ui.restList->clear();
	string family = ui.veggieList->selectedItems().at(0)->text().toStdString();
	vector<Vegetable> all = this->ctrl.getRepo().getVeggiesByFamilly(family);
	for (auto v : all) {
		QString current = "";
		current += QString::fromStdString(v.toString());
		QListWidgetItem* item = new QListWidgetItem{ current };
		ui.restList->addItem(current);

	}
}

void VeggGUI::connectSlotsAndSignals()
{
	QObject::connect(ui.veggieList, &QListWidget::itemSelectionChanged, this, &VeggGUI::populateResult);
	QObject::connect(ui.searchButton, &QPushButton::clicked, this, &VeggGUI::showInfoOfAVeggie);
}

void VeggGUI::showInfoOfAVeggie()
{
	string name = ui.searchLine->text().toStdString();
	if (ui.resultList->count() != 0)
		ui.resultList->clear();
	string info = this->ctrl.getRepo().getPartsOfAPlant(name);
	QString current = QString::fromStdString(info);
	QListWidgetItem* item = new QListWidgetItem{ current };
	ui.resultList->addItem(item);
}
