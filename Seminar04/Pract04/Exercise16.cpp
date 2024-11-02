#include <iostream>
using namespace std;
int findGCD(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a > b) a = a % b;
        else b = b % a;
    }
    return a + b;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    while (a < 1 || b < 1 || c < 1 || d < 1)
    {
        cout << "Enter only natural numbers."<<endl;
        cin >> a >> b >> c >> d;
    
    } 
    int result1 = findGCD(a, b);
    int result2 = findGCD(c, d);   
    cout << findGCD(result1, result2);
}
