#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string type;
	std::string name;
public:
	Zombie();
	Zombie(std::string type, std::string name);
	void setName(std::string name);
	void announce();
};

#endif
