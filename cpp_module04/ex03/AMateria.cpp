#include "AMateria.hpp"

AMateria::AMateria()
{
}
AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria& AMateria::operator=(AMateria const &copy)
{
	this->type = copy.type;
	return (*this);	
}
AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}