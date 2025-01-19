#include <iostream>

int main()
{
    int number;
    int result = 0;
    std::cin >> number;
    while (true)
    {
        if (number / 10 == 0)
        {
            result += number;
            if (result / 10 == 0)
            {
                std::cout << result;
                break;
            }
            else
            {
                number = result;
                result = 0;
            }
        }
        int digit = number % 10;
        result += digit;
        number /= 10;
    }
    return 0;
}