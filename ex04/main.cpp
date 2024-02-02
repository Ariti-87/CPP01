#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::string s1;
	std::string s2;
	std::ifstream inFile;
	std::ofstream outFile;
	if (argc != 4)
	{
		std::cerr << "this program take 3 arguments" << std::endl;
		return 1;
	}
	s1 = argv[2];
	s2 = argv[3];
	inFile.open(argv[1]);
	if (!inFile)
	{
		std::cerr << "Error opening Infile : " << argv[1] << std::endl;
		return 1;
	}
	outFile.open((std::string(argv[1]) + ".replace").c_str());
	if (!outFile)
	{
		std::cerr << "Error opening Outfile : " << argv[1] << ".replace" << std::endl;
		return 1;
	}
	if (s1 == "")
	{
		std::cerr << "[" << argv[2] << "] is not a valid string" << std::endl;
		return 1;
	}
	std::string line;
	while (std::getline(inFile, line))
	{
		std::string newLine;
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			newLine += line.substr(0, pos);
			newLine += s2;
			line = line.substr(pos + s1.size());
			pos = 0;
		}
		newLine += line;
		outFile << newLine << std::endl;
	}
	inFile.close();
	outFile.close();
	return 0;
}
