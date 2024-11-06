#include <iostream>
#include "whatever.hpp"

typedef std::string str;

int main()
{
	{
		int		x = 105, y = 226;
		str		s = "w", t = "e";
		char	c = 'e', h = 'j';
		float	f = 3.9, g = 4.2;

		std::cout << x << ", " << y << "\n";
		std::cout << "Min: " << ::min(x, y) << "\n";
		std::cout << "Max: " << ::max(x, y) << "\n";
		::swap(x, y);
		std::cout << "Swapped: " << x << ", " << y << "\n\n";

		std::cout << c << ", " << h << "\n";
		std::cout << "Min: " << ::min(c, h) << "\n";
		std::cout << "Max: " << ::max(c, h) << "\n";
		::swap(c, h);
		std::cout << "Swapped: " << c << ", " << h << "\n\n";

		std::cout << f << ", " << g << "\n";
		std::cout << "Min: " << ::min(f, g) << "\n";
		std::cout << "Max: " << ::max(f, g) << "\n";
		::swap(f, g);
		std::cout << "Swapped: " << f << ", " << g << "\n\n";

		std::cout << s << ", " << t << "\n";
		std::cout << "Min: " << ::min(s, t) << "\n";
		std::cout << "Max: " << ::max(s, t) << "\n";
		::swap(s, t);
		std::cout << "Swapped: " << s << ", " << t << "\n\n";
	}
	return (0);
}

// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }
