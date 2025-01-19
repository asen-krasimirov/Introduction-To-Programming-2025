#include <iostream>

int main()
{
    int totalSum = 0;
    for (int i = 100; i <= 999; i++)
    {
        int sumOfDigits = 0;
        int number = i;
        while (true)
        {
            if (number / 10 == 0)
            {
                sumOfDigits += number;
                break;
            }
            int digit = number % 10;
            sumOfDigits += digit;
            number /= 10;
        }
        if (sumOfDigits > 10)
        {
            int numberOfDividers = 1;
            for (int j = 1; j <= sumOfDigits / 2+1; j++)
            {
                if (sumOfDigits % j == 0)
                {
                    numberOfDividers++;
                }
            }
            if (numberOfDividers == 2)
            {
                totalSum += i;
            }
        }
    }
    std::cout << totalSum;
}