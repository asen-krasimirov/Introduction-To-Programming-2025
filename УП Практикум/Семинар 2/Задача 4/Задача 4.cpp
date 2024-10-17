#include <iostream>

int main()
{
    int percent;
    std::cin >> percent;

    if (percent<=100 && percent>=90)
    {
        std::cout << "6+";
    }
    else if (percent >= 80)
    {
        std::cout << "6";
    }
    else if (percent >= 70)
    {
        std::cout << "5";
    }
    else if (percent >= 60)
    {
        std::cout << "4";
    }
    else if (percent >= 40)
    {
        std::cout << "3";
    }
    else
    {
        std::cout << "2";
    }
    return 0;
}