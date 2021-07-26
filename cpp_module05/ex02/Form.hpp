#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_signed;
	int	const			_signGrade;
	int	const			_execGrade;
	Form();
public:
	Form(std::string const &name, int const signGrade, int const execGrade);
	Form(Form const &copy);
	Form &operator=(Form const &copy);
	virtual ~Form();

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class  isAlredySignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class isNotSignedException : std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	void				beSigned(Bureaucrat const &bureaucrat);
	void				execute(Bureaucrat const &executor) const;
	virtual void		action(Bureaucrat const &executor) const = 0;

	std::string const	&getName() const;
	bool				getSign() const;
	int const			getSignGrade() const;
	int const			getExecGrade() const;
};

std::ostream &operator<<(std::ostream &out, Form const &source);

#endif