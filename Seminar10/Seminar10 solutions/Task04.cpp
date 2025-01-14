#include<iostream>
using namespace std;

void Addition(int &n1, int &d1, int &n2, int &d2)
{
    int nod = 1;
    if(d1 == d2)
    {
        cout << (n1+n2) << "/" << d1;
        return;
    }
    while(d1 % nod != 0 && d2 % nod != 0)
    {
        nod++;
    }
    d1 = nod;
    d2 = nod;
    n1 *= nod/d1;
    n2 *= nod/d2;

    
    // 6 and 4. NOD = 12
}

void Simplify(int &n, int &d)
{
    if (n == d)
    {
        n = 1;
        d = 1;
        return;
    }
    while(n%2 == 0 && d%2 == 0)
    {
        n /= 2;
        d /= 2;
    }
    while(n % d == 0 && d != 1)
    {
        n /= d;
        d = 1;
    }
}

int main()
{
    // n1 is short for nominator1, d1 -> denominator1
    int n1, d1, n2, d2;
    cin >> n1 >> d1 >> n2 >> d2;

    Simplify(n1, d1);
    Simplify(n2, d2);

    
}