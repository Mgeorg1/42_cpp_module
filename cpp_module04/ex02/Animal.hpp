#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(std::string const &type);
	Animal(Animal const &copy);
	void	setType(std::string const &type);
	std::string const &getType() const;
	Animal& operator=(Animal const &copy);
	virtual ~Animal();
	virtual void makeSound() const = 0;
};

#endif