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
	delete(this->brain);
	this->brain = new Brain(*copy.brain);
	std::cout << "Assignation operatot was called!\n";
	return (*this);
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "New Dog was born as copy!\n";
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof!\n";
}

std::string Dog::getBrain()
{
	std::stringstream addr;
	addr << this->brain;
	return (addr.str());
}