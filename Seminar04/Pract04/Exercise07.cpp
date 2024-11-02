#include <iostream>
using namespace std;
char toLower(char s)
{
    if (s >= 'a' && s <= 'z') return s;
    else s = s + ('a' - 'A');
    return s;
}
char toUpper(char s)
{
    if (s >= 'A' && s <= 'Z') return s;
    else s = s - ('a' - 'A');
    return s;
}
int main()
{
    char s;
    cin >> s;
    while (!(s >= 'a' && s <= 'z' || s >= 'A' && s <= 'Z'))
    {
        cout << "Incorrect input. Try again!" << endl;
        cin >> s;
    }
    cout << s<<": "<< toLower(s)<<" "<< toUpper(s);
}
