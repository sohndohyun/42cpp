#include "Human.hpp"
#include <sstream>

const Brain& Human::getBrain() const
{
	return brain;
}

std::string Human::identify() const
{
	return getBrain().identify();
}
