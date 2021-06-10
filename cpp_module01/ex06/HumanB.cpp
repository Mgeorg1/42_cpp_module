#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name)
{
	this->_weapon = NULL;
	std::cout << "Human was born!\n";
}

HumanB::~HumanB()
{
	std::cout << "Human was killed!\n";
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << "Human " << this->_name << " attackes with " << this->_weapon->getType() << "\nBang!\n";
}
