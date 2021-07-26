#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	_target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	RobotomyRequestForm& operator=(RobotomyRequestForm const &copy);
	virtual ~RobotomyRequestForm();

	void			action(Bureaucrat const &executor) const;
};

#endif