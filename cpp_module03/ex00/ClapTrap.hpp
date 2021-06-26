#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string	_name;
	int			_hitpoints;
	int			_energyPoints;
	int			_attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string const &name);
	~ClapTrap();
	ClapTrap(const ClapTrap &copy);
	ClapTrap	&operator=(const ClapTrap &copy);
	void		attack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif