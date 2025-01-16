#include <iostream>
using namespace std;

bool isPrime(int a)
{
    for(int i=2;i<a;i++)
        if(a%i==0)
            return false;
    return true;
}

bool isSumOfPrimes(int a)
{
    int subtraction;
    for(int i=2;i<=a;i++)
    {
        if(isPrime(i))
        {
            subtraction = a-i;
            if(isPrime(subtraction))
                return true;
        }
    }
    return false;
}

void primeAnalysis(int a)
{
    cout << a << " is " << ((isPrime(a)) ? "a Prime number" : "Not a Prime number") << endl;
    cout << a << " is " << ((isSumOfPrimes(a)) ? "a Sum of Primes" : "Not a Sum of Primes") << endl;
    cout << "Prime numbers before " << a << ": ";
    int lastPrime = 3;
    for(int i=2;i<=a;i++)
    {
        if(isPrime(i))
        {
            cout << i << " ";            
        }
    }
}

int main()
{
    int a;
    int lowerLimit = 1;

    cin >> a;
    if(a<=lowerLimit)
    {
        cout << "Invalid input";
        return 0;
    }

    primeAnalysis(a);

    return 0;
}