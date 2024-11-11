#include <iostream>
using namespace std;

char to_lower(char S)
{
    return ((S>='A' && S<='Z')?(S+32):S);
}

char to_upper(char S)
{
    return ((S>='a' && S<='z')?(S-32):S);
}


int main()
{
    char a,b;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    if(
        !((a>='a' && a<='z') || (a>='A' && a<='Z')) ||
        !((b>='a' && b<='z') || (b>='A' && b<='Z'))
    )
    {
        cout << "Invalid input";
        return 0;
    }

        

    cout << "to_lower(a): " << to_lower(a) << endl << "to_upper(b): " << to_upper(b);

    return 0;
}