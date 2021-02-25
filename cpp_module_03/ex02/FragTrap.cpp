#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>

FragTrap::FragTrap() : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, "default")
{
	std::cout << "FR4G-TP <" << getName() << "> Created!" << std::endl;
}

FragTrap::FragTrap(std::string name) :  ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, name)
{
	std::cout << "FR4G-TP <" << getName() << "> Created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap)
{
	*this = fragTrap;
	std::cout << "FR4G-TP <" << getName() << "> Copied!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << getName() << "> Destroyed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
	ClapTrap::operator=(fragTrap);
	std::cout << "FR4G-TP <" << getName() << "> Assigned!" << std::endl;
	return *this;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string attacks[] = {
		"Fire", "Ice", "Light", "Dark", "Poison"
	};

	unsigned int damage[] = {1, 2, 4, 8, 16};
	int random = rand() % 5;
	if (getEnergyPoint() >= 25)
	{
		getEnergyPoint() -= 25;
		std::cout << "FR4G-TP <" << getName() << "> attacks <" << target 
		<< "> with " << attacks[random] << ", causing <"
		<< damage[random] << "> points of damage!" << std::endl;
		return;
	}
	std::cout << "FR4G-TP <" << getName() << "> can't use vaulthunter_dot_exe" << std::endl;
}
