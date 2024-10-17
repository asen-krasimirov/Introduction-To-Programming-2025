#include <iostream>

int main()
{
	int color;
	std::cin >> color;

	switch (color)
	{
	case 1:std::cout << "You can pass!"; break;
	case 0:std::cout << "Warning";
	case -1:std::cout << "You shall not pass!"; break;
	default:std::cout << "That is not a color of the traffic light!"; break;
	}

}