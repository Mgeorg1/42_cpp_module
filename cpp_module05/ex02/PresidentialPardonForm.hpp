#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP
# include "RobotomyRequestForm.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm& operator=(PresidentialPardonForm const &copy);

	void	action(Bureaucrat const &executor) const;
};

#endif