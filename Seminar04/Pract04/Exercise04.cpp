#include <iostream>

int abs(int num)
{
    if(num<0) num = num*(-1);
    return num;
}
double fabsolute(double num)
{
    if (num < 0) num = num*(-1);
    return num;
}

int main()
{
    int num1=-78;
    double num2=-36.78;
    std::cout << abs(num1) << " " << fabsolute(num2);
}
