#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
