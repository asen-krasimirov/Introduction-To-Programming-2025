// TwelfthTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int Day = 0, Month = 0;
    std::cin >> Day;
    std::cin >> Month;
    if (Month == 2 && Day == 28)
    {
        Month++;
        Day = 1;
    }
    else if ((Month == 4 || Month == 6 || Month == 9 || Month == 11) && Day == 30)
    {
        Month++;
        Day = 1;
    }
    else if (Day == 31)
    {
        if (Month == 12)
        {
            Month = 1;
        }
        else
        {
            Month++;
        }
        Day = 1;
    }
    else
    {
        Day++;
    }
    std::cout << Day << " " << Month;
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
