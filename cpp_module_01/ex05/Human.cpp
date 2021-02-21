#include "Human.hpp"
#include <sstream>

Human::Human()
{
	brain = new Brain;
}

Human::~Human()
{
	delete brain;
}

Brain& Human::getBrain()
{
	return *brain;
}

std::string Human::identify()
{
	return brain->identify();
}
