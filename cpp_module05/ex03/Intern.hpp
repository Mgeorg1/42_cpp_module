#ifndef INTERN_HPP
# define INTERN_HPP
# include "ex03.h"

class Intern
{
private:
	Form	*createShrubberyForm(std::string const &target);
	Form	*createRobotomyRequestForm(std::string const &target);
	Form	*createPresidentialPardon(std::string const &target);
public:
	Intern();
	Intern(Intern const &copy);
	Intern &operator=(Intern const &copy);
	~Intern();

	Form	*makeForm(std::string const name, std::string const target);

	class FormNotFoundException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif