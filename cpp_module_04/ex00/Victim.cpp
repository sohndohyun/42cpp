#include "Victim.hpp"

Victim::Victim()
{

}

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &victim)
{
	name = victim.name;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

Victim& Victim::operator=(const Victim &victim)
{
	if(this != &victim)
	{
		name = victim.name;
	}
	return *this;
}

const std::string &Victim::getName() const
{
	return name;
}

void Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream &stream, Victim &victim)
{
	return (stream << "I'm " << victim.getName() << " and I like otters!" << std::endl);
}
