#include <iostream>

int main()
{
    int number1, number2;
    char operation;
    std::cin >> number1 >> number2 >> operation;

    if (operation=='+')
    {
        std::cout << (double)(number2+number2);
    }
    if (operation == '-')
    {
        std::cout << (double)(number1 + number2);
    }
    if (operation == '*')
    {
        std::cout << (double)(number1*number2);
    }
    if (operation == '/')
    {
        if (number2 == 0)
        {
            std::cout << "You can't divide by 0!";
        }
        else
        {
            std::cout << (double)(number1/number2);
        }
    }
}