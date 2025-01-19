#include <iostream>

int main()
{
    const int MSIZE = 3;
    int arr[MSIZE][MSIZE];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int number;
            std::cin >> number;
            arr[i][j] = number;
        }
    }

    bool isAlright = true;
    for (int i = 0; i < MSIZE; i++)
    {
        for (int j = i+1; j < MSIZE; j++)
        {
            if (arr[j][i] != 0)
            {
                isAlright = false;
            }
        }
    }

    std::cout << isAlright;
}

