#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T> class Array
{
	private:
		T			   *_array;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		~Array();

		unsigned int	size() const;

		T			&operator [](unsigned int i) const;
		Array<T>	&operator  =(const Array &copy);
};

#include "Array.tpp"

#endif
