#include <iostream>
using namespace std;

int main()
{
    int n;
    int lowerLimit = 1;

    cin >> n;

    //There are technically two solutions based on whether 0 is a natural number or not
    //In the example 0 isn't a natural number
    if(n<lowerLimit)
    {
        cout << "Invalid number";
    }
    else
    {
        int x = 1;
        int y; 

        while(x<n)
        {

            y = n-x;

            cout << "x = " << x << ";    y = " << y << endl;

            x++;
            
        }

    }

    return 0;
}