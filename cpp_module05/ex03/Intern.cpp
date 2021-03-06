#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const &copy)
{
	(void)copy;
}

Intern::~Intern(){}

Form	*Intern::createShrubberyForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::createRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::createPresidentialPardon(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Intern &Intern::operator=(Intern const &copy)
{
	(void) copy;
	return (*this);
}

Form	*Intern::makeForm(std::string const name, std::string const target)
{
	typedef Form* (Intern::*func) (std::string const &target);
	Form *form = NULL;
	func createForm[3] = {
		&Intern::createShrubberyForm,
		&Intern::createRobotomyRequestForm,
		&Intern::createPresidentialPardon,
	};
	std::string formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			form = (this->*createForm[i])(target);
			std::cout << "Intern creates <" << form->getName() << ">\n";
			return (form);
		}
	}
	throw Intern::FormNotFoundException();
	return (NULL);
}

const char *Intern::FormNotFoundException::what() const throw()
{
	return ("InternException: Form not found");
}