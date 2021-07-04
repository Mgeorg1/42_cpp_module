#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap();
public:
	FragTrap(std::string const &name);
	FragTrap	&operator=(const FragTrap &copy);
	FragTrap(const FragTrap &copy);
	~FragTrap();
	void	 highFivesGuys(void);
};

#endif