#include "Repository.h"
#include <fstream>
#include <sstream>

Repository::Repository(string fileName)
{
	this->fileName = fileName;
}

void Repository::readFromFile()
{
	ifstream f(this->fileName);
	string line = "";
	while (getline(f, line)) {
		stringstream elem(line);
		vector<string> aux{};
		vector<string> parts{};
		string current;
		while (getline(elem, current, '|')) {
			aux.push_back(current);
		}
		stringstream p(aux[2]);
		string pi;
		while (getline(p, pi, ','))
			parts.push_back(pi);
		Vegetable v{ aux[0],aux[1],parts };
		this->all.push_back(v);
	}
}

vector<Vegetable> Repository::getVeggiesByFamilly(string familly)
{
	vector<Vegetable> result;
	for (auto it : this->all) {
		if (it.getFamily() == familly)
			result.push_back(it);
	}
	return result;
}

string Repository::getPartsOfAPlant(string name)
{
	string r="";
	vector<Vegetable> result;
	for (int i = 0; i < this->all.size(); i++) {
		if (this->all[i].getName() == name)
			r = this->all[i].toMiniString();
	}
	
	/*for (auto it : this->all) {
		if (it.getFamily() == name)
			result.push_back(it);
	}*/
	//r += result[0].toMiniString();
	if (r == "")
		r += "No such vegetable found!";
	return r;

}

