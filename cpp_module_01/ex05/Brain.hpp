#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
	std::string name;
public:
	Brain();
	std::string getName();
	void setName(std::string name);
	std::string identify();
};

#endif
