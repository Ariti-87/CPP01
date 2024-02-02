#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	int nb(10);

	Zombie *z = zombieHorde(nb, "HordeOfRin");
	for (int i = 0; i < nb; i++)
	{
		z[i].annonce();
	}
	delete [] z;
	return 0;
}

