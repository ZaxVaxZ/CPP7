#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

typedef std::string str;

class iter
{
	private:

	public:
		iter();
		iter(const iter &copy);
		~iter();

		iter &operator =(const iter &copy);
};

#endif
