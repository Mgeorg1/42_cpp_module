#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "New dog was born!\n";
}

Dog::~Dog()
{
	delete (this->brain);
	std::cout << "Dog has been killed!\n";
}

Dog& Dog::operator=(Dog const &copy)
{
	this->_type = copy._type;
	if (this->brain)
		delete (this->brain);
	if (copy.brain)
		this->brain = new Brain(*copy.brain);
	else
		this->brain = 0;
	std::cout << "Assignation operatot was called!\n";
	return (*this);
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	if (copy.brain)
		this->brain = new Brain(*copy.brain);
	else
		this->brain = 0;
	std::cout << "New Dog was born as copy!\n";
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof!\n";
}

std::string Dog::getBrainAddr() const
{
	std::stringstream addr;
	addr << this->brain;
	return (addr.str());
}

std::string*	Dog::getIdeas()
{
	return (this->brain->getIdeas());
}

void	Dog::setIdea(int id, std::string const &idea)
{
	this->brain->setIdea(id, idea);
}