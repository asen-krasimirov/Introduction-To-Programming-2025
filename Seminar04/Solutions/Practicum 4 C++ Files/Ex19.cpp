#include <iostream>
using namespace std;

int sumOfDigits(long long a)
{
    int result = 0;
    while(a!=0)
    {
        result+=a%10;
        a/=10;
    }
    return result;
}


int main()
{
    long long a;
    int lowerLimit = 0;

    cin >> a;
    if(a<lowerLimit)
    {
        cout << "Invalid input";
        return 0;
    }

    int sum = sumOfDigits(a);
    while(sum >= 10)
    {
        sum = sumOfDigits(sum);
    }

    cout << "Result: " << sum;

    return 0;    
}