#ifndef DEF_ZOMBIE
#define DEF_ZOMBIE

#include <iostream>

class Zombie
{
	public :

	Zombie();
	Zombie(std::string name);
	~Zombie();
	void annonce(void);

	private :

	std::string m_name;
};

#endif
