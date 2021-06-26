#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap
{
	protected:
		ScavTrap();
	public:
		ScavTrap(std::string const &name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap	&operator=(const ScavTrap &copy);
		void		guardGate();
		~ScavTrap();
		void	attack(std::string const &target);
};

#endif