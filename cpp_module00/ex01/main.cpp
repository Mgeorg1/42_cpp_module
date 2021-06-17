#include "phonebook.hpp"

int main()
{
	Phonebook	phonebook;
	std::string	line;

	std::cout << "\x1b[37;1mCRAPPY AWESOME PHONEBOOK SOFTWARE\x1b[0m" << std::endl;
	while (1)
	{
		std::cout << "To add new contact enter the command \x1b[32;1mADD\x1b[0m\n";
		std::cout << "To search enter \x1b[32;1mSEARCH\x1b[0m.\nIf you want close current session enter the command \x1b[32;1mEXIT\x1b[0m\n> ";
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
			std::cout << "\x1b[31mERROR:\x1b[0m Command not found!" << std::endl;
	}
}