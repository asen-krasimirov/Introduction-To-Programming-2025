#include <iostream>
using namespace std;


int sum(int a,int b)
{
    return a+b;
}

int subtract(int a,int b)
{
    return a-b;
}

int multiply(int a,int b)
{
    return a*b;
}

int divide(int a,int b)
{
    if(b!=0)
    {
        return a/b;
    }
    cout << "Arithmetic Error: Cannot devide by 0\n";
    return 0;
}

int remainder(int a,int b)
{
    if(b!=0)
    {
        return a%b;
    }
    cout << "Arithmetic Error: Cannot devide by 0\n";
    return 0;
}


int calculate(int a,int b)
{
    return sum(a,b);
}

int calculate(int a,int b, char action)
{
    //All arithmetic operations could be defined within the function
    //But it looks more clear when they're composite
    switch(action)
    {
        case '+':
            return sum(a,b);
        case '-':
            return subtract(a,b);
        case '*':
            return multiply(a,b);
        case '/':
            return divide(a,b);
        case '%':
            return remainder(a,b);
        default:
            cout << "Error: Invalid symbol was entered\n";
            return 0;
    }
}


int main()
{
    int a, b;
    char action_row[2];
    char action;

    cout << "Enter an operation [+-*/%] (DEFAULT = +): ";
    //I am not sure of how the user needs to not enter a symbol for the default case
    //This isn't studied, but it is a way to get around the issue
    cin.getline(action_row,2);
    action = action_row[0];

    cout << "Enter 1-st number: ";
    cin >> a;

    cout << "Enter 2-nd number: ";
    cin >> b;

    int result = (action != 0 ? calculate(a,b,action) : calculate(a,b));

    cout << "Result: " << result;

    return 0;
}