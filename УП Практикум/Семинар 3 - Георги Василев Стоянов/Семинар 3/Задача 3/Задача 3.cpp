#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    for (int i = 1; i < n; i++)
    {
        int y = n - i;
        std::cout << "x = " << i << ", y = " << y << std::endl;
    }
}