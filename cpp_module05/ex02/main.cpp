#include "ex02.h"

int main()
{
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
	
}