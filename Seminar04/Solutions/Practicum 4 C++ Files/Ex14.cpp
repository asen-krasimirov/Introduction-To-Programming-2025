#include <iostream>
using namespace std;

long long pow(int num, unsigned N)
{
    long long result = 1;
    for(unsigned i=0;i<N;i++)
    {
        result *= num;
    }
    return result;
}

int main()
{
    int a;
    unsigned n;

    cin >> a >> n;

    if(n<=0)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << pow(a,n);

    return 0;
}