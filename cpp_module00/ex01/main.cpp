#include "phonebook.hpp"

int main()
{
	Phonebook	phonebook;
	std::string	line;

	std::cout << "Crappy awesome phonebook software" << std::endl;
	while (1)
	{
		std::cout << "For add new contact enter the command ADD, for search enter SEARCH.\nIf you want close current session enter the command EXIT\n> ";
		getline(std::cin, line);
		if (!std::cin)
			exit(0);
		if (line == "ADD")
			phonebook.addContact();
		else if (line == "SEARCH")
			phonebook.search();
		else if (line == "EXIT")
			return (0);
		else
			std::cout << "Command not found!" << std::endl;
	}
}