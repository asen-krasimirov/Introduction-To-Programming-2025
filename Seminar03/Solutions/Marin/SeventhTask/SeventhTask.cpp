// SeventhTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int TotalSum = 0;
	for (int i = 100; i < 1000; i++)
	{
        int CurrentElement = i;
        int CurrentSum = 0;
        while (CurrentElement != 0)
        {
            CurrentSum += CurrentElement % 10;
            CurrentElement /= 10;
        }
        if (CurrentSum > 9 && CurrentSum < 100)
        {
            TotalSum += i;
        }
        int divisors = 0;
        for (int j = 1; j <= i / 2; j++)
        {
            if (!(i % j))
            {
                divisors++;
            }
            if (divisors > 2)
            {
                break;
            }
        }
        if (divisors <= 2)
        {
            TotalSum += i;
        }
	}
    std::cout << TotalSum;
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
