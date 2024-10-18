#include <iostream>
using namespace std;

int main()
{
    double a,b;

    char operation;

    cin >> a >> operation >> b;

    switch(operation){
        case '+':
            cout << (a + b);
            break;
        case '-':
            cout << (a - b);
            break;
        case '*':
            cout << (a * b);
            break;
        case '/':
            if(b == 0)
                cout << "Cannot devide by 0";
            else
                cout << (a/b);
            break;
        default:
            cout << "Invalid operation";
            break;
    }
    
    return 0;
}