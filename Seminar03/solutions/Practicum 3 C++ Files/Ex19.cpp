#include <iostream>
using namespace std;

int main()
{
    int n;
    int lowerLimit = 0;

    cin >> n;

    for(int i=1;i<=n;i++)
    {

        for(int j=i;j>0;j--)
        {

            cout << "$ ";

        }

        cout << endl;
    }
}