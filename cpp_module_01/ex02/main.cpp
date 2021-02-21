#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent zombieEvent;
	zombieEvent.setZombieType("NewType");
	for (int i = 0;i < 10;i++)
	{
		Zombie* zombie;
		zombie = zombieEvent.randomChump();
		delete zombie;
	}
	return 0;
}
