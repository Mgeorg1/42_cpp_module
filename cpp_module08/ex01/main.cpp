#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	try
	{
		sp.addNumber(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Span sp1 = Span(50000);
	std::vector<int> vec1(50000);
	int k = 0;
	for (std::vector<int>::iterator i = vec1.begin(); i != vec1.end(); i++)
	{
		k += 10;
		*i = k;
	}
	sp1.addNumber(vec1.begin(), vec1.end());
	std::cout << sp1.longestSpan() << "\n";
	std::cout << sp1.shortestSpan() << "\n";

	Span sp2 = Span(1);
	sp2.addNumber(4);
	try
	{
		sp2.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp2.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Span sp3 = Span(0);
	try
	{
		sp3.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}