#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :\
	Form("shrubbery creation form", 145, 137), _target(target){}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
	this->_target = copy._target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) :\
	Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade())
{
	*this = copy;
}

void	ShrubberyCreationForm::action(Bureaucrat const &executor) const
{
	(void)executor;
	std::ofstream file;
	std::string const tree[11] = {
		"     ccee88oo\n",
		"  C8O8O8Q8PoOb o8oo\n",
		" dOB69QO8PdUOpugoO9bD\n",
		"CgggbU8OU qOp qOdoUOdcb\n",
		"    6OuU  /p u gcoUodpP\n",
		"      \\\\\\//  /douUP\n",
		"       \\\\\\////\n",
		"       |||/\\\n",
		"       |||\\/\n",
		"       |||||\n",
		" .....//||||\\....\n"
	};

	file.open(_target + "_shrubbery", std::ios::trunc);
	if (file.fail())
		throw ShrubberyCreationForm::CannotOpenFile();
	else
	{
		for (int i = 0; i < 11; i++)
			file << tree[i];
		if (file.fail())
			throw ShrubberyCreationForm::CannotWriteInFile();
		file.close();
	}
}

const char *ShrubberyCreationForm::CannotOpenFile::what() const throw()
{
	return ("ShrubberyCreationForm: Cannot open file exception");
}

const char *ShrubberyCreationForm::CannotWriteInFile::what() const throw()
{
	return ("ShrubberyCreationForm: Cannot write in file exception");
}

