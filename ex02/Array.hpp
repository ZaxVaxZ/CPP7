#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

typedef std::string str;

class Array
{
	private:

	public:
		Array();
		Array(const Array &copy);
		~Array();

		Array &operator =(const Array &copy);
};

#endif
