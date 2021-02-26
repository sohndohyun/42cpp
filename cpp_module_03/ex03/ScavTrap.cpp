#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, "default")
{
	std::cout << "SC4V-TP <" << getName() << "> Created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, name)
{
	std::cout << "SC4V-TP <" << getName() << "> Created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap)
{
	*this = scavTrap;

	std::cout << "SC4V-TP <" << getName() << "> Copied!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << getName() << "> Destroyed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	ClapTrap::operator=(scavTrap);
	std::cout << "SC4V-TP <" << getName() << "> Assigned!" << std::endl;
	return *this;
}

void ScavTrap::challengeNewcomer()
{
	std::string challenges[] = {
		"Muhan dojeon", "1 bak 2 ill", "Running man", "Jibsabu illchae", "Na honja sanda"
	};
	std::cout << "SC4V-TP <" << getName() << "> challenged " << challenges[rand() % 5] << std::endl;
}