#include <iostream>
using namespace std;
int main()
{
    int input;
    cin >> input;
    for (int x = 1; x < input; x++)
    {
        for (int y = 1; y < input; y++)
        {
            if (x + y == input) cout << "x = " << x << ", y = " << y << endl;
        }
    }
}
