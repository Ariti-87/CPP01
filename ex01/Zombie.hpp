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
	void setName(std::string const name);

	private :

	std::string m_name;
};

#endif
