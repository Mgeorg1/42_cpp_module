#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string newType)
{
	this->type = newType;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

Zombie	*ZombieEvent::randomChump()
{
	std::string names[4] = {"Aquinoa", "Keuclide", "Mhumfrey", "Walethea"};
	return (new Zombie(names[rand() % 4], this->type));
}