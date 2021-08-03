#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <string>
#include <time.h>
#include <iostream>

Base *generate(void)
{
	short i = rand() % 3;

	if (i == 0)
	{
		std::cout << "New A\n";
		return (new A());
	}
	else if (i == 1)
	{
		std::cout << "New B\n";
		return (new B());
	}
	else
	{
		std::cout << "New C\n";
		return (new C());
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
}

void identify(Base &p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A\n";
	}
	catch(const std::exception& e){}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B\n";
	}
	catch(const std::exception& e){}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C\n";
	}
	catch(const std::exception& e){}
}

int main()
{
	srand(clock());
	for (int i = 0; i < 50; i++)
	{
		Base *ptr = generate();
		identify(ptr);
		identify(*ptr);
		delete (ptr);
	}
}