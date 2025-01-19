// Задача 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    const int ARRSIZE = n;
    int arr[9];
    for (int i = 0; i < n; i++)
    {
        int number;
        std::cin >> number;
        arr[i] = number;
    }
    for (int i = 0; i < n; i++)
    {
        int number = arr[i];
        bool isIndexThere = false;
        while (number != 0)
        {
            int digit = number % 10;
            if (digit == i)
            {
                isIndexThere = true;
            }
            number /= 10;
        }
        if (isIndexThere == false)
        {
            arr[i] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
    }

}