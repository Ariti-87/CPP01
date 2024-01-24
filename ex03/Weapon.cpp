#include "Weapon.hpp"

Weapon::Weapon()
{}
Weapon::Weapon(std::string type) : m_type(type)
{}

Weapon::~Weapon()
{}

const std::string& Weapon::getType()
{
	return (m_type);
}

void Weapon::setType(std::string newType)
{
	m_type = newType;
}


