#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice& Ice::operator=(Ice const &copy)
{
	return (*this);
}

Ice::Ice(Ice const &copy) : AMateria("ice")
{
	(void)copy;
}

AMateria *Ice::clone() const
{
	Ice *ret = new Ice(*this);
	return (ret);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() <<"*\n";
}