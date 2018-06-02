#include "Vegetable.h"

string Vegetable::toString()
{
	stringstream s;
	s << this->name << " :";
	for (auto p : this->parts)
		s << p << " ";
	s << endl;
	return string(s.str());

}

string Vegetable::toMiniString()
{
	stringstream s;
	for (auto p : this->parts)
		s << p << " ";
	int len =this->parts.size();
	s << to_string(len);
	s << endl;
	return string(s.str());

}
