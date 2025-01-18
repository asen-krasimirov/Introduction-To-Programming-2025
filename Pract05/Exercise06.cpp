#include <iostream>
using namespace std;
long int raisePower(int a, int b)
{
    if (b < 0) return 1;
    long int result = a;
    for (int i = 1; i <=b; i++)
    {
        result = result * a;
    }
    return result;
}
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
int kDigitFinder(long long int n, int k)
{
    int nLength = lengthNum(n);
    for (int i = 1; i <= (nLength-k); i++)
    {
        n = n / 10;
    }
    return n % 10;
}
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void changeKdigit(long int& n, long int& m, int k)
{
    int lengthN = lengthNum(n);
    int lengthM = lengthNum(m);
    int kDigitN = kDigitFinder(n, k);
    int kDigitM = kDigitFinder(m, k);
    swap(kDigitN, kDigitM);
    long int newN, newM;
    newN = n / raisePower(10, (lengthN - k));
    newM = m / raisePower(10, (lengthM - k));
    newN = newN * 10 + kDigitN;
    newM = newM * 10 + kDigitM;
    newN = newN * (raisePower(10, (lengthN - k-1))) + n % (raisePower(10, (lengthN - k-1)));
    newM = newM * (raisePower(10, (lengthM - k-1))) + m % (raisePower(10, (lengthM - k-1)));
    n = newN;
    m = newM;
}
int main()
{
    long int n, m, k;
    cin >> n >> m >> k;
    while (k > lengthNum(n) || k > lengthNum(m))
    {
        cout << "Wrong input!" << endl;
        cin >> n >> m >> k;
    }
    changeKdigit(n, m, k);
    cout << n << endl << m;
}
