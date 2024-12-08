#include <iostream>
using namespace std;

int askUser(int from,int to)
{
    int input;
    
    while(true)
    {
        cin >> input;
        if(input<from || input>to)
        {
            break;
        }
    }

    return input;
}

int main()
{
    int a,b;
    
    cin >> a >> b;

    if(a>b)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << askUser(a,b) << " -> Ending program";

    return 0;
}