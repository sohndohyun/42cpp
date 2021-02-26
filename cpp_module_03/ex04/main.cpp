#include <iostream>
#include <cstdlib>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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

	std::cout << std::endl;
	SuperTrap superTrap("Unit 9");
	superTrap.rangedAttack("The king");
	superTrap.meleeAttack("The Queen");
	superTrap.takeDamage(10);
	superTrap.beRepaired(10);
	superTrap.takeDamage(20);
	superTrap.beRepaired(100);
	superTrap.takeDamage(40);
	superTrap.beRepaired(26);
	superTrap.beRepaired(1);
	superTrap.takeDamage(1000);

	SuperTrap superTrap2("Unit 10");
	superTrap2.ninjaShoebox(scavTrap2);
	superTrap2.ninjaShoebox(fragTrap2);
	superTrap2.ninjaShoebox(ninja3);
	superTrap2.ninjaShoebox(clapTrap);
	superTrap2.vaulthunter_dot_exe("Human");
	superTrap2.vaulthunter_dot_exe("Sorcerer");
	superTrap2.vaulthunter_dot_exe("Knight");
	superTrap2.vaulthunter_dot_exe("Giant");
	superTrap2.vaulthunter_dot_exe("Ant");
	
	return 0;
}
