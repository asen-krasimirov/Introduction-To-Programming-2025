// Praktikum1_stefan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    // zad1
    /*std::cout << "Oh what\na happy day!\nOh yes,\nwhat a happy day!";*/

    // zad2
    /*double a = 5.4;
    double b = 7.9;
    double perimeter = 2 * (a + b);
    double area = a * b;
    std::cout << "P = " << perimeter << "\n" << "S = " << area;*/

    // zad3
    /*double sumLeva = 0;
    std::cin >> sumLeva;
    double sumDollars = sumLeva * 0.56;
    double sumEuros = sumLeva * 0.51;
    std::cout << sumDollars << " USD\n" << sumEuros << " EUR";*/

    // zad4
    /*double a = 0, b = 0;
    std::cout << "Please enter the length of the FIRST side.\n";
    std::cin >> a;
    std::cout << "Please enter the length of the SECOND side.\n";
    std::cin >> b;
    double perimeter = 2 * (a + b);
    double area = a * b;
    std::cout << "P = " << perimeter << "\n" << "S = " << area;*/

    //zad5
    /*int n1, n2;
    std::cin >> n1;
    std::cin >> n2;
    bool OK = n1 < n2;
    std::cout << OK;*/

    //zad6
    /*int x, y;
    std::cout << "Divident: ";
    std::cin >> x;
    std::cout << "Divisor: ";
    std::cin >> y;
    int quotient = x / y;
    int reminder = x % y;
    std::cout << "The quotient of the devision is: " << quotient << "\nThe remainder of the division is: " << reminder;*/

    // zad7
    /*int apples, pears, bananas;
    std::cout << "Apples: ";
    std::cin >> apples;
    std::cout << "Pears: ";
    std::cin >> pears;
    std::cout << "Bananas: ";
    std::cin >> bananas;
    std::cout << "Pesho, don't forget to buy " << apples << " apples, " << pears << " pears and " << bananas << " bananas!";*/

    // zad8
    /*int radius;
    double PI = 3.14159265;
    std::cin >> radius;
    double perimeter = PI * (2 * radius);
    double area = PI * radius * radius;
    std::cout << "P = " << perimeter << "\n" << "S = " << area; */

    // zad9
    /*double a, b, c;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;
    double D = b * b - 4 * a * c;
    double x1 = D >= 0 ? (b + sqrt(D)) / 2 : NAN;
    double x2 = D >= 0 ? (b - sqrt(D)) / 2 : NAN;
    std::cout << "x1 = " << x1 << " x2 = " << x2;*/

    // zad10
    //int a, b;
    //std::cout << "a = ";
    //std::cin >> a;
    //std::cout << "b = ";
    //std::cin >> b;
    ///*int x = a;
    //a = b;
    //b = x;*/
    //a = a + b;
    //b = a - b;
    //a = a - b;
    //std::cout << "a = " << a << " b = " << b;

    // zad11
   /* int n1, n2;
    std::cin >> n1 >> n2;
    int max = n1 >= n2 ? n1 : n2;
    int min = n1 <= n2 ? n1 : n2;
    std::cout << "min = " << min << " max = " << max;*/

    // zad12
    /*int seconds;
    std::cin >> seconds;
    int finalSec = seconds % 60;
    int min = seconds / 60;
    int finalMin = min % 60;
    int hours = min / 60;
    int finalHours = hours % 24;
    int days = hours / 24;
    std::cout << days << " days, " << finalHours << " hours, " << finalMin << " minutes and " << finalSec << " seconds";*/

    // zad13
    /*double x1, y1, x2, y2;
    std::cout << "x1 = ";
    std::cin >> x1;
    std::cout << "y1 = ";
    std::cin >> y1;
    std::cout << "x2 = ";
    std::cin >> x2;
    std::cout << "y2 = ";
    std::cin >> y2;
    double length = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    std::cout << length;*/

    // zad14
    int n;
    std::cin >> n;
    int sum = (n * (n + 1)) / 2;
    std::cout << sum;
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
