// TwentiethTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int linelen = n * 5;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }
        for (int j = 0; j < linelen - i * 4; j++)
        {
            if (i == n)
            {
                std::cout << "-";
            }
            else
            {
                std::cout << " ";
            }     
        }
        for (int j = i; j > 0; j--)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }
        for (int j = 0; j < linelen - i * 4; j++)
        {
            if (i == n)
            {
                std::cout << "-";
            }
            else
            {
                std::cout << " ";
            }     
        }
        for (int j = i; j > 0; j--)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
