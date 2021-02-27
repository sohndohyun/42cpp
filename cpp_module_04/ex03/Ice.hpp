#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice&);
	virtual ~Ice();

	Ice &operator=(const Ice&);
	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);
};

#endif