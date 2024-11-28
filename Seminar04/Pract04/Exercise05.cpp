#include <iostream>
using namespace std;
void print(char s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << s;
    }
}
int main()
{
    int n;
    cin >> n;
    while (n < 0)
    {
        cout << "Enter a positive N!" << endl;
        cin >> n;
    }
    char s;
    cin >> s;
    print(s, n);
}
