#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
#include <string>

class	Zombie
{
	private:
		std::string	name;
		std::string	type;
	public:
		Zombie(std::string newName, std::string newType);
		~Zombie();
		void	announce();
};

#endif