#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->_energyPoints = 50;
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

void	ScavTrap::attack(std::string const &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "Scav Trap " << this->_name << " attacks " << target \
			<< ", causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints--;
	}
	else
		std::cout << "Scav Trap " << this->_name << " can not attack, because energy points is 0!\n";
}