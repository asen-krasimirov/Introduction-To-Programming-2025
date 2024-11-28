#include <iostream>
using namespace std;
int nok(int min, int secondNum, int thirdNum)
{
    int temp = min;
    do
    {
        if (min % secondNum == 0 && min % thirdNum == 0) return min;
        else min = min + temp;
    } 
    while (true);
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    while (a == 0 || b == 0 || c == 0)
    {
        cout << "Incorrect input!";
        cin >> a >> b >> c;
    }
    int answer;
    if (a < b || a < c) answer = nok(a, b, c);
    else if (b < c || b < a) answer = nok(b, a, c);
    else answer = nok(c, a, b);
    cout << answer << endl;
}
