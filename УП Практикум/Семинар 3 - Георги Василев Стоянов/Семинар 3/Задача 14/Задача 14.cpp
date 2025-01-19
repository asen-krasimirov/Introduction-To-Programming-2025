#include <iostream>

int main()
{
	//TODO...
	int n, newNumber;
	std::cin >> n;
	std::cin >> newNumber;
	int totalSum = 0;
	while (newNumber != -1)
	{
		int mutualDividers = 0;
		for (int j = 1; j <= newNumber/2+1; j++)
		{
			if (mutualDividers >= 1)
			{
				break;
			}
			if (newNumber % j == 0 && n % j == 0)
			{
				mutualDividers++;
			}
		}
		if (mutualDividers == 1 && (n%newNumber!=0 || newNumber%n!=0))
		{
			totalSum += newNumber;
		}
		std::cin >> newNumber;
	}
	std::cout << totalSum;

}