#include <iostream>

int main()
{
    int m, n;
    std::cin >> m >> n;

    for (int i = 1; i <= m * n; i += n)
    {
        for (int j = i; j < i + n; j++)
        {
            std::cout<<j<<" ";
        }
        std::cout << "\n";
    }
}