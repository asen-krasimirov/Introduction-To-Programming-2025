#include <iostream>
using namespace std;
int lengthNum(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int concat(int first, int second)
{
    int concat = first;
    for (int i = 1; i <= lengthNum(second); i++)
    {
        concat = concat*10;
    }
    concat = concat+second;
    return concat;
}
int main()
{
    long int first, second;
    cin >> first >> second;
    while (first < 1 || second < 0)
    {
        cout << "Both numbers cannot be negative and the first cannot be equal to 0." << endl;
        cin >> first >> second;
    }
    cout << concat(first,second) << endl;
}
