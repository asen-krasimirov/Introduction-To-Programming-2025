#include <iostream>
using namespace std;
void toUpper(char& a)
{
    if (a>='a'&& a<='z') 
        a = a - ('a' - 'A');
}
void toLower(char& a)
{
    if (a>='A'&& a<='Z') 
        a = a + ('a' - 'A');
}
int main()
{
    char a;
    cin>>a;
    while ((a < 'A' || a>'Z') && (a < 'a' || a>'z'))
    {
        cout << "The symbol is not a letter." << endl;
        cin >> a;
    }
    toUpper(a);
    cout << "To upper: " << a<<endl;
    toLower(a);
    cout << "To lower: " << a<<endl;
}
