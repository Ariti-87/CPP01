#include <iostream>

int main()
{
	std::string str("HI tHIS IS BRAIN");
	std::string *stringPTR(0);
	std::string &stringREF = str;

	stringPTR = &str;

	std::cout << "Adresse de string : " << &str << std::endl;
	std::cout << "Adresse de stringPTR : " << stringPTR << std::endl;
	std::cout << "Adresse de stringREF : " << &stringREF << std::endl;

	std::cout << "Valeur de string : " << str << std::endl;
	std::cout << "Valeur pointe par stringPTR : " << *stringPTR << std::endl;
	std::cout << "Valeur reference par stringREF : " << stringREF << std::endl;

	return 0;
}
