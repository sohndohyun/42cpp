#include "ZombieHorde.hpp"
#include <cstdlib>
#include <ctime>

ZombieHorde::ZombieHorde(int n)
{
	std::string name_list[] = {"Muller", "Frantic", "Hacker", "Haunter", "Bloomer",
                                "Climber", "Tester", "Tumbler", "Chunky", "Dasher"};
	std::string type_list[] = {"Moon", "Fire", "Water", "Tree", "Iron", "Earth" "Sun"};
	srand(time(NULL));
	if (n < 1)
		n = 1;
	this->zombieNum = n;
	this->zombies = new Zombie[n];
	for (int i = 0;i < n;i++)
	{
		zombies[i].setName(name_list[rand() % 10]);
		zombies[i].setType(type_list[rand() % 7]);
	}
}

void ZombieHorde::announce()
{
	for (int i = 0;i < zombieNum;i++)
	{
		zombies[i].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] zombies;
}
