#include <iostream>

int main()
{
    int intervalStart, intervalEnd;
    std::cin >> intervalStart >> intervalEnd;
    int sumOfPrimes = 0;

    for (int i = intervalStart; i <= intervalEnd; i++)
    {
        int numberOfDividers = 1;
        for (int j = 1; j <= i / 2 + 1; j++)
        {
            if (i % j == 0)
            {
                numberOfDividers++;
            }
        }
        if (numberOfDividers == 2)
        {
            sumOfPrimes += i;
        }
    }
    std::cout << sumOfPrimes;
}