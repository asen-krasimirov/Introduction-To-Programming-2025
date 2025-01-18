#include <iostream>
using namespace std;
int main()
{ //bonus
    long long int n;
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if(sum<10) cout << sum;
    else
    {
        n = sum;
        while (sum > 9)
        {
            n = sum;
            sum = 0;
            while (n != 0)
            {
                sum += n % 10;
                n /= 10;
            }
        }
        cout << sum;
    }
}
