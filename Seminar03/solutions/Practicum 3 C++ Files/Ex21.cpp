#include <iostream>
using namespace std;

int main()
{
    int n;
    int lowerLimit = 0;

    cin >> n;

    if(n<lowerLimit)
    {
        cout << "Invalid number";
    }
    else
    {

        int rowSymbols = 2; //Holds how many symbols are in a row

        //Calculate symbols in a row
        
        int temp;

        for(int i=1;i<=n;i++)
        {

            temp = i;
            
            for(;temp!=0;temp/=10)
                rowSymbols++;
        
        }

        //Display the first row

        for(int i=0;i<rowSymbols;i++)
            cout << "#";
        
        cout << endl;

        //Displau the first half of the carpet

        for(int row=0;row<n;row++)
        {

            cout << "#";

            int index = row + 1;

            for(int i=0;i<n;i++)
            {

                cout << index;
                
                index = (index+1>n ? 1 : index + 1);
            
            }
            
            cout << "#" << endl;
        
        }

        //Display the middle part of the carpet

        //Determine if the length of the carpet is an even number

        if((rowSymbols-2)%2 == 0)
        {
            //Display with XX in the middle

            for(int i=0;i<rowSymbols;i++)
            {
                //Display beginning or end of the row

                if(i == 0 || i == rowSymbols-1)
                {
                    cout << "#";
                    continue;
                }

                //Display the middle

                if(i == (rowSymbols-2)/2)
                {
                    cout << "XX";
                    i++;
                    continue;
                }

                //Otherwise fill with spaces

                cout << " ";
            }
        }
        else
        {
            //Display with X in the middle

            for(int i=0;i<rowSymbols;i++)
            {
            
                //Display begining or end of the row
                
                if(i==0 || i==rowSymbols-1)
                {
                    cout << "#";
                    continue;
                }

                //Display the middle

                if(i == (rowSymbols-2)/2 + 1)
                {
                    cout << "X";
                    continue;
                }

                //Otherwise fill with spaces

                cout << " ";
            }
        }

        //End middle row

        cout << endl;

        //Display the lower half of the carpet

        for(int row=n;row>0;row--)
        {

            cout << "#";

            int index = row;

            for(int i=0;i<n;i++)
            {
                
                cout << index;
                
                index = (index-1<=0 ? n : index - 1);
            
            }
            
            cout << "#" << endl;
        }

        //Display the end of the carpet

        for(int i=0;i<rowSymbols;i++)
            cout << "#";
            
    }

    return 0;
}