#include <iostream>

int main()
{
    int a = 0;
    int b = 0;

    std::cin >> a >> b;

    int min = (a > b) * b + (a < b) * a;

    std::cout << "Min: " << min << std::endl;
}
