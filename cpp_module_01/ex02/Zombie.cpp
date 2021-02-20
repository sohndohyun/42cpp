#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << this->type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
}

