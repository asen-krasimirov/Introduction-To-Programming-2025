#include <iostream>
using namespace std;


void print(char S, int N)
{
    while(N!=0)
    {
        cout << S;
        N--;
    }
}


int main()
{
    char a;
    int n;
    int lowerLimit = 0;

    cin >> a >> n;
    if(n<lowerLimit)
    {
        cout << "Invalid input";
        return 0;
    }

    print(a,n);

    return 0;
}