#include <iostream>
using namespace std;

int main()
{
    double a,b,c;

    cin >> a >> b >> c;

    if( ( a + b ) > c && ( b + c ) > a && ( c + a ) > b ){
        cout << "A triangle is posible to exist";
    }
    else{
        cout << "A triangle cannot exist";
    }
    return 0;
}