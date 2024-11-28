#include <iostream>
using namespace std;
int lengthNum(int n)
{
    if (n == 0) return 1;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int kDigitFinder(int n, int k)
{
    int nLength = lengthNum(n);
    for (int i = 1; i<=nLength-k; i++)
    {
        n = n / 10;
    }
    return n% 10;
}
int main()
{
    int n, k;
    cin >> n >> k;
    while (k <= 0 || lengthNum(n)<k)
    {
        cout << "Incorrect input. Try again." << endl;
        cin >> n >> k;
    }
    cout<<kDigitFinder(n, k);
}
