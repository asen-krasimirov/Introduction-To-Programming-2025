#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int squared = n * n;
    while (true)
    {
        if (squared / 10 == 0)
        {
            std::cout << squared << std::endl;
            break;
        }
        int digit = squared % 10;
        if (digit != 0)
        {
            std::cout << digit;
        }
        squared /= 10;
    }
}