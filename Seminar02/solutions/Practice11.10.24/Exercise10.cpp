#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char action;
    cin >> a >> action >> b;
    switch (action)
    {
    case '+':cout << a + b; break;
    case '-':cout << a - b; break;
    case '*':cout << a * b; break;
    case '/':
        if (b == 0)cout << "Can't divide by zero!";
        else cout << a / b;
        break;
    }
}
