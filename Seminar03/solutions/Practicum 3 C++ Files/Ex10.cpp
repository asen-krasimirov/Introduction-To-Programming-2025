#include <iostream>
using namespace std;

int main()
{
    int n;
    int lowerLimitN = 1; // N must be positive for this problem
    int lowerLimitInput = 1; // User Input Limiter
    
    cin >> n;

    if(n < lowerLimitN)
    {
        cout << "Invalid number";
    }
    else
    {

        int sum = (int)( (n/2.0) * (2*1 + ((n-1) * 1) ) ); // Sum of arithmetic progression
    
        int input;
        
        for(int i=n-1;i>0;i--)
        {
            //Note:
            //I cannot figure out of a way to keep track of duplicate numbers that doesn't invlolve arrays at the very least
            //Is there any other way?

            cin >> input;

            if(input < lowerLimitInput || input > n) //The problem requires the user input to include N to function properly
            {
                cout << "Invalid number was entered\nTry again\n";
                i++;
            }
            else
                sum-=input;

        }

        cout << sum;
    }

    return 0;
}