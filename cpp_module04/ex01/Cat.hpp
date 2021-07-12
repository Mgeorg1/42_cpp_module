#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
#include <sstream>

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(std::string const &name);
	Cat(Cat const &copy);
	Cat &operator=(Cat const &copy);
	virtual void makeSound() const;
	virtual ~Cat();
	std::string getBrain();
};


#endif