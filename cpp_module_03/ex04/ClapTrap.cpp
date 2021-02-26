#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>

ClapTrap::ClapTrap()
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	name = "default";
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;

	std::cout << "CL4P-TP <" << name << "> Created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	this->name = name;

	std::cout << "CL4P-TP <" << name << "> Created!" << std::endl;
}

ClapTrap::ClapTrap(unsigned int hitPoints, unsigned int maxHitPoints, unsigned int energyPoints,
		unsigned int maxEnergyPoints, unsigned int level, unsigned int meleeAttackDamage,
		unsigned int rangedAttackDamage, unsigned int armorDamageReduction, std::string name)
{
	this->hitPoints = hitPoints;
	this->maxHitPoints = maxHitPoints;
	this->energyPoints = energyPoints;
	this->maxEnergyPoints = maxEnergyPoints;
	this->level = level;
	this->meleeAttackDamage = meleeAttackDamage;
	this->rangedAttackDamage = rangedAttackDamage;
	this->armorDamageReduction = armorDamageReduction;
	this->name = name;

	std::cout << "CL4P-TP <" << name << "> Created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& fragTrap)
{
	*this = fragTrap;

	std::cout << "CL4P-TP <" << name << "> Copied!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP <" << name << "> Destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& fragTrap)
{
	if (this != &fragTrap)
	{
		hitPoints = fragTrap.hitPoints;
		maxHitPoints = fragTrap.maxHitPoints;
		energyPoints = fragTrap.energyPoints;
		maxEnergyPoints = fragTrap.maxEnergyPoints;
		level = fragTrap.level;
		meleeAttackDamage = fragTrap.meleeAttackDamage;
		rangedAttackDamage = fragTrap.rangedAttackDamage;
		armorDamageReduction = fragTrap.armorDamageReduction;
		name = fragTrap.name;
	}
	std::cout << "CL4P-TP <" << name << "> Assigned!" << std::endl;
	return *this;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "CL4P-TP <" << name << "> attacks <" << target << "> at range, causing <"
		<< rangedAttackDamage << "> points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "CL4P-TP <" << name << "> attacks <" << target << "> at melee, causing <"
		<< meleeAttackDamage << "> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	long long damage = amount - armorDamageReduction;
	damage = damage < hitPoints ? damage : hitPoints;
	damage = damage < 0 ? 0 : damage;
	std::cout << "CL4P-TP <" << name << "> take <"
		<< damage << "> points of damage!" << std::endl;
	hitPoints -= damage;
	if (hitPoints == 0)
		std::cout << "CL4P-TP <" << name << "> died!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	long long heal = amount;
	heal = hitPoints + heal > maxHitPoints ? maxHitPoints - hitPoints : heal;
	if (energyPoints < heal)
	{
		std::cout << "CL4P-TP <" << name << "> can't repaired" << std::endl;
		return;
	}
	energyPoints -= heal;
	hitPoints += heal;
	std::cout << "CL4P-TP <" << name << "> repaired by <" << heal << ">" << std::endl;
}

std::string &ClapTrap::getName()
{
	return name;
}

unsigned int &ClapTrap::getEnergyPoint()
{
	return energyPoints;
}