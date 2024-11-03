#include <iostream>
using namespace std;

int main()
{

    int n;
    int lowerLimit = 1;

    cin >> n;

    if(n<lowerLimit){
        cout << "Invalid number";
    }
    else{

        int a = 0, b = 1;
        int temp;

        if(n == 1)
        {
            cout << a << " ";
        }
        else{

            cout << a << " " << b << " ";

            n-=2;

            while(n!=0)
            {

                temp = a + b;
                a = b;
                b = temp;
                
                cout << temp << " ";
                
                n--;

            }

        }

    }

    return 0;
}