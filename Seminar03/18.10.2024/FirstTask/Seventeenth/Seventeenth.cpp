// Seventeenth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
	int max =INT_MIN;
	int min = INT_MAX;
	int preva = 0;
	int prevb = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		int b;
		std::cin >> b;
		if (a + b > max)
		{
			max = a + b;
		}
		if (a + b < min)
		{
			min = a + b;
		}
	}
	if (!(max - min))
	{
		std::cout << "Equal sums: " << max;
	}
	else
	{
		std::cout << "Different sums. Max Difference: " << max - min;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
