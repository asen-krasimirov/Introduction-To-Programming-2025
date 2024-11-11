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

int main()
{
    int a;

    cin >> a;

    cout << "Length: " << length(a);

    return 0;
}