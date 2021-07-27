#include "ex03.h"
#include "Intern.hpp"
int main()
{
	srand(time(NULL));
	Form *f;
	Intern i;
	Bureaucrat tom("Tom", 1);
	try
	{
		f = i.makeForm("presidential pardon form", "test");
		tom.signForm(*f);
		f->execute(tom);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	f->execute(tom);
	
	

}