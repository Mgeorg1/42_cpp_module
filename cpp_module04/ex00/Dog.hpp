#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string const &name);
	Dog(Dog const &copy);
	Dog &operator=(Dog const &copy);
	virtual void makeSound() const;
	virtual ~Dog();
};


#endif