#include "easyfind.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <map>

int main()
{
	std::vector<int> vect1;
	for (int i = 0; i < 20; i++)
		vect1.push_back(i);
	std::vector<int>::iterator itVect1 = easyfind(vect1, 15);
	std::cout << *itVect1 << " is found!\n\n";
	std::cout << "#################################################\n";
	std::list<int> list1;
	for (int i = 0; i < 20; i++)
		list1.push_back(i);
	std::list<int>::iterator itList1 = easyfind(list1, 14);
	std::cout << *itList1 << " is found!\n\n";
	std::cout << "#################################################\n";
	std::vector<int> vect2;
	for (int i = 0; i < 20; i++)
		vect2.push_back(i);
	try
	{
		std::vector<int>::iterator itVect2 = easyfind(vect1, 25);
		std::cout << *itVect1 << " is found!\n\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}