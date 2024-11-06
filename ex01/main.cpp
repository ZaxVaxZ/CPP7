#include <iostream>
#include "iter.hpp"
#include <limits>

template <typename T> void print(T &smth)
{
	std::cout << smth << " ";
}

void increment(int &i)
{
	i++;
}

void flatline(char &c)
{
	c = '=';
}

void infinite(float &f)
{
	f = std::numeric_limits<float>::infinity();
}

void nan(double &d)
{
	d = std::numeric_limits<double>::quiet_NaN();
}

int main()
{
	int		i[4] = {1, -3, 0, 42};
	char	c[4] = {'e', 'm', 'a', 'd'};
	float	f[4] = {2.4f, 1.f, 0.13f, 9.8f};
	double	d[4] = {0.07, 1.102, 43, -2.8};

	std::cout << "------------------------\n";

	iter(i, 4, print);
	std::cout << std::endl;
	iter(c, 4, print);
	std::cout << std::endl;
	iter(f, 4, print);
	std::cout << std::endl;
	iter(d, 4, print);
	std::cout << std::endl;

	iter(i, 4, increment);
	iter(c, 4, flatline);
	iter(f, 4, infinite);
	iter(d, 4, nan);

	std::cout << "------------------------\n";

	iter(i, 4, print);
	std::cout << std::endl;
	iter(c, 4, print);
	std::cout << std::endl;
	iter(f, 4, print);
	std::cout << std::endl;
	iter(d, 4, print);
	std::cout << std::endl;
	
	std::cout << "------------------------\n";
	return (0);
}
