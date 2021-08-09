#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>
#include <exception>
#include <cmath>
#include <string>
#include <iostream>
class Span
{
private:
	std::vector<int>	_ints;
	unsigned int		_n;
	Span();
public:
	Span(unsigned int n);
	Span(const Span &copy);
	Span& operator=(const Span &copy);
	~Span();
	class exceptionOutOfRange : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class exceptionNoSpanToFind : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	void addNumber(int num);
	void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
	long int shortestSpan();
	long int longestSpan();
};

#endif