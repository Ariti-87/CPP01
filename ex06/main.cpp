#include <iostream>
#include "Harl.hpp"

int mySwitch(char *argv)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == argv)
			return i;
	}
	return -1;
}

int main(int argc, char **argv)
{
	Harl harl;

	if (argc == 1)
	{
		std::cout << "Same old complains" << std::endl;
		harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
	}
	else if (argc == 2)
	{
		switch (mySwitch(argv[1]))
		{
			case 0:
				harl.complain("DEBUG");
			case 1:
				harl.complain("INFO");
			case 2:
				harl.complain("WARNING");
			case 3:
				harl.complain("ERROR");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	else
		std::cout << "Too many arguments for this program" << std::endl;
	return 0;
}
