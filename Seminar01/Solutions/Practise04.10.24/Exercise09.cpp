#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    int d = b * b - 4 * a * c;
    double x1 = (-b - sqrt(d)) / (2 * a);
    double x2 = (-b + sqrt(d)) / (2 * a);
    cout << "x1 = " << x1 << ", x2 = " << x2;
}