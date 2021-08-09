#include "ex03.h"
int main()
{
	srand(time(NULL));
	Bureaucrat tom("Tom", 1);
	Intern someRandomIntern;
	/*************************************************/
	try
	{
		Form *form1;
		form1 = someRandomIntern.makeForm("robotomy request", "Bender");
		tom.signForm(*form1);
		form1->execute(tom);
		delete form1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
	/*************************************************/
	std::cout << "\n";
	try
	{
		Form *form2;
		form2 = someRandomIntern.makeForm("shrubbery creation", "Bender");
		tom.signForm(*form2);
		form2->execute(tom);
		delete form2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	/*************************************************/
	std::cout << "\n";
	try
	{
		Form *form3;
		form3 = someRandomIntern.makeForm("presidential pardon", "Bender");
		tom.signForm(*form3);
		form3->execute(tom);
		delete form3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	/*************************************************/
	std::cout << "\n";
	Form *form4;
	try
	{
		form4 = someRandomIntern.makeForm("unknown form", "Bender");
		tom.signForm(*form4);
		form4->execute(tom);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}