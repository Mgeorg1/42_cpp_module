#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "Default_name";
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "New Clap Trap was created!\n";
}

ClapTrap::ClapTrap(std::string name)
{
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "New Clap Trap was created!\n";
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	*this = copy;
	std::cout << "New Clap Trap was created!\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Clap Trap was destroyed!\n";
}

ClapTrap& ClapTrap::operator=(ClapTrap &copy)
{
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
}