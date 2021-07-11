#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "New wrong animal was born!\n";
}

WrongAnimal::WrongAnimal(std::string const &type)
{
	this->_type = type;
	std::cout << "New wrong animal with type " <<this->_type << " was born!\n";
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &copy)
{
	this->_type = copy._type;
	return (*this);
	std::cout << "Assignation operator was called!\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
	std::cout << "New wrong animal was born as copy!\n";
}

void	WrongAnimal::setType(std::string const &type)
{
	this->_type = type;
	std::cout << "Type was changed!\n";
}

std::string const &WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*Default wrong animal roar*\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal has been killed!\n";
}