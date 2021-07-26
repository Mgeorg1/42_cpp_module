#include "Form.hpp"

Form::Form(std::string const &name, int const signGrade, int const execGrade) : \
	_name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const &copy) : _name(copy._name), _signed(copy._signed), \
	_signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
}

Form &Form::operator=(Form const &copy)
{
	this->_signed = copy._signed;
	return (*this);
}

Form::~Form(){}

std::string const	&Form::getName() const
{
	return (this->_name);
}

bool	Form::getSign() const
{
	return (this->_signed);
}

int const	Form::getSignGrade() const
{
	return (this->_signGrade);
}

int const	Form::getExecGrade() const
{
	return (this->_execGrade);
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (this->_signed)
		throw isAlredySignedException();
	if (this->_signGrade < bureaucrat.getGrade())
		throw GradeTooLowException();
	this->_signed = true;
}


std::ostream &operator<<(std::ostream &out, Form const &source)
{
	out << "<" << source.getName() << "> sign: <" << source.getSign() << "> signGrade : "\
		<< source.getSignGrade() << " execGrade: " << source.getExecGrade();
	return (out);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form exception: grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form exception: grade too low");
}

const char *Form::isAlredySignedException::what() const throw()
{
	return ("Form exeption: this form is already signed");
}

const char *Form::isNotSignedException::what() const throw()
{
	return ("Form exeption: this form is not  signed");
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->_execGrade)
		throw Form::GradeTooLowException();
	if (!_signed)
		throw Form::isNotSignedException();
	this->action(executor);
}