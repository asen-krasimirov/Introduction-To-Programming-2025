#include <iostream>

int main()
{
    // s dopulnitelna promenliva
    int a, b, c;
    c = a;
    a = b;
    b = c;

    //bez dopulnitelna promenliva
    a = a + b;
    b = a - b;
    a = a - b;
}
