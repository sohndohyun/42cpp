#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy
{
private:
	unsigned int hp;
	std::string type;
public:
	Enemy();
	Enemy(const Enemy &enemy);
	Enemy(int hp, std::string const &type);
	virtual ~Enemy();

	Enemy &operator=(const Enemy &enemy);

	std::string const &getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};

#endif
