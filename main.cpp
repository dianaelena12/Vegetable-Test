#include "VeggGUI.h"
#include <QtWidgets/QApplication>
#include "Controller.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Repository r{ "file.txt" };
	r.readFromFile();
	Controller c{ r };
	VeggGUI w{ c };
	w.show();
	return a.exec();
}
