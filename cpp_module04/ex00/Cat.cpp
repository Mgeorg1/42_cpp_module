#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "New cat was born!\n";
}

Cat::~Cat()
{
	std::cout << "Cat has been killed!\n";
}

Cat& Cat::operator=(Cat const &copy)
{
	this->_type = copy._type;
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
