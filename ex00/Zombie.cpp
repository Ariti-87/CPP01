#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name) : m_name(name)
{}

Zombie::~Zombie()
{
	std::cout << m_name << " is destroyed" << std::endl;
}

void Zombie::annonce(void)
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
