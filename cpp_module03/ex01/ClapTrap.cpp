#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string const &name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "New Clap Trap " << this->_name << " created!\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "New Clap Trap " << this->_name << " created as copy!\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Clap Trap " << this->_name << " was destroyed!\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Assignation operator was called!\n";
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "FR4G-TP " << this->_name << " attacks " << target \
			<< ", causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints--;
	}
	else
		std::cout << "FR4G-TP " << this->_name << " can not attack, because energy points is 0!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitpoints -= amount;
	if (this->_hitpoints <= 0)
	{
		std::cout << "FR4G-TP " << this->_name << " took critical damage!\n";
		this->~ClapTrap();
	}
	else
	{
		std::cout << "FR4G-TP " << this->_name << " took " << amount << " points of damage!\n";
		std::cout << "Current hitpoints: " << this->_hitpoints << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	if (this->_hitpoints > 10)
		this->_hitpoints = 10;
	this->_energyPoints = 10;
	std::cout << "FR4G-TP " << this->_name << " repaired!\n";
	std::cout << "Current hitpoints: " << this->_hitpoints << std::endl;
}

