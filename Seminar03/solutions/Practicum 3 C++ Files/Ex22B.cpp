#include <iostream>
using namespace std;

int main()
{
    //Explanation is the same as Ex22A
    //Just swap the column and row

    // if {row} is not an even number
    //     [(n . {closest_even_number < {row}_number}) + {column}]
    // else
    //     [(n . {{row}_number}) - ({column} - 1)]



    int n;
    int lowerLimit = 0;

    cin >> n;

    if(n<lowerLimit)
    {
        cout << "Invalid input";
    }
    else
    {
        
        for(int row = 1; row <= n; row++)
        {
            for(int column = 1; column <= n; column++)
            {
                if(row%2==0)
                {
                    cout << ((n*row)-(column-1)) << " ";
                }
                else
                {
                    cout << ((n*(row-1))+column) << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}