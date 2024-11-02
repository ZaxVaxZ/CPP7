#include "Array.hpp"

Array::Array()
{
	std::cout << "An Array has been created!\n";
}

Array::Array(const Array &copy)
{
	std::cout << "An Array has been created with the same qualities as another!\n";
}

Array &Array::operator =(const Array &copy)
{
	//if (&copy != this)
		//copy
	return *this;
}

Array::~Array()
{
	std::cout << "The Array has been destroyed!\n";
}
