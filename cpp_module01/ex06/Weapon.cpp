#include "Weapon.hpp"

Weapon::Weapon()
{
	this->_type = "Default gun";
	std::cout << "Weapon was created!\n";
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
	std::cout << "Weapon was created!\n";
}

Weapon::~Weapon()
{
	std::cout << "Weapon was destroyed!\n";
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	std::cout << "Type was changed!\n";
}

const std::string	&Weapon::getType()
{
	return (this->_type);
}