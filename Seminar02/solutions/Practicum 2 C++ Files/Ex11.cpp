#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cin >> a >> b >> c;

    if( a<0 || b<0 || c<0 || a>=10 || b>=10 || c>=10){
        cout << "Invalid input";
    }
    else{
        int number = 100 * ( (a>b && a>c) ? a : ((b>c && b>a) ? b : c) );
        number += 10 * ( (a<b && a>c) || (a<c && a>b) ? a : ((b<c && b>a) || (b<a && b>c) ? b : c) );
        number += ( (a<b && a<c) ? a : ((b<c && b<a) ? b : c) );
        cout << number;
    }
    return 0;
}