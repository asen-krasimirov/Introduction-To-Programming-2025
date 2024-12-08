#include <iostream>
using namespace std;

int main()
{
    int m,n;
    int lowerLimit = 0;

    cin >> m >> n;

    if(m<lowerLimit || n<lowerLimit || n<m)
    {
        cout << "Invalid input";
    }
    else
    {
        int sum;
        while(m<=n)
        {

            sum = 0;

            for(int i=1;i<m;i++)
            {
                if(m%i == 0)
                {
                    sum += i;
                }
            }

            if(m == sum)
            {
                cout << m << endl;
            }

            m++;

        }
    }

    return 0;
}