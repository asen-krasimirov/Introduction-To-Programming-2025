#include <iostream>
using namespace std;

int concat(int first, int second)
{
    int temp = 0;

    while(second != 0){
        temp*=10;
        temp+=second%10;
        second/=10;
    }

    while(temp != 0)
    {
        first*=10;
        first+=temp%10;
        temp/=10;
    }

    return first;
}

int main()
{
    int a,b;
    int lowerLimit = 0; // If the second one is negative the concatenation would fail or it would return a string which isn't our goal

    cin >> a >> b;

    if(a<=lowerLimit || b<=lowerLimit)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << "Concatenation of " << a << " and " << b << " : " << concat(a,b);

    return 0;
}