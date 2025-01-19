#include <iostream>

int main()
{
    int start, end;
    std::cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        int sumOfDividers = 0;
        for (int j = 1; j < i; j++)
        {
            if (i%j == 0)
            {
                sumOfDividers += j;
            }
        }
        if (sumOfDividers == i)
        {
            std::cout << i<<std::endl;
        }
    }
}