#include <iostream>
#include "Array.hpp"

typedef std::string str;

int main()
{
	{
		Array<int> a;
		std::cout << a.size() << "\n\n";

		Array<int> b(10);
		std::cout << b.size() << "\n";
		for(int i = 0; i < 10; i++)
			b[i] = i + 1;
		for(int i = 0; i < 10; i++)
			std::cout << b[i] << " ";
		std::cout << "\n\n";

		a = b;
		a = a;
		std::cout << a.size() << "\n";
		for(int i = 0; i < 10; i++)
			a[i] = i + 1;
		for(int i = 0; i < 10; i++)
			std::cout << a[i] << " ";
		std::cout << "\n\n";

		Array<char> c(2);
		std::cout << c.size() << "\n";
		for(int i = 0; i < 2; i++)
			c[i] = 'c' + i;
		for(int i = 0; i < 2; i++)
			std::cout << c[i] << " ";
		std::cout << "\n\n";

		Array<str> s(3);
		std::cout << s.size() << "\n";
		for(int i = 0; i < 3; i++)
			s[i] = "emad";
		for(int i = 0; i < 3; i++)
			std::cout << s[i] << " ";
		std::cout << "\n\n";

		Array<float> p(1);
		std::cout << p.size() << "\n";
		for(int i = 0; i < 1; i++)
			p[i] = 3.14159265f;
		for(int i = 0; i < 1; i++)
			std::cout << p[i] << " ";
		std::cout << "\n\n";

		try
		{
			p[1];
		}
		catch (std::exception &e)
		{
			std::cout << "Index out of bounds!\n";
		}

		try
		{
			p[4];
		}
		catch (std::exception &e)
		{
			std::cout << "Index out of bounds!\n";
		}

		try
		{
			p[-1];
		}
		catch (std::exception &e)
		{
			std::cout << "Index out of bounds!\n";
		}
	}
	return (0);
}


// #include <ctime>
// #include <cmath>
// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }