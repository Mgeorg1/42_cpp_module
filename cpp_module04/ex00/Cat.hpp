#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string const &name);
	Cat(Cat const &copy);
	Cat &operator=(Cat const &copy);
	virtual void makeSound() const;
	virtual ~Cat();
};


#endif