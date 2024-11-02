#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

typedef std::string str;

class whatever
{
	private:

	public:
		whatever();
		whatever(const whatever &copy);
		~whatever();

		whatever &operator =(const whatever &copy);
};

#endif
