#include <iostream>
using namespace std;

int main()
{
    double a,b; //It is not said that the number is whole in the problem
    cin >> a >> b;

    if(a==b){
        cout << "Invalid input";
    }
    else{
        cout << ( ( a > b ) ? a : b );
    }

    return 0;
}