#include <iostream>
using namespace std;

int length(int a)
{
    int len = 0;
    
    do
    {
        len++;
        a/=10;
    }
    while(a!=0);

    return len;
}

int numAt(int n, int k)
{
    while(k!=1)
    {
        n/=10;
        k--;
    }
    int result = n%10;
    return (result<0?(result * -1):result); //Return the absolute value
}

int main()
{
    int a,k;
    int lowerLimit = 1;

    cin >> a >> k;

    //Negative numbers are still constructed of digits
    //A check for negative numbers a might be unnecessary
    if(k>length(a) || k<lowerLimit)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << "numAt(" << k << ") = " << numAt(a,k);

    return 0;
}