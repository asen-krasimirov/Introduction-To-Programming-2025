#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    int temp;

    cin >> a >> b >> c >> d;

    temp = a;
    a = b;
    b = temp;

    c=d+c;
    d=c-d;
    c=c-d;
    
    cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d;

    return 0;
}