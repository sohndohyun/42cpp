#include "Human.hpp"
#include <sstream>

Brain& Human::getBrain()
{
	return brain;
}

std::string Human::identify()
{
	return brain.identify();
}
