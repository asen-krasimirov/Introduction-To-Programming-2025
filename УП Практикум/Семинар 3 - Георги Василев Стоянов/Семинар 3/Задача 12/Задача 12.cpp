#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int totalSum = 0;
    for (int i = 1; i <= n; i++)
    {
        int miniSum = 0;
        for (int j = 1; j <= i; j++)
        {
            miniSum += j;
        }
        totalSum += miniSum;
    }
    std::cout << totalSum;
}