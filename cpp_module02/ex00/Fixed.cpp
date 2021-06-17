#include "Fixed.hpp"
# include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called\n";
	this->_value = copy.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->_value = raw;
}