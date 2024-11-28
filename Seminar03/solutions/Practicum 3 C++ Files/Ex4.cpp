#include <iostream>
using namespace std;

int main()
{
    long n1,n2;

    cin >> n1;

    //Used for the bonus problem
    n2=n1;

    //Original problem

    long sum1 = 0;

    while(n1 != 0)
    {

        sum1 += n1 % 10;

        n1 /= 10;

    }

    cout << sum1 << endl;

    //Bonus problem

    long sum2 = 0;

    while(n2 != 0)
    {

        sum2 += n2 % 10;

        n2 /= 10;

        if(n2 == 0 && sum2/10 != 0)
        {

            n2 = sum2;

            sum2 = 0;

        }

        cout << n2 << endl;
        
    }

    cout << "Bonus: " << sum2;

    return 0;
}