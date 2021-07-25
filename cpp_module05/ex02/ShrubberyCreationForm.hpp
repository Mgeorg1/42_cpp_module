#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Bureaucrat.hpp"
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string const &target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const copy);
	~ShrubberyCreationForm();

	std::string const &getTarget() const;
	//Протектед или приватные?
};

#endif