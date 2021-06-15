#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int	main(int argc, char **argv)
{
	std::string line;
	std::ostringstream buf;
	size_t index;
	if (argc != 4)
	{
		std::cout << "Error\nIncorrect num of argument\n";
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty())
	{
		std::cout << "Error\nFirst argument is emprty!\n";
		return (0);
	}
	std::ifstream fin(filename);
	if (fin.fail())
	{
		std::cout << "Error\nCan't read the file\n";
		return (1);
	}
	buf << fin.rdbuf();
	line = buf.str();
	fin.close();
	index = 0;
	while (1)
	{
		index = line.find(s1, index);
		if (index == std::string::npos)
			break ;
		else
		{
			line.replace(index, s1.length(), s2);
			index += s2.length();
		}
	}
	std::ofstream fout(filename + ".replace");
	if (fout.fail())
	{
		std::cout << "Error\nCan't open file to write\n";
		return (1);
	}
	fout << line;
	fout.close();
	return (0);
}