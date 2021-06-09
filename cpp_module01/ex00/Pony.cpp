#include "Pony.hpp"
#define	DEFAULT_COLOR "\x1b[0m"
#define RED	"\x1b[31m"
#define GREEN "\x1b[32m"


Pony::Pony()
{
	std::cout << GREEN << "Pony has been created!" << DEFAULT_COLOR << "\n";
}

Pony::~Pony()
{
	std::cout << "OMG! Pony has been" << RED << " kiled!" << DEFAULT_COLOR << "\n";
}

void		Pony::setData(int newAge, std::string newName, std::string newColor)
{
	this->age = newAge;
	this->name = newName;
	this->color = newColor;
}

int			Pony::getAge()
{
	return (this->age);
}

std::string	Pony::getColor()
{
	return (this->color);
}

std::string	Pony::getName()
{
	return (this->name);
}