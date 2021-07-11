#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "New dog was born!\n";
}

Dog::~Dog()
{
	std::cout << "Dog has been killed!\n";
}

Dog& Dog::operator=(Dog const &copy)
{
	this->_type = copy._type;
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
