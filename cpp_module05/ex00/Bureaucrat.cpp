#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat: to high grade exception.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat: to low grade exception.");
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
	this->_grade = copy._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}
std::string const &Bureaucrat::getName() const
{
	return (this->_name);
}

void Bureaucrat::decGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::incGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &source)
{
	out << "<" << source.getName() << "> , bureaucrat grade<" << source.getGrade() << ">";
	return (out);
}

Bureaucrat::~Bureaucrat(){}
