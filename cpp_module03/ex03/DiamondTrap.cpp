#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(std::string const &name) : FragTrap(name), ScavTrap(name), ClapTrap(name + "_clap_name")
{
	 this->_name = name;
	 std::cout << "DiamondTrap " << this->_name <<  " was created!\n";
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "Assignation operator was called!\n";
	this->_attackDamage = copy._attackDamage;
	this->_energyPoints = copy._energyPoints;
	this->_hitpoints = copy._hitpoints;
	this->_name = copy._name;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap " << this->_name <<  " was created as copy!\n";
	*this = copy;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << " and my Clap Trap name is " << ClapTrap::_name << std::endl; 
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Trap " << this->_name << " was destroyed!\n";
}

