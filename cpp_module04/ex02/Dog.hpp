#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"
#include <sstream>

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(std::string const &name);
	Dog(Dog const &copy);
	Dog &operator=(Dog const &copy);
	virtual void makeSound() const;
	virtual ~Dog();
	std::string getBrainAddr() const;
	std::string	*getIdeas();
	void	setIdea(int id, std::string const &idea);
};


#endif