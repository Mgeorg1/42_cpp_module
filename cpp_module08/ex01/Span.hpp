#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>
#include <exception>
#include <cmath>

class Span
{
private:
	std::vector<int> _ints;
	int		_n;
	Span();
public:
	Span(int n);
	Span(const Span &copy);
	Span& operator=(const Span &copy);
	~Span();
	class exceptionIsFull : public std::exception
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
	long int shortestSpan();
	long int longestSpan();
};

#endif