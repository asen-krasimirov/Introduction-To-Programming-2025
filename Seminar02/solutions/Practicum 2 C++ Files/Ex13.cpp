#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cin >> a >> b >> c;

    cout << ( (a>b && a>c) ? a : ((b>c && b>a) ? b : c) );

    return 0;
}