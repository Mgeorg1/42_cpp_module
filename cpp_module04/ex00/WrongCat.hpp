#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string const &name);
	WrongCat(WrongCat const &copy);
	WrongCat &operator=(WrongCat const &copy);
	void makeSound() const;
	virtual ~WrongCat();
};


#endif