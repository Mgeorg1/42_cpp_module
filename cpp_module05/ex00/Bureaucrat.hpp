#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <ostream>
# include <iostream>

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
	Bureaucrat();
public:
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat(std::string name, int grade);
	Bureaucrat &operator=(Bureaucrat const &copy);
	~Bureaucrat();
	
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	std::string const &getName() const;
	int	getGrade() const;

	void incGrade();
	void decGrade();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &source);

#endif
