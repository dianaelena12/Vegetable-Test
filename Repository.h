#pragma once
#include "Vegetable.h"
#include <vector>
#include <string>

using namespace std;

class Repository {
private:
	vector<Vegetable> all;
	string fileName;
public:
	Repository(string fileName);
	~Repository() {};
	void readFromFile();
	vector<Vegetable> getAll() const { return this->all; }
	vector<Vegetable> getVeggiesByFamilly(string familly);
	string getPartsOfAPlant(string name);
	/*
		Function which returns a string containing all the parts edible of a 
		plant and how many of them are
		Input: - name, a string containing the name of the variable
		Output: - a string with all the edible parts and their number
				- or, the message "No such vegetable found!"
	*/
};