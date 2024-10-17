#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && a < c)
    {
        cout << a << " ";
        if (b < c) cout << b << " " << c;
        else cout << c << " " << b;
    }
    if (b < c && b < a)
    {
        cout << b << " ";
        if (c < a) cout << c << " " << a;
        else cout << a << " " << c;
    }
    if (c < a && c < b)
    {
        cout << c << " ";
        if (b < a) cout << b << " " << a;
        else cout << a << " " << b;
    }
}
