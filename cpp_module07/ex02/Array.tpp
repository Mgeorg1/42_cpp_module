template <typename T>
Array<T>::Array() : _length(0), _array(NULL)
{}

template<typename T>
Array<T>::Array(unsigned int length) : _length(length)
{
	_array = new T[this->_length];
}


template<typename T>
Array<T>::Array(Array const &copy)
{
	if (copy._length > 0)
	{
		_array = new T[copy._length];
		for (unsigned int i = 0; i < copy._length; i++)
			_array[i] = copy._array[i];
	}
	this->_length = copy._length;
}

template<typename T>
Array<T>& Array<T>::operator=(Array const &copy)
{
	if (this->_array)
		delete [] this->_array;
	if (copy._length > 0)
		this->_array = new T[copy._length];
	for (unsigned int i = 0; i < copy._legth; i++)
			this->_array[i] = copy._array[i];
	this->_length = copy._length;
	return (*this);
}

template<typename T>
const char* Array<T>::ArrayOutOfLimit::what() const throw()
{
	return ("Array: out of limit exception");
}

template<typename T>
T& Array<T>::operator[](unsigned int const i)
{
	if (i >= this->_length)
		throw ArrayOutOfLimit();
	else
		return (this->_array[i]);
}

template<typename T>
T const& Array<T>::operator[](unsigned int const i) const
{
	if (i >= this->_length)
		throw ArrayOutOfLimit();
	else
		return (this->_array[i]);
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (this->_length);
}

template<typename T>
Array<T>::~Array()
{
	if (this->_length > 0)
		delete [] this->_array;
}