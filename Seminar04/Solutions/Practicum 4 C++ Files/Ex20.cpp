#include <iostream>
using namespace std;


void factorization (long long a)
{
    int i = 2;
    while(a!=1)
    {
        if(a%i == 0)
        {
            cout << i;
            a/=i;
            if(a!=1)
                cout << ".";
            continue;
        }
        i++;
    }
}

int main()
{
    long long a;
    long long lowerLimit = 1;

    cin >> a;
    if(a<lowerLimit)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << a << " = ";

    factorization(a);

    return 0;
}