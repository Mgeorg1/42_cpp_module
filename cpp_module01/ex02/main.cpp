#include "ZombieEvent.hpp"

int main()
{
	Zombie		*zombie1;
	Zombie		*zombie2;
	Zombie		*zombie3;
	ZombieEvent	event;
	std::string	line;
	std::string types[5] = {"Fast", "Stupid", "Slow", "Lazy", "Envy"};
	srand(time(NULL));
	event.setZombieType(types[rand() % 5]);
	zombie1 = event.newZombie("Aemustaf");
	zombie1->announce();
	std::cout << std::endl;
	event.setZombieType(types[rand() % 5]);
	zombie2 = event.randomChump();
	zombie2->announce();
	std::cout << std::endl;
	event.setZombieType(types[rand() % 5]);
	zombie3 = event.randomChump();
	zombie3->announce();
	std::cout << std::endl;
	delete(zombie1);
	delete(zombie2);
	delete(zombie3);
	std::cout << std::endl;
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