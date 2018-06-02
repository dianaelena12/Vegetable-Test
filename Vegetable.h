#pragma once
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Vegetable {
private:
	string family;
	string name;
	vector<string> parts;
public:
	Vegetable(string family, string name, vector<string> parts) : family(family), name(name), parts(parts) {}
	~Vegetable() {}
	string toString();
	string getFamily()const { return this->family; }
	string getName()const { return this->name; }
	vector<string> getParts()const { return this->parts; }
	string toMiniString();
};