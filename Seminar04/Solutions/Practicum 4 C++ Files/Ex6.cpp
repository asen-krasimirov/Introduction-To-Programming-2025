#include <iostream>
using namespace std;

bool checkSymbol(char S)
{
    if((S>='A' && S<='Z') || (S>='a' && S<='z'))
        return true;
    return false;
}

bool isCapitalLetter(char S)
{
    if(S>='A' && S<='Z')
        return true;
    return false;
}

int main()
{
    char a;

    cin >> a;

    cout << "checkSymbol: " << checkSymbol(a) << endl << "isCapitalLetter: " << isCapitalLetter(a);

    return 0;
}