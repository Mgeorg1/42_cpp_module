#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "New cat was born!\n";
}

Cat::~Cat()
{
	delete (this->brain);
	std::cout << "Cat has been killed!\n";
}

Cat& Cat::operator=(Cat const &copy)
{
	this->_type = copy._type;
	delete (this->brain);
	this->brain = new Brain(*copy.brain);
	std::cout << "Assignation operatot was called!\n";
	return (*this);
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "New cat was born as copy!\n";
}

void Cat::makeSound() const
{
	std::cout << "Mrrrr... Meow!\n";
}

std::string Cat::getBrain()
{
	std::stringstream addr;
	addr << this->brain;
	return (addr.str());
}
