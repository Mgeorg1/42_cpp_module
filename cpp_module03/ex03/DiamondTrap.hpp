#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	_name;
	DiamondTrap();
public:
	DiamondTrap(std::string const &name);
	DiamondTrap		&operator=(const DiamondTrap &copy);
	DiamondTrap(const DiamondTrap &copy);
	~DiamondTrap();
	void	whoAmI();
	void	attack(std::string const &target);
};


#endif