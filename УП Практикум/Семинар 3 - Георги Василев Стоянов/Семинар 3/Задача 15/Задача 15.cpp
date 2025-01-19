#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int c = 1; c <= n; c++)
    {
        for (int b = 1; b < c; b++)
        {
            bool isFound = false;
            for (int a = 1; a < c; a++)
            {
                if ((a * a) + (b * b) == (c * c))
                {
                    std::cout << b <<" "<<a<<" " << c << std::endl;
                    isFound = true;
                }
            }
            if (isFound)
            {
                break;
            }
        }
    }
}