#include <iostream>
using namespace std;

int main()
{
    int n;
    int lowerLimit = 0;

    cin >> n;

    if(n<0)
    {
        cout << "Invalid number";
    }
    else
    {
        int input;
        int sum = 0;
        int smallerNumber; //Either N or the user input - used to find if the input is a coprime
        bool isCoprime;

        while(true)
        {
            cin >> input;

            if(input == -1)
            {
                cout << sum;
                break;
            }

            if(input <= 0)
            {
                cout << "Invalid number\nTry again\n";
            }
            else
            {

                smallerNumber = ( (n<input) ? n : input );
                isCoprime = true;

                for(int i=2;i<=smallerNumber;i++)
                {
                    if(n%i == 0 && input%i == 0)
                    {
                        isCoprime = false;
                        break;
                    }    
                }

                if(isCoprime)
                {
                    sum += input;
                }
                
            }
        }
    }

    return 0;
}