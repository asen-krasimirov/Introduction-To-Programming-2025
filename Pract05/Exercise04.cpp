#include <iostream>
using namespace std;
void validateAge(int& age)
{
    if (age < 15 || age>100) age = 15;
}
void validateNumber(int& fnumber)
{
    if (fnumber < 10000 || fnumber>99999) fnumber = 10000;
}
int main()
{
    int age, fnumber;
    cin >> age >> fnumber;
    validateAge(age);
    validateNumber(fnumber);
    cout << age << " " << fnumber;
}
