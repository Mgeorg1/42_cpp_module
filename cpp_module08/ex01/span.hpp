#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>

class span
{
private:
	std::vector<int> _ints;
	const int		_n;
	span();
public:
	span(int n);
	span(const span &copy);
	span& operator=(const span &copy);
	~span();
};

#endif