#include <string>
#include <iostream>

void memoryLeak()
{
	std::string *panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete (panther);
	std::cout << "There is no memory leaks anymore\n";
}

int	main()
{
	std::string	line;

	memoryLeak();
	while (1)
	{
		std::cout << "Check leaks and then type EXIT to exit\n> ";
		getline(std::cin, line);
		if (!std::cin)
			return (0);
		if (line == "EXIT")
			return (0);
	}
}