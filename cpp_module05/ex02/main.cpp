#include "ex02.h"

int main()
{
	srand(time(NULL));
	Bureaucrat tom("Tom", 1);
	ShrubberyCreationForm form("test");
	tom.signForm(form);
	try
	{
		form.execute(tom);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	RobotomyRequestForm formR("rTest");
	tom.signForm(formR);
	try
	{
		formR.execute(tom);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	PresidentialPardonForm formP("testP");
	tom.signForm(formP);
	try
	{
		formP.execute(tom);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	ShrubberyCreationForm formE("testE");
	tom.signForm(formE);
	try
	{
		formE.execute(tom);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}