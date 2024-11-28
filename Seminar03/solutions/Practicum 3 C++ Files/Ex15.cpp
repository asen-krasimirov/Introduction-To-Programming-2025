#include <iostream>
using namespace std;

int main()
{
    int n;
    int lowerLimit = 1;

    cin >> n;

    if(n<lowerLimit)
    {
        cout << "Invalid input";
    }
    else
    {
        for(int a=1;a<n;a++)
        {

            for(int b=1;b<n;b++)
            {

                for(int c=1;c<n;c++)
                {

                    if( (a + b) < c || (b + c) < a || (c + a) < b ) 
                    {

                        continue;
                    
                    }
                    else if( (a*a) + (b*b) == (c*c) || (a*a) + (c*c) == (b*b) || (b*b) + (c*c) == (a*a) ) 
                    {

                        cout << a << " " << b << " " << c << endl;
                    
                    }
                }

            }

        }

    }

    return 0;
}