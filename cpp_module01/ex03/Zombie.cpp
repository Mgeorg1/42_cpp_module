#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" << this->name << "(" << this->type << ")>  Braiiiiiiinnnssss...\n";
}

Zombie::Zombie(std::string newName, std::string newType)
{
	this->name = newName;
	this->type = newType;
	std::cout << this->type << " zombie named " << this->name << " rose from the dead!\n";
}

Zombie::~Zombie()
{
	std::cout << this->name << " has been killed!\n";
}
