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
        bool first_half; //Used to determine upper and lower half of the bow-tie
        int limiter; //Limits the pair_number
        int symbol_spaces = 0;
        int digits;
        int pair_number;
        string spacer = " "; //Used to determine what symbol is used for the space in-between numbers


        //Determine the length of the pair

        int temp = n;

        while(temp!=0)
        {
            symbol_spaces++;
            temp/=10;
        }
        symbol_spaces++; // Add 1 space for a spacer


        //Start displaying the bow-tie

        for(int row=1;row<2*n;row++)
        {
            first_half = n-row >= 0;
            limiter = (first_half ? row : 2*n - row);


            //Display the left side of the bow-tie

            for(pair_number=1;pair_number<=limiter;pair_number++)
            {
                //Fill the first part of the pair with the pair number

                cout << pair_number;

                //Determine the number of digits in the pair number

                digits = 0;
                for(int i = pair_number; i!=0; i/=10)
                    digits++;


                //Fill the rest of the pair with spacers

                for(int space = 0; space < symbol_spaces - digits; space++)
                    cout << spacer;
            }



            //Display the "empty" space

            //Check whether it is the middle row

            if(n==row)
            {
                //If yes - just add the middle part

                for(int i=0;i<n;i++)
                {
                    cout << "-";
                }
            }
            else
            {
                //If not - add the middle part in the form of spacers

                for(int i=0;i<n;i++)
                    cout << spacer;
                
                //And add the empty pairs

                for(pair_number = 2*(n-limiter); pair_number>0;pair_number --)
                    for(int space = 0; space < symbol_spaces; space ++)
                        cout << spacer;
            }

            
            //Display the right side of the bow-tie

            for(pair_number = limiter; pair_number>0 ; pair_number-- )
            {
                
                //Determine the digits

                digits = 0;
                for(int i = pair_number; i!=0; i/=10 )
                    digits++;


                //Fill the pair with the required number of spacers

                for(int space = 0; space < symbol_spaces - digits; space++)
                    cout << spacer;


                //Fill the rest of the pair with the pair number

                cout << pair_number;
            }

            cout << endl;
        }
    }

    return 0;
}