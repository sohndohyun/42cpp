#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string name;
	std::string title;

	Sorcerer();
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &sorcerer);
	~Sorcerer();
	Sorcerer& operator=(const Sorcerer &sorcerer);

	std::string getName();
	std::string getTitle();

	void polymorph(Victim const &) const;
};

std::ostream& operator<<(std::ostream &stream, Sorcerer &sorcerer);

#endif
