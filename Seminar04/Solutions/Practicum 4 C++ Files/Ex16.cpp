#include <iostream>
using namespace std;

int leastNumber(int a, int b, int c, int d)
{
    int min = (a<b)?a:b;
    min = (min<c)?min:c;
    min = (min<d)?min:d;

    return min;
}

//Greatest Common Divisor
int GCD(int a, int b, int c, int d)
{
    int min = leastNumber(a,b,c,d);
    min *= ((min<0)?-1:1);

    for(;min>0;min--)
    {
        if(
            a % min == 0 &&
            b % min == 0 &&
            c % min == 0 &&
            d % min == 0 
        )
        {
            return min;
        }
    }

    //Unreachable point
    //To avoid compiler warnings
    //All numbers are devisible by one
    return 1; 
}



int main()
{
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    cout << "Result: " << GCD(a,b,c,d);

    return 0;
}