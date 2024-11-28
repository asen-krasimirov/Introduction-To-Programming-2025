#include <iostream>
using namespace std;
void checkSymbol(char s)
{
    if (s >= 'a' && s <= 'z' || s >= 'A' && s <= 'Z')
    {
        cout << "The symbol is a letter."<<endl;
    }
    else cout << "The symbol is not a letter."<<endl;
}
void isCapitalLetter(char s)
{
    if (s >= 'A' && s<='Z')
    {
        cout << "The symbol is a capital letter.";
    }
}
int main()
{
    char s;
    cin >> s;
    checkSymbol(s);
    isCapitalLetter(s);
}
