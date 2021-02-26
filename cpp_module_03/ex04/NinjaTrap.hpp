#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap &ninjaTrap);
	virtual ~NinjaTrap();
	NinjaTrap& operator=(const NinjaTrap &ninjaTrap);

	void ninjaShoebox(FragTrap &fragTrap);
	void ninjaShoebox(ScavTrap &scavTrap);
	void ninjaShoebox(ClapTrap &clapTrap);
	void ninjaShoebox(NinjaTrap &ninjaTrap);
	void ninjaShoebox(SuperTrap &superTrap);
};

#endif
