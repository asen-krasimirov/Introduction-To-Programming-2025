#include <iostream>
using namespace std;

int main()
{
    int m,n;
    int lowerLimit = 0;

    cin >> m >> n;

    if(m<lowerLimit || n<lowerLimit){
        cout << "Invalid number";
    }
    else{

        int i = 1;

        while( i <= (m*n) )
        {

            cout << i << ( (i%n == 0) ? "\n" : " " );

            i++;

        }

    }

    return 0;
}