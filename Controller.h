#pragma once
#include "Repository.h"

class Controller {
private:
	Repository repo;
public:
	Controller(Repository repo) : repo(repo) {}
	~Controller() {}
	Repository getRepo()const { return this->repo; }
	//string getInfo(string name) const { return repo.getPartsOfAPlant(name); }
};
