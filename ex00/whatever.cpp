#include "whatever.hpp"

whatever::whatever()
{
	std::cout << "An whatever has been created!\n";
}

whatever::whatever(const whatever &copy)
{
	std::cout << "An whatever has been created with the same qualities as another!\n";
}

whatever &whatever::operator =(const whatever &copy)
{
	//if (&copy != this)
		//copy
	return *this;
}

whatever::~whatever()
{
	std::cout << "The whatever has been destroyed!\n";
}
