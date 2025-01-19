#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int firstNumber = 0;
    int secondNumber = 1;
    int thirdNumber = 0;
    std::cout <<0 <<" "<<1;
    for (int i = 3; i <= n; i++)
    {
        thirdNumber = secondNumber + firstNumber;
        std::cout <<" "<< thirdNumber;
        firstNumber = secondNumber;
        secondNumber = thirdNumber;
    }
}