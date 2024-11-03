#include <iostream>
using namespace std;

int main()
{
    int n,m,k;
    int lowerLimit = 0;

    cin >> n >> m >> k;

    if(n < lowerLimit || m < lowerLimit || k < lowerLimit || n>m)
    {
        cout << "Invalid input";
    }
    else
    {
        int temp;

        bool isSpecial = true;

        while(n<=m)
        {
            temp = n;

            isSpecial = true;

            while(temp!=0){

                if(temp%10 == 0){

                    isSpecial = false;
                    break;

                }

                if(k%(temp%10) != 0)

                {
                    isSpecial = false;
                    break;

                }

                temp/=10;
                
            }

            if(isSpecial)
                cout << n << " ";

            n++; 
        }
    }

    return 0;
}