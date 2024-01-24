#include "HumanA.hpp"

// HumanA::HumanA()
// {}
HumanA::HumanA(std::string name, Weapon &weapon) : m_name(name), m_weapon(weapon)
{}

HumanA::~HumanA()
{
	std::cout << m_name << " is destroyed" << std::endl;
}

void HumanA::attack()
{
	std::cout << m_name << " atacks with their " << m_weapon.getType() << std::endl;
}
