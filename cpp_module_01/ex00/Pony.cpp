#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name)
{
	this->name = name;
}

void Pony::print_name()
{
	std::cout << "Pony name is " << name << std::endl;
}
