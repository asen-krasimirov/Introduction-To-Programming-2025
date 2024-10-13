// EightTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int number = 0;
    std::cin >> number;
	switch (number)
	{
	case 1:
		std::cout << "I";
		break;
	case 2:
		std::cout << "II";
		break;
	case 3:
		std::cout << "III";
		break;
	case 4:
		std::cout << "IV";
		break;
	case 5:
		std::cout << "V";
		break;
	case 6:
		std::cout << "VI";
		break;
	case 7:
		std::cout << "VII";
		break;
	case 8:
		std::cout << "VIII";
		break;
	case 9:
		std::cout << "IX";
		break;
	case 10:
		std::cout << "X";
		break;
	default:
		std::cout << "Not a valid number";
		break;
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
