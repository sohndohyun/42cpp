#include "ZombieHorde.hpp"
#include <cstdlib>
#include <ctime>

ZombieHorde::ZombieHorde(int n)
{
	std::string name_list[10] = {"Muller", "Frantic", "Hacker", "Haunter", "Bloomer",
                                "Climber", "Tester", "Tumbler", "Chunky", "Dasher"};
	srand(time(NULL));
	if (n < 1)
		n = 1;
	this->zombieNum = n;
	this->zombies = new Zombie[n];
	for (int i = 0;i < n;i++)
	{
		zombies[i].setName(name_list[rand() % 10]);
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
