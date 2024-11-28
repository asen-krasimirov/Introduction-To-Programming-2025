#include <iostream>
using namespace std;
int main()
{
	int sumNumbers=0;
	int sumDigits;
	bool isPrime = 1;
	for (int i = 100; i < 1000; i++)
	{
		sumDigits = i % 10 + i / 10 % 10 + i / 100;
		if (sumDigits > 9 && sumDigits < 100)
		{
			for (int j = 2; j < sumDigits; j++)
			{
				if (sumDigits%j == 0)
				{
					isPrime = 0;
				}
			}
			if (isPrime) sumNumbers += i;
			sumDigits = 0;
			isPrime = 1;
		}	
	}
	cout << sumNumbers;
}
