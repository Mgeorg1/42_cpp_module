#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(std::string const &type);
	WrongAnimal(WrongAnimal const &copy);
	void	setType(std::string const &type);
	std::string const &getType() const;
	WrongAnimal& operator=(WrongAnimal const &copy);
	virtual ~WrongAnimal();
	void makeSound() const;
};

#endif