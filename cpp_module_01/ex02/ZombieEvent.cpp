#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>

ZombieEvent::ZombieEvent()
{
	type = "Norm";
	srand(time(NULL));
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return new Zombie(type, name);
}

Zombie* ZombieEvent::randomChump()
{
	std::string name_list[10] = {"Muller", "Frantic", "Hacker", "Haunter", "Bloomer",
                                "Climber", "Tester", "Tumbler", "Chunky", "Dasher"};
	Zombie *zombie = newZombie(name_list[rand() % 10]);
	zombie->announce();
	return zombie;
}
