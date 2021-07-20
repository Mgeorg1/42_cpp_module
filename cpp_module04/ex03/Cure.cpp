#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure& Cure::operator=(Cure const &copy)
{
	return (*this);
}

Cure::Cure(Cure const &copy) : AMateria("cure")
{
	(void)copy;
}

AMateria *Cure::clone() const
{
	Cure *ret = new Cure(*this);
	return (ret);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals "<< target.getName() <<"'s wounds *\n";
}