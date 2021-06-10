#include "Human.hpp"

Human::Human()
{
	std::cout << "Human with was created!\n";
	this->brain = new Brain();
}

Human::~Human()
{
	delete (this->brain);
	std::cout << "Human is desrtoyed!";
}

std::string	Human::identify()
{
	return(this->brain->identify());
}

Brain	&Human::getBrain()
{
	Brain	&brain = *this->brain;
	return(brain);
}