#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int result = 1;

    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    std::cout << "Factorial: "<<result;
}