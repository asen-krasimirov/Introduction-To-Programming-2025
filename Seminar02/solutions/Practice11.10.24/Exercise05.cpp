#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        cout << "It is a valid triangle.";
    }
    else cout << "It is not a valid triangle.";
}