#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <algorithm>
#include <exception>

class NotFindException : public std::exception
{
	public:
		virtual const char *what() const throw() {return ("Integer not found exception");}
};

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator ret = std::find(container.begin(), container.end(), value);
	if (ret == container.end())
		throw NotFindException();
	else
		return (ret);
}

#endif