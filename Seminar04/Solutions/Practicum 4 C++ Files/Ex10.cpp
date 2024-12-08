#include <iostream>
using namespace std;

void hasWholeSqrt(int n)
{
    for(int i=1;i*i <= n;i++)
    {
        if(i*i == n)
        {
            cout << "yes (" << i << "^2)";
            return;
        }
    }
    cout << "no (?^2)";
}

int main()
{
    int a;
    int lowerLimit = 1;

    cin >> a;

    if(a<lowerLimit)
    {
        cout << "Invalid input";
        return 0;
    }

    hasWholeSqrt(a);

    return 0;
}