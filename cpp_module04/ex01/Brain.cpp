#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "New brain was created!\n";
}

Brain &Brain::operator=(Brain const &copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	std::cout << "Assignation operator was called!\n";
	return (*this);
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
	std::cout << "New brain was created as copy!\n";
}

Brain::~Brain()
{
	std::cout << "Brain was destroyed!\n";
}