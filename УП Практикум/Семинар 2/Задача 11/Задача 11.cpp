#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a <= b)
	{
		if (b <= c)
		{
			std::cout << (100 * c + 10 * b + a);
			return 0;
		}
		else
		{
			std::cout << (100 * b + 10 * c + a);
			return 0;
		}
	}
	else if (b <= a)
	{
		if (a <= c)
		{
			std::cout << (100 * a + 10 * a + b);
			return 0;
		}
		else
		{
			std::cout << (100 * a + 10 * c + b);
			return 0;
		}
	}
	else
	{
		if (a <= b)
		{
			std::cout << (100 * b + 10 * a + c);
			return 0;
		}
		else
		{
			std::cout << (100 * a + 10 * b + c);
			return 0;
		}
	}
}