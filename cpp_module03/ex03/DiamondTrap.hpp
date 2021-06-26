#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	DiamondTrap();
	std::string	_name;
public:
	DiamondTrap(std::string const &name);
	DiamondTrap		&operator=(const DiamondTrap &copy);
	DiamondTrap(const DiamondTrap &copy);
	~DiamondTrap();
	void	whoAmI();
	void	attack(std::string const &target);
};


#endif