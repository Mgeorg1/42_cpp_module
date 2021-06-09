#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP
#include "Zombie.hpp"

class	ZombieHorde
{
	private:
		Zombie *zombie;
		int		_n;
	public:
		ZombieHorde(int	n);
		void	announce();
		void	removeZombies();
};

#endif