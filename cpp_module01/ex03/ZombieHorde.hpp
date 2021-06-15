#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP
#include "Zombie.hpp"

class	ZombieHorde
{
	private:
		Zombie *zombie;
		int		_n;
		ZombieHorde();
		void	removeZombies();
	public:
		ZombieHorde(int	n);
		~ZombieHorde();
		void	announce();
};

#endif