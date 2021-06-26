#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "Frag Trap " << this->_name << " was created!\n";
	this->_hitpoints = 100;
	this->_attackDamage = 30;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "Assignation operator called!\n";
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Frag Trap " << this->_name << " was created as copy!\n";
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " was destroyed!\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "<" << this->_name << ">High five, guys!\n";
}
