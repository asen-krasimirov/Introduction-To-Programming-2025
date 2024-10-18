#include <iostream>
using namespace std;

int main()
{
    int a;

    cin >> a;

    if( a >= 90 ){
        cout << "6+";
    }
    else if ( a >= 80 ){
        cout << "6";
    }
    else if ( a >= 70 ){
        cout << "5";
    }
    else if ( a >= 60 ){
        cout << "4";
    }
    else if ( a >= 40 ){
        cout << "3";
    }
    else if ( a < 40 ){ 
        cout << "2";
    }
    
    return 0;
}