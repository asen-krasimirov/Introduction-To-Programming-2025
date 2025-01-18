#include <iostream>
using namespace std;
int main()
{
    /*int num;
    cin >> num;
    int mask = 1;
    int count = 0;
    while (!(num & mask))
    {
        count++;
        mask = mask << 1;
    }
    int help = 1;
    for (int i = 0; i < count; i++)
    {
        help *= 2;
    }
    cout<<(num - help);*/

    int input;
    cin >> input;
    int mask = 1;
    while (mask)
    {
        if ((input & mask))
        {
            input &= ~mask;
            break;
        }
        mask = mask << 1;
    }

}
