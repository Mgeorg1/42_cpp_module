#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :\
	Form("presidential pardon form", 25, 5), _target(target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : \
	Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade())
{
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
	this->_target = copy._target;
	return (*this);
}

void PresidentialPardonForm::action(Bureaucrat const &executor) const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox\n";
}
