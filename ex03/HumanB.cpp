#include "HumanB.hpp"

HumanB::HumanB()
{}

HumanB::HumanB(std::string name) : m_name(name), m_weapon(0)
{}

HumanB::~HumanB()
{
	std::cout << m_name << " is destroyed" << std::endl;
}

void HumanB::attack()
{
	if (!m_weapon)
		std::cout << m_name << " is attacking with his hands" << std::endl;
	else
		std::cout << m_name << " ataccks with their " << m_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}
