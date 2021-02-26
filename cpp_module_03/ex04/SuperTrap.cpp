#include "SuperTrap.hpp"
#include <iostream>
#include <cstdlib>

SuperTrap::SuperTrap() : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, "default"), FragTrap(), NinjaTrap()
{
	std::cout << "SUP3R-TP <" << FragTrap::getName() << "> Created!" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, name), FragTrap(), NinjaTrap()
{
	std::cout << "SUP3R-TP <" << FragTrap::getName() << "> Created!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& superTrap) : ClapTrap(superTrap), FragTrap(superTrap), NinjaTrap(superTrap)
{
	*this = superTrap;

	std::cout << "SUP3R-TP <" << FragTrap::getName() << "> Copied!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUP3R-TP <" << FragTrap::getName() << "> Destroyed!" << std::endl;
}

SuperTrap& SuperTrap::operator=(const SuperTrap& superTrap)
{
	FragTrap::operator=(superTrap);
	NinjaTrap::operator=(superTrap);
	std::cout << "SUP3R-TP <" << FragTrap::getName() << "> Assigned!" << std::endl;
	return *this;
}