#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Form form1("form1", 0, 2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form form2("form2", 151, 6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	/*************************************************/
	std::cout << "\n";
	Bureaucrat tom("Tom", 100);
	Form account1("Sign form", 20, 30);
	std::cout << account1 << "\n\n";
	try
	{
		tom.signForm(account1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	/*************************************************/
	std::cout << "\n";
	Form account2("Sign form", 110, 120);
	try
	{
		tom.signForm(account2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	/*************************************************/
	std::cout << "\n";
	try
	{
		tom.signForm(account2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	/*************************************************/
	std::cout << "\n";
	std::cout << account2 << "\n";
	
}