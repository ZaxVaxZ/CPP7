#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <iostream>

template <typename T> Array<T>::Array(): _array(NULL), _size(0)
{
	
}

template <typename T> Array<T>::Array(unsigned int n): _array(NULL), _size(n)
{
	_array = new T[n];
}

template <typename T> Array<T>::Array(const Array &copy): _array(NULL), _size(copy.size())
{
	*this = copy;
}

template <typename T> unsigned int Array<T>::size() const
{
	return _size;
}

template <typename T> T &Array<T>::operator [](unsigned int i) const
{
	if (i >= _size)
		throw std::exception();
	return _array[i];
}

template <typename T> Array<T> &Array<T>::operator =(const Array &copy)
{
	if (this != &copy)
	{
		_size = copy.size();
		if (_array)
			delete[] _array;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = copy[i];
	}
	return *this;
}

template <typename T> Array<T>::~Array()
{
	if (_array)
		delete[] _array;
}

#endif
