#include <iostream>

int main()
{
    bool isFound = false;

    while (!isFound)
    {
        int number;
        std::cin >> number;
        int totalSum = number;
        while (true)
        {
            if (number / 10 == 0)
            {
                totalSum += number;
                break;
            }
            int digit = number % 10;
            totalSum += digit;
            number /= 10;
        }
        if (totalSum % 10 == 0)
        {
            isFound = true;
        }
        else
        {
            std::cout <<"Bad number"<<std::endl;
        }
    }
}