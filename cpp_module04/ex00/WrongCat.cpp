#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "New wrong cat was born!\n";
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat has been killed!\n";
}

WrongCat& WrongCat::operator=(WrongCat const &copy)
{
	this->_type = copy._type;
	std::cout << "Assignation operatot was called!\n";
	return (*this);
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
	*this = copy;
	std::cout << "New cat was born as copy!\n";
}

void WrongCat::makeSound() const
{
	std::cout << "Mrrrr... Meow!\n";
}