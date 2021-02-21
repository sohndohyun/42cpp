#include "Brain.hpp"
#include <sstream>

std::string Brain::identify()
{
	std::stringstream address;
	address << this;
	return address.str();
}
