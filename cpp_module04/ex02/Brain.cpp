#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
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
	this->ideas = new std::string[100];
	*this = copy;
	std::cout << "New brain was created as copy!\n";
}

Brain::~Brain()
{
	delete [] this->ideas;
	std::cout << "Brain was destroyed!\n";
}

std::string* Brain::getIdeas()
{
	return (this->ideas);
}

void	Brain::setIdea(int id, std::string const &idea)
{
	if (id < 100 && id >= 0)
		this->ideas[id] = idea;
}