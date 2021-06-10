#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain was created!\n";
}

Brain::~Brain()
{
	std::cout << "Brain is destroyed!\n";
}

std::string	Brain::identify()
{
	std::stringstream addr;

	addr << this;
	return (addr.str());
}