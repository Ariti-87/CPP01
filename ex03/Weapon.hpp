#ifndef DEF_WEAPON
#define DEF_WEAPON

#include <iostream>

class Weapon
{
	public:

	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string& getType();
	void setType(std::string newType);

	private:

	std::string m_type;

};

#endif
