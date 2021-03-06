#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(std::string source) : _source(source){}

void	ScalarConversion::printConversions()
{
	this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();
}

ScalarConversion::~ScalarConversion(){}


ScalarConversion &ScalarConversion::operator=(ScalarConversion const &copy)
{
	this->_source = copy._source;
	return (*this);
}

ScalarConversion::ScalarConversion(ScalarConversion const &copy)
{
	*this = copy;
}

void ScalarConversion::printChar()
{
	std::cout << "char: ";
	const char *s = _source.c_str();
	if (_source.length() == 1 && ((s[0] >= 32 && s[0] <= 47) || (s[0] >= 58 && s[0] <= 126)))
	{
		std::cout << "'" << _source << "'\n";
		return;
	}
	try
	{
		int ch = static_cast<int>(std::stoi(this->_source));
		if (std::isprint(ch))
			std::cout << "'" << (char)ch << "'\n";
		else if (ch >= -128 && ch <= 127)
			std::cout << "Non displayable\n";
		else
			throw std::exception();
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible\n";
	}
}

void ScalarConversion::printInt()
{
	std::cout << "int: ";
	const char *s = _source.c_str();
	if (_source.length() == 1 && ((s[0] >= 32 && s[0] <= 47) || (s[0] >= 58 && s[0] <= 126)))
	{
		std::cout << (int)s[0] << "\n";
		return ;
	}
	try
	{
		int i = static_cast<int>(std::stoi(this->_source));
		
		std::cout << i << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible\n";
	}
}

void ScalarConversion::printFloat()
{
	std::cout << "float ";
	const char *s = _source.c_str();
	if (_source.length() == 1 && ((s[0] >= 32 && s[0] <= 47) || (s[0] >= 58 && s[0] <= 126)))
	{
		std::cout << std::fixed << std::setprecision(1) << (float)(s[0]) << "f\n";
		return;
	}
	try
	{
		float f = static_cast<float>(std::stof(this->_source));
		std::cout << std::fixed << std::setprecision(1) << f << "f\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible\n";
	}
}

void ScalarConversion::printDouble()
{
	std::cout << "double: ";
	const char *s = _source.c_str();
	if (_source.length() == 1 && ((s[0] >= 32 && s[0] <= 47) || (s[0] >= 58 && s[0] <= 126)))
	{
		std::cout << std::fixed << std::setprecision(1) << (double)(s[0]) << "\n";
		return;
	}
	try
	{
		double d = static_cast<double>(std::stod(this->_source));
		std::cout << d << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible\n";
	}
}

