#ifndef ICE_HPP
# define ICE_HPP
# include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice();
	virtual ~Ice();
	Ice(Ice const &copy);
	Ice &operator=(Ice const &copy);
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif