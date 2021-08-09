#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
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
		throw exceptionOutOfRange();
	else
		this->_ints.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	if (this->_ints.size() + std::distance(first, last) > this->_n)
		throw exceptionOutOfRange();
	this->_ints.insert(this->_ints.end(), first, last);
}

long int Span::shortestSpan()
{
	long int ret = __LONG_MAX__;
	long int tmp;
	std::vector<int> copy(_ints);
	if (_ints.size() <= 1)
		throw exceptionNoSpanToFind();
	std::sort(copy.begin(), copy.end());
	for (int i = 0; i < copy.size() - 1; i ++)
	{
		tmp = std::labs((long int)copy[i + 1] - (long int)copy[i]);
		if (tmp < ret)
			ret = tmp; 
	}
	return (ret);
}

long int Span::longestSpan()
{
	long int ret = 0;
	long int	max = 0;
	long int	min = 0;
	if (_ints.size() <= 1)
		throw exceptionNoSpanToFind();
	max = (long int)(*std::max_element(_ints.begin(), _ints.end()));
	min = (long int)(*std::min_element(_ints.begin(), _ints.end()));
	ret = (long int)std::abs((long int)max - (long int)min);
	return (ret);
}

const char *Span::exceptionNoSpanToFind::what() const throw()
{
	return ("No span to find exception");
}

const char *Span::exceptionOutOfRange::what() const throw()
{
	return ("Out of range exception");
}
