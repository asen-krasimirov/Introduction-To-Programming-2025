#include <iostream>

//task1
bool isYearLeap(int year)
{
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

//task2
void letterAndVowelCheck(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || 
            c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
            std::cout << "The character is a vowel." << std::endl;
        }
        else {
            std::cout << "The character is a consonant." << std::endl;
        }
    }
    else {
        std::cout << "The character is not a letter." << std::endl;
    }
}

//task3
void compareNumbers(int num1, int num2) {
    num1 > num2 ? std::cout << "The larger number is: " << num1 << 
        std::endl : std::cout << "The larger number is: " << num2 << std::endl;
}

//task4
void printGrade(int result) {
    if (result >= 90) {
        std::cout << "Grade: 6+" << std::endl;
    }
    else if (result >= 80) {
        std::cout << "Grade: 6" << std::endl;
    }
    else if (result >= 70) {
        std::cout << "Grade: 5" << std::endl;
    }
    else if (result >= 60) {
        std::cout << "Grade: 4" << std::endl;
    }
    else if (result >= 40) {
        std::cout << "Grade: 3" << std::endl;
    }
    else {
        std::cout << "Grade: 2" << std::endl;
    }
}

//task5
bool isValidTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

//task6
void trafficLight(int state) {
    switch (state) {
    case 1:
        std::cout << "Red: Stop!" << std::endl;
        break;
    case 2:
        std::cout << "Yellow: Prepare to stop!" << std::endl;
        break;
    case 3:
        std::cout << "Green: Go!" << std::endl;
        break;
    default:
        std::cout << "Invalid state!" << std::endl;
        break;
    }
}

//task7
void returnOppositeToLetter(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        std::cout << (char)('A' - 'a' + ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        std::cout << (char)('a' - 'A' + ch);
    }
    else
    {
        std::cout << "Invalid character";
    }
}

//task8
void arabicToRoman(int number) {
    switch (number) {
    case 1:
        std::cout << "I" << std::endl;
        break;
    case 2:
        std::cout << "II" << std::endl;
        break;
    case 3:
        std::cout << "III" << std::endl;
        break;
    case 4:
        std::cout << "IV" << std::endl;
        break;
    case 5:
        std::cout << "V" << std::endl;
        break;
    case 6:
        std::cout << "VI" << std::endl;
        break;
    case 7:
        std::cout << "VII" << std::endl;
        break;
    case 8:
        std::cout << "VIII" << std::endl;
        break;
    case 9:
        std::cout << "IX" << std::endl;
        break;
    default:
        std::cout << "Invalid input!" << std::endl;
        break;
    }
}

//task9
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sortUp(int& a, int& b, int& c) {
    if (b < a)
        swap(a, b);
    if (c < a)
        swap(a, c);
    if (c < b)
        swap(b, c);
}

//task10
void calculator(double num1, double num2, char operation) {
    if (operation == '+') {
        std::cout << "Result: " << num1 + num2 << std::endl;
    }
    else if (operation == '-') {
        std::cout << "Result: " << num1 - num2 << std::endl;
    }
    else if (operation == '*') {
        std::cout << "Result: " << num1 * num2 << std::endl;
    }
    else if (operation == '/') {
        if (num2 != 0) {
            std::cout << "Result: " << num1 / num2 << std::endl;
        }
        else {
            std::cout << "Error: Division by zero!" << std::endl;
        }
    }
    else {
        std::cout << "Error: Invalid operation!" << std::endl;
    }
}

//task11
void sortDown(int& a, int& b, int& c)
{
    if (b > a)
        swap(a, b);
    if (c > a)
        swap(a, c);
    if (c > b)
        swap(b, c);
}

//task12  //no leapYear
void printNextDay(int day, int month)
{
    if (month < 0 || month > 12 || day < 0 || day > 31)
        return;
    int daysPerMonth;
    if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12)
    {
        daysPerMonth = 31;
    }
    else if (month == 2)
    {
        daysPerMonth = 28;
    }
    else
    {
        daysPerMonth = 30;
    }

    day++;
    if (day <= daysPerMonth)
    {
        std::cout << "Next date: " << day << " " << month;
    }
    else
    {
        month++;
        if (month > 12)
        {
            month = 1;
        }
        std::cout << "Next date: " << 1 << " " << month;
    }
}

//task13
void getLargestNumber(double a, double b, double c) {

    double largestAB = (a > b) ? a : b;
    double largest = (largestAB > c) ? largestAB : c;

    std::cout << "The largest number is: " << largest << std::endl;
}