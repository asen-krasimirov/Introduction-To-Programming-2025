#include <iostream>

int main()
{
    int year;
    std::cin >> year;

    if (year % 4 == 0)
    {
        std::cout << "Yes";
        return 0;
    }
    std::cout << "No";
    return 0;

}