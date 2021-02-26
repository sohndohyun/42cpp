#include "Brain.hpp"
#include <sstream>

std::string Brain::identify() const
{
	std::stringstream address;
	address << this;
	return address.str();
}
