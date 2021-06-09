#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	type;
	public:
		void	setZombieType(std::string newType);
		Zombie	*newZombie(std::string	name);
		Zombie	*randomChump();
};

#endif