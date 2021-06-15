#include "Human.hpp"

void main1()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}

int main()
{
	main1();
	while (1);
	
}