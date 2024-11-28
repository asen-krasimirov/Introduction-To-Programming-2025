#include <iostream>
using namespace std;
int main()
{
    int input;
    cin >> input;
    int squared = input * input;
    while (squared != 0)
    {
        int lastNum = squared % 10;
        if (lastNum != 0) cout << lastNum;
        squared = squared / 10;
    }
}
