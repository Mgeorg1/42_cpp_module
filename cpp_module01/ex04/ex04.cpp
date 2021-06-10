#include <iostream>
#include <string>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string &ref = s;
	std::string *ptr = &s;
	std::cout << *ptr <<" - string using pointer\n";
	std::cout << ref << " - string using reference\n";
}