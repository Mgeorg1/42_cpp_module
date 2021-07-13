#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "New cat was born!\n";
}

Cat::~Cat()
{
	delete (this->brain);
	std::cout << "Cat has been killed!\n";
}

Cat& Cat::operator=(Cat const &copy)
{
	this->_type = copy._type;
	if (this->brain)
		delete (this->brain);
	if (copy.brain)
		this->brain = new Brain(*copy.brain);
	else
		this->brain = 0;
	std::cout << "Assignation operatot was called!\n";
	return (*this);
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	if	(copy.brain)
		this->brain = new Brain(*copy.brain);
	else
		this->brain = 0;
	std::cout << "New cat was born as copy!\n";
}

void Cat::makeSound() const
{
	std::cout << "Mrrrr... Meow!\n";
}

std::string Cat::getBrainAddr() const
{
	std::stringstream addr;
	addr << this->brain;
	return (addr.str());
}

std::string* Cat::getIdeas()
{
	return (this->brain->getIdeas());	
} 

void	Cat::setIdea(int id, std::string const &idea)
{
	this->brain->setIdea(id, idea);
}