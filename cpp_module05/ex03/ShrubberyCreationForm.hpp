#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const &copy);
	virtual ~ShrubberyCreationForm();

	void	action(Bureaucrat const &executor) const;

	class CannotOpenFile : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class CannotWriteInFile : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif