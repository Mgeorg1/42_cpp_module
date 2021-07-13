#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "New animal was born!\n";
}

Animal::Animal(std::string const &type)
{
	this->_type = type;
	std::cout << "New animal with type " <<this->_type << " was born!\n";
}

Animal& Animal::operator=(Animal const &copy)
{
	this->_type = copy._type;
	return (*this);
	std::cout << "Assignation operator was called!\n";
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << "New animal was born as copy!\n";
}

void	Animal::setType(std::string const &type)
{
	this->_type = type;
	std::cout << "Type was changed!\n";
}

std::string const &Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "*Default animal roar*\n";
}

Animal::~Animal()
{
	std::cout << "Animal has been killed!\n";
}