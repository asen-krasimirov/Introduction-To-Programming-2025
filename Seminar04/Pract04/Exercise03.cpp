#include <iostream>
using namespace std;
void isPositive(int num)
{
    if (num > 0) cout << "The number is positive.";
}
void isNegative(int num)
{
    if (num < 0) cout << "The number is negative.";
}
int main()
{
    int num;
    cin >> num;
    isPositive(num);
    isNegative(num);
}
