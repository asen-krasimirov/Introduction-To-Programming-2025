#include <iostream>

int main()
{
	const int ARRSIZE = 5;
	int arr[ARRSIZE];
	int resultNumber = 0;
	for (int i = 0; i < ARRSIZE; i++)
	{
		int number;
		std::cin >> number;
		arr[i] = number;
	}
	bool firstNonZeroDigitMet = false;
	for (int i = 0; i < ARRSIZE; i++)
	{
		if (firstNonZeroDigitMet == false)
		{
			if (arr[i] == 0)
			{
				continue;
			}
			else
			{
				firstNonZeroDigitMet = true;
				resultNumber += arr[i] * pow(10, (ARRSIZE-i-1));
			}
		}
		else
		{
			if (arr[i] != 0)
			{
				resultNumber += arr[i] * pow(10, (ARRSIZE - i-1));
			}
		}
	}
	std::cout << resultNumber + 1;
}