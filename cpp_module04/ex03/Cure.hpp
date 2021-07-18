#ifndef CURE_HPP
# define CURE_HPP
# include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(Cure const &copy);
	Cure &operator=(Cure const &copy);
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif