// FourthTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int Grade = 0;
    std::cin >> Grade;
	if (Grade >= 90)
	{
		std::cout << "6+";
	}
	else if (Grade >= 80)
	{
		std::cout << "6";
	}
	else if (Grade >= 70)
	{
		std::cout << "5";
	}
	else if (Grade >= 60)
	{
		std::cout << "4";
	}
	else if (Grade >= 40)
	{
		std::cout << "3";
	}
	else
	{
		std::cout << "2";
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
