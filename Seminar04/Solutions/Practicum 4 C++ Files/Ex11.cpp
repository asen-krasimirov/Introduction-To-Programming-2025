#include <iostream>
using namespace std;

//Lowest Common Divisor
int LCD(int a, int b, int c)
{
    int i=a;
    while(i%b != 0 && i%c != 0)
    {
        i+=a;
    }
    return i;
} 

int main()
{
    int a,b,c;

    cin >> a >> b >> c;

    cout << "Least Common Multiple of " << a << ", " << b << " and " << c << " is: " << LCD(a,b,c);

    return 0;
}