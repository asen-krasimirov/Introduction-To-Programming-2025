// SecondTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    int m = 0;
    std::cin >> m;
    if (n < 0 || n > 255 || m < 0 || m > 255)
    {
        std::cout << "Invalid codes!";
        return 0;
    }
    for (int i = n; i <= m; i++)
    {
        std::cout << (char)(i) << std::endl;
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
