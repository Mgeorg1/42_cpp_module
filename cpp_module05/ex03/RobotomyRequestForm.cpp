#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :\
	Form("RobotomyRequestForm", 72, 45), _target(target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
	this->_target = copy._target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) :\
	Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade())
{
	*this = copy;
}

void	RobotomyRequestForm::action(Bureaucrat const &executor) const
{
	(void) executor;
	std::cout << "*Some drilling noises\n";
	if (rand() % 2 == 0)
		std::cout << _target << " has been robotomized\n";
	else
		std::cout << "Robotomized " << _target << " has been failed\n";
}



