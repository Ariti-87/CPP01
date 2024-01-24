#ifndef DEF_HUMANB
#define DEF_HUMANB

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:

	HumanB();
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);

	private:

	std::string m_name;
	Weapon *m_weapon;
};

#endif
