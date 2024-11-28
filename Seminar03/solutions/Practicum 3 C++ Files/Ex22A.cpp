#include <iostream>
using namespace std;

int main()
{
    // 1 6 7   | |¯|                  X X X
    // 2 5 8   | | |    matrix(3x3) = X X X
    // 3 4 9   |_| |                  X X X

    // 1 ... X   |  |¯¯|                  X ... X
    // 2 ... X   |  |  |    matrix(nxn) = X ... X
    // ¦     ¦   ¦  ¦  ¦                  ¦ ... ¦
    // n ... X   |__|  |                  X ... X

    // [(3.0) + 1]{1} [(3.2) - 0]{6} [(3.2) + 1]{7}
    // [(3.0) + 2]{2} [(3.2) - 1]{5} [(3.2) + 2]{8}
    // [(3.0) + 3]{3} [(3.2) - 2]{4} [(3.2) + 3]{9}

    // if column is not an even number
    //     [(n . {closest_even_number < column_number}) + row]
    // else
    //     [(n . {column_number}) - (row - 1)]
            
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
                if(column%2==0)
                {
                    cout << ((n*column)-(row-1)) << " ";
                }
                else
                {
                    cout << ((n*(column-1))+row) << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}