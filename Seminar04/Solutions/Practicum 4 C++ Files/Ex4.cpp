#include <iostream>
using namespace std;

int abs(int num) 
{
    return num * ( num<0 ? -1 : 1 );
}

double fabs(double num)
{
    double epsilon = 0.0001;
    return num * (num < (epsilon * -1) ? -1 : 1);
}


int main()
{
    int a;
    double b;

    cin >> a >> b;

    cout << "abs(" << a << ") = " << abs(a) << endl;
    cout << "fabs(" << b << ") = " << fabs(b);

    return 0;
}