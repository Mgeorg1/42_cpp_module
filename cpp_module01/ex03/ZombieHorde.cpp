#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	srand(time(NULL));
	std::string types[5] = {"Fast", "Stupid", "Slow", "Lazy", "Angry"};
	std::string names[7] = {"Georgy", "Nariman", "Pasha", "Alexey", "Shamil", "Dennis", "Timofey"};
	this->_n = n;
	if (this->_n > 0)
	{
		this->zombie = static_cast<Zombie*>(operator new[] (this->_n * sizeof(Zombie)));
		for (int i = 0; i < this->_n; i++)
			new (this->zombie + i) Zombie(names[rand() % 7], types[rand() % 5]);
	}
	else
		this->zombie = NULL; 
}

void	ZombieHorde::removeZombies()
{
	if (this->_n > 0)
	{
		for (int i = 0; i < this->_n; i++)
			this->zombie[i].~Zombie();
		operator delete[](this->zombie);
	}
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->_n; i++)
		this->zombie[i].announce();
}