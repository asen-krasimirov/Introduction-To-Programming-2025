#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    while (n)
    {
        if ((n&k)==k)
        {
            cout << "true";
            return 0;
        }
        else n = n>>1;
    }
    cout << "false";
}
