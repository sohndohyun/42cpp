#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{
	name = "default";
}

std::string Brain::getName()
{
	return name;
}

void Brain::setName(std::string name)
{
	this->name = name;
}

std::string Brain::identify()
{
	std::stringstream address;
	address << this;
	return address.str();
}
