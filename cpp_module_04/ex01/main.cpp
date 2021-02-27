#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include <iostream>

int main()
{
	Character *me = new Character("me");

	std::cout << *me;

	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	Character him("him");
	PlasmaRifle rifle = PlasmaRifle();
	Enemy *enemy = new SuperMutant();

	him.equip(&rifle);
	std::cout << him;
	him.equip(&rifle);
	std::cout << him;

	std::cout << std::endl << "==== DAMAGE TEST ====" << std::endl << std::endl;
	std::cout << "weapon attack: " << rifle.getDamage() << std::endl;
	std::cout << "enemy health before: " << enemy->getHP() << std::endl;
	him.attack(enemy);
	std::cout << "enemy health after: " << enemy->getHP() << std::endl;
	std::cout << him;

	std::cout << std::endl << "==== OUT OF AP TEST ====" << std::endl << std::endl;
	for (int index = 0; index < 10; ++index) {
		him.attack(enemy);
		std::cout << him;
	}

	std::cout << std::endl << "==== RECOVER AP TEST ====" << std::endl << std::endl;

	for (int index = 0; index < 6; ++index) {
		him.recoverAP();
		std::cout << him;
	}

	std::cout << std::endl << "==== KILL TEST ====" << std::endl << std::endl;
	him.attack(enemy);
	him.attack(enemy);

	delete me;
	delete pr;
	delete pf;

	return (0);
}