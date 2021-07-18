#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;
	AMateria();
public:
	AMateria(std::string const &type);
	AMateria(AMateria const &copy);
	virtual ~AMateria();
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
	AMateria &operator=(AMateria const &copy);

};
#endif