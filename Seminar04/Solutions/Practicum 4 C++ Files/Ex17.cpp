#include <iostream>
using namespace std;

int pow(int a,int n)
{
    int result = 1;
    for(;n>0;n--)
        result*=a;
    return result;
}

int abs(int a)
{
    return ((a<0)?a*-1:a);
}


int findClosestPowerOf2(int a)
{
    int result = 2;
    int subtraction_before = a;
    int subtraction_after = a;

    for(int i=1;;i++)
    {
        subtraction_before = result - a;
        subtraction_after = pow(2,i) - a;

        if(abs(subtraction_before) < abs(subtraction_after))
        {
            break;
        }

        result = pow(2,i);
    }

    return result;
}

int userInput(int min,int max)
{
    int input;
    while(true)
    {
        cout << "Enter input: ";
        cin >> input;

        if(input < min || input > max)
        {
            cout << "Invalid input\nTry again:\n";
            continue;
        }

        break;
    }
    return input;
}

int main()
{
    int input = userInput(100,100000);

    cout << "Result: " << findClosestPowerOf2(input);

    return 0;
}