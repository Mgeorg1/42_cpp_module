#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Scav Trap " << this->_name << " was created!\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	this->_name = copy._name;
	this->_attackDamage = copy._attackDamage;
	this->_energyPoints = copy._energyPoints;
	this->_hitpoints = copy._hitpoints;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout << "Scav Trap " << this->_name << " was created as copy!\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "Scav Trap " << this->_name << " has entered in Gate keeper mode\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Trap " << this->_name << " was destroyed\n";
}