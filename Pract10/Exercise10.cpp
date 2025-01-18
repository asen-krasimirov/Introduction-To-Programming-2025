#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int count = 0;
    while (a)
    {
        if (a & 1) count++;
        a = a >> 1;
    }
    cout << count;
}
