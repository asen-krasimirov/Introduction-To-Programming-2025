// Praktikum2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // zad1
    /*int year;
    std::cin >> year;
    if (year % 4 == 0 || year % 100 == 0 && year % 400 != 0)
    {
        std::cout << "leap year";
    }
    else std::cout << "not leap year";*/

    // zad2
    /*char ch;
    std::cin >> ch;
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            std:: cout << "vowel"; break;
        default: std::cout << "consonant";
            break;
        }
    }
    else std::cout << "not a letter";*/

    // zad3
    /*int a, b;
    std::cin >> a >> b;
    int max = a >= b ? a : b;
    std::cout << max;*/

    // zad4
    /*int percents, grade;
    std::cout << "Result: ";
    std::cin >> percents;
    if (percents >= 80 && percents <= 100) grade = 6;
    else if (percents >= 70 && percents < 80) grade = 5;
    else if (percents >= 60 && percents < 70) grade = 4;
    else if (percents >= 40 && percents < 60) grade = 3;
    else if (percents < 40) grade = 2;
    else std::cout << "error";

    if (grade)
    {
        if (grade == 6 && percents >= 90) std::cout << "Grade: " << grade << "+";
        else std::cout << "Grade: " << grade;
    }*/

    // zad5
    /*int a, b, c;
    std::cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        std::cout << "It is a triangle";
    }
    else std::cout << "It is NOT a triangle";*/

    // zad6
    /*int signal;
    std::cin >> signal;
    switch (signal)
    {
    case 1: std::cout << "Stop!"; break;
    case 2: std::cout << "Slow down!"; break;
    case 3: std::cout << "Go!"; break;
    default:
        break;
    }*/

    // zad7
    /*char ch;
    std::cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        ch += 32;
        std::cout << ch;
    }
    else if (ch >= 97 && ch <= 122)
    {
        ch -= 32;
        std::cout << ch;
    }
    else std::cout << "Invalid character";*/

    // zad8
    /*int n;
    std::cout << "Arabic numeral: ";
    std::cin >> n;
    switch (n)
    {
    case 1: std::cout << "Roman numeral: I"; break;
    case 2: std::cout << "Roman numeral: II"; break;
    case 3: std::cout << "Roman numeral: III"; break;
    case 4: std::cout << "Roman numeral: IV"; break;
    case 5: std::cout << "Roman numeral: V"; break;
    case 6: std::cout << "Roman numeral: VI"; break;
    case 7: std::cout << "Roman numeral: VII"; break;
    case 8: std::cout << "Roman numeral: VIII"; break;
    case 9: std::cout << "Roman numeral: IX"; break;
    default: std::cout << "Error";
        break;
    }*/

    // zad9
    /*int a, b, c;
    std::cin >> a >> b >> c;
    if (a > b) {
        int x = a;
        a = b;
        b = x;
    }
    if (a > c) {
        int x = a;
        a = c;
        c = x;
    }
    if (b > c) {
        int x = b;
        b = c;
        c = x;
    }
    std::cout << a << " " << b << " " << c;*/

    // zad10
    /*double a, b;
    char operation;
    std::cin >> a >> b >> operation;
    switch (operation)
    {
    case '+': std::cout << a + b; break;
    case '-': std::cout << a - b; break;
    case '*': std::cout << a * b; break;
    case '/': std::cout << a / b; break;
    default: std::cout << "Error";
        break;
    }*/

    // zad11
    /*int a, b, c;
    std::cin >> a >> b >> c;
    if (a > b) {
        int x = a;
        a = b;
        b = x;
    }
    if (a > c) {
        int x = a;
        a = c;
        c = x;
    }
    if (b > c) {
        int x = b;
        b = c;
        c = x;
    }
    int res = c * 100 + b * 10 + a;
    std::cout << res;*/

    // zad12
    int day, month;
    std::cout << "Date: ";
    std::cin >> day >> month;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if (day == 31)
        {
            day = 1;
            month++;
        }
        else day++;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        if (day == 30)
        {
            day = 1;
            month++;
        }
        else day++;
    case 12:
        if (day == 31)
        {
            day = 1;
            month = 1;
        }
        else day++;
        break;

    case 2:
        if (day == 28)
        {
            day = 1;
            month++;
        }
        else day++;
        break;
    default:
        break;
    }
    std::cout << "Next date: " << day << " " << month;

    // zad13
    /*int a, b, c;
    std::cin >> a >> b >> c;
    int max = a > b && a > c ? a : b > a && b > c ? b : c;
    std::cout << max;*/
}

