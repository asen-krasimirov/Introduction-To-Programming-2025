#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a <= b)
	{
		if (b <= c)
		{
			std::cout << a << b << c;
		}
		else
		{
			std::cout << a << c << b;
		}
	}
	else if (b <= a)
	{
		if (a <= c)
		{
			std::cout << b << a << c;
		}
		else
		{
			std::cout << b << c << a;
		}
	}
	else
	{
		if (a <= b)
		{
			std::cout << c << a << b;
		}
		else
		{
			std::cout << c << b << a;
		}
	}
	return 0;
}