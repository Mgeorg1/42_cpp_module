# ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>
template<typename T>
class Array
{
private:
	unsigned int _length;
	T* _array;
public:
	Array();
	Array(unsigned int length);
	Array(Array const &copy);
	~Array();
	
	Array& operator=(Array const &copy);
	T& operator[](unsigned int const  i);
	class ArrayOutOfLimit : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	unsigned int size() const;
};

#include "Array.ipp"

#endif