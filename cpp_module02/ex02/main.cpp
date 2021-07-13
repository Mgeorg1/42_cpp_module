#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	Fixed c = 9.5f;
	if (c == 9.5f)
		std::cout << "c == 9.5" << std::endl;
	if (c >= 5 && c < 12 && c != 0)
		std::cout << "c >= 5 && c < 12 && c != 0" << std::endl;
	return 0;
}