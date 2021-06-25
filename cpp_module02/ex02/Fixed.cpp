#include "Fixed.hpp"
#include <iostream>

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
	this->_value = copy._value;
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

Fixed::Fixed(const int intValue)
{
	std::cout << "Int constructor called\n";
	this->_value = intValue << this->_bits;
}

Fixed::Fixed(const float floatValue)
{
	std::cout << "Float constructor called\n";
	this->_value = (int)roundf(floatValue * (1 << this->_bits));
}

int	Fixed::toInt() const
{
	return (this->_value >> this->_bits);
}

float	Fixed::toFloat() const
{
	return ((float)this->_value / (float)(1 << this->_bits));
}

std::ostream& operator<<(std::ostream &sout, const Fixed &_value)
{
	sout << _value.toFloat();
	return (sout);
}

Fixed Fixed::operator+(Fixed const &b)
{
	Fixed 	ret(*this);
	ret.setRawBits(this->getRawBits() + b.getRawBits());
	return (ret);
}

Fixed Fixed::operator-(Fixed const &b)
{
	Fixed 	ret(*this);
	ret.setRawBits(this->getRawBits() - b.getRawBits());
	return (ret);
}

bool Fixed::operator>(Fixed const &b) const
{
	return(this->getRawBits() > b.getRawBits());
}

bool Fixed::operator<(Fixed const &b) const
{
	return(this->getRawBits() < b.getRawBits());
}

bool Fixed::operator>=(Fixed const &b) const
{
	return(this->getRawBits() >= b.getRawBits());
}

bool Fixed::operator<=(Fixed const &b) const
{
	return(this->getRawBits() <= b.getRawBits());
}

bool Fixed::operator==(Fixed const &b) const
{
	return(this->getRawBits() == b.getRawBits());
}

bool Fixed::operator!=(Fixed const &b) const
{
	return(this->getRawBits() != b.getRawBits());
}

Fixed Fixed::operator*(Fixed const &b)
{
	Fixed 	ret(*this);
	ret.setRawBits((this->getRawBits() * b.getRawBits()) >> this->_bits);
	return (ret);
}

Fixed Fixed::operator/(Fixed const &b)
{
	Fixed 	ret(*this);
	ret.setRawBits((this->getRawBits() << this->_bits) / b.getRawBits());
	return (ret);
}

Fixed	Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return (tmp);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}