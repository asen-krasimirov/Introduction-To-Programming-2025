#include <iostream>
using namespace std;

int main()
{
    int n,temp,sum = 0;
    
    while(true)
    {

        cin >> n;

        temp = n;
        sum = 0;
        
        while(temp!=0)
        {
            sum+=temp%10;
            temp/=10;
        }

        if( (n+sum) % 10 == 0)
        {
            cout << n << " -> End of program [" << n << " + " << sum << " = " << (n+sum) << " which is devisible by 10]\n";
            break;
        }
        else
        {
            cout << n << " -> Bad number [" << n << " + " << sum << " = " << (n+sum) << " which is not devisible by 10]\n";
        }

    }

    return 0;
}