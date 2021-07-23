#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat bob("Bob", 4);
		std::cout << bob << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	/**************************************/
	try
	{
		Bureaucrat tom("Tom", 151);
		std::cout << tom << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	/**************************************/
	Bureaucrat mike("Mike", 1);
	try
	{
		mike.incGrade();
		std::cout << mike << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	/**************************************/
	Bureaucrat april("April", 150);
	try
	{
		april.decGrade();
		std::cout << april << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}