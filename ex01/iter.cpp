#include "iter.hpp"

iter::iter()
{
	std::cout << "An iter has been created!\n";
}

iter::iter(const iter &copy)
{
	std::cout << "An iter has been created with the same qualities as another!\n";
}

iter &iter::operator =(const iter &copy)
{
	//if (&copy != this)
		//copy
	return *this;
}

iter::~iter()
{
	std::cout << "The iter has been destroyed!\n";
}
