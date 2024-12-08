#include <iostream>
using namespace std;

bool isEven(int num)
{
    return num%2==0;
}

int main()
{
    int a;

    cin >> a;

    cout << isEven(a);
    
    return 0;
}