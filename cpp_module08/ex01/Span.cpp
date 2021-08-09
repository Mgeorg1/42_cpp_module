#include "Span.hpp"

Span::Span(int n) : _n(n)
{};
Span::~Span(){};
Span::Span(const Span &copy)
{
	*this = copy;
}

Span& Span::operator=(Span const &copy)
{
	this->_n = copy._n;
	this->_ints = copy._ints;
	return (*this);
}

void Span::addNumber(int num)
{
	if (this->_n == this->_ints.size())
		throw exceptionIsFull();
	else
		this->_ints.push_back(num);
}

long int Span::shortestSpan()
{
	long int ret = __LONG_MAX__;
	long int tmp;
	if (_ints.size() <= 1)
		throw exceptionNoSpanToFind();
	for (int i = 0; i < _ints.size(); i++)
	{
		for (int j = 0; j < _ints.size(); j++)
		{
			tmp = std::abs((long int)_ints[i] - (long int)_ints[j]);
			if (ret >  tmp && i != j)
				ret = tmp;
		}
	}
	return (ret);
}

long int Span::longestSpan()
{
	long int ret = 0;
	long int tmp;
	if (_ints.size() <= 1)
		throw exceptionNoSpanToFind();
	for (int i = 0; i < _ints.size(); i++)
	{
		for (int j = 0; j < _ints.size(); j++)
		{
			tmp = std::abs((long int)_ints[i] - (long int)_ints[j]);
			if (ret < tmp && i != j)
				ret = tmp;
		}
	}
	return (ret);
}