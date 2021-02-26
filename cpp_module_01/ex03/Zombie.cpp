#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	this->type = "default_type";
	this->name = "default_name";
}

Zombie::Zombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::setType(std::string type)
{
	this->type = type;
}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << this->type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
}

