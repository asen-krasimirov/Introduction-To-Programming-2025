#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int nFactoriel = 1;
    for (int i = 1; i <= n; i++)
    {
        nFactoriel *= i;
    }
    for (int i = 1; i < n; i++)
    {
        int number;
        std::cin >> number;
        nFactoriel /= number;
    }
    std::cout << nFactoriel;
}