#include <iostream>
using namespace std;

int main()
{
    int m,n;
    int lowerLimit = 0;

    cin >> n >> m;

    if(m<lowerLimit || n<lowerLimit || m<n)
    {
        cout << "Invalid input";
    }
    else{
        
        int sum = 0;

        int i;

        for(;n<=m;n++){

            for(i=2;i<n-1;i++){

                if(n%i == 0)
                {
                    break;
                }

            }

            if(i==n-1)
            {
                sum+=n;
            }

        }

        cout << "Sum of primes: " << sum;
    }

    return 0;
}