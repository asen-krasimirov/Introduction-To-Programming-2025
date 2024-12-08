#include <iostream>
using namespace std;

bool isPositive(int num)
{
    return num>0;
}

bool isNegative(int num)
{
    return num<0;
}


int main()
{
    int a;

    cin >> a;

    cout << "isPositive: " << isPositive(a) << endl << "isNegative: " << isNegative(a); 

    return 0;
}