#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& fragTrap);
	virtual ~FragTrap();
	FragTrap& operator=(const FragTrap& fragTrap);

	void vaulthunter_dot_exe(std::string const &target);
};

#endif
