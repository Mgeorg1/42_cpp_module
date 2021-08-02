#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP
#include <iostream>
#include <string>
#include <iomanip>

class ScalarConversion
{
private:
	ScalarConversion();
	
	std::string _source;
	
	void printInt();
	void printDouble();
	void printFloat();
	void printChar();
public:
	ScalarConversion(std::string source);
	ScalarConversion(ScalarConversion const &copy);
	ScalarConversion &operator=(ScalarConversion const &copy);
	void printConversions();
	~ScalarConversion();
};

#endif