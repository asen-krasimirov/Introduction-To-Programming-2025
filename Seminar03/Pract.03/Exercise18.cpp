#include <iostream>
using namespace std;
int main()
{
    int k, n, m,copy;
    bool isSpecial = 1;
    cin >> k >> n >> m;
    for (int i = n; i <=m; i++)
    {
        copy = i;
        while (copy != 0)
        {
            int digit = copy % 10;
            if (digit != 0)
            {
                if (k % (copy % 10) != 0) isSpecial = 0;
            }
            else isSpecial = 0;
            copy = copy / 10;
        }
        if (isSpecial) cout << i << " ";
        isSpecial = 1;
    }
}
