#include <iostream>
#include <cstdlib>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand(time(NULL));

	FragTrap fragTrap("Unit 1");
	fragTrap.rangedAttack("The king");
	fragTrap.meleeAttack("The Queen");
	fragTrap.takeDamage(10);
	fragTrap.beRepaired(10);
	fragTrap.takeDamage(50);
	fragTrap.beRepaired(100);
	fragTrap.takeDamage(50);
	fragTrap.beRepaired(100);
	fragTrap.takeDamage(15);
	fragTrap.beRepaired(15); 
	fragTrap.takeDamage(1000);
	
	FragTrap fragTrap2("Unit 2");
	fragTrap2.vaulthunter_dot_exe("Human");
	fragTrap2.vaulthunter_dot_exe("Sorcerer");
	fragTrap2.vaulthunter_dot_exe("Knight");
	fragTrap2.vaulthunter_dot_exe("Giant");
	fragTrap2.vaulthunter_dot_exe("Ant");

	std::cout << std::endl;

	ScavTrap scavTrap("Unit 3");
	scavTrap.rangedAttack("The king");
	scavTrap.meleeAttack("The Queen");
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(10);
	scavTrap.takeDamage(20);
	scavTrap.beRepaired(100);
	scavTrap.takeDamage(40);
	scavTrap.beRepaired(26);
	scavTrap.beRepaired(1);
	scavTrap.takeDamage(1000);

	ScavTrap scavTrap2("Unit 4");
	scavTrap2.challengeNewcomer();
	scavTrap2.challengeNewcomer();
	scavTrap2.challengeNewcomer();
	scavTrap2.challengeNewcomer();
	scavTrap2.challengeNewcomer();

	std::cout << std::endl;
	NinjaTrap ninja("Unit 5");
	ninja.rangedAttack("The king");
	ninja.meleeAttack("The Queen");
	ninja.takeDamage(10);
	ninja.beRepaired(10);
	ninja.takeDamage(20);
	ninja.beRepaired(100);
	ninja.takeDamage(40);
	ninja.beRepaired(26);
	ninja.beRepaired(1);
	ninja.takeDamage(1000);

	NinjaTrap ninja2("Unit 6");
	NinjaTrap ninja3("Unit 7");
	ClapTrap clapTrap("Unit 8");
	ninja2.ninjaShoebox(scavTrap2);
	ninja2.ninjaShoebox(fragTrap2);
	ninja2.ninjaShoebox(ninja3);
	ninja2.ninjaShoebox(clapTrap);
	return 0;
}
