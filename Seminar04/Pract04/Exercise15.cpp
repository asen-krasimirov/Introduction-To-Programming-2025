#include <iostream>
using namespace std;
int calculate(int a, int b, char action)
{
    switch (action)
    {
    case'+':return a + b; break;
    case'-':return a - b; break;
    case'*':return a * b; break;
    case'/':return a / b; break;
    case'%':return a % b; break;
    default:return a + b; break;
    }
}
int main()
{
    int a, b;
    char action;
    cin >> a >> b;
    while (b == 0)
    {
        cout << "B cannot be zero."<<endl;
        cin >> b;
    }
    cin >> action;
    cout << calculate(a, b, action);
}
