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

void ScalarConversion::printChar()
{
	std::cout << "char: ";
	try
	{
		char ch = static_cast<char>(std::stoi(this->_source));
		const char *s = _source.c_str();
		if (_source.length() == 1 && (s[0] >= 32 && s[0] <= 47) || (s[0] >= 58 && s[0] <= 126))
			std::cout << "'" << _source << "'\n";
		else if (std::isprint(ch))
			std::cout << "'" << ch << "'\n";
		else
			std::cout << "Non displayable\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible\n";
	}
}

void ScalarConversion::printInt()
{
	std::cout << "int: ";
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