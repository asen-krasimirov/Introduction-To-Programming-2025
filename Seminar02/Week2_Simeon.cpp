

#include <iostream>
using namespace std;

int main()
{
    /*cout << "Exercise 1: \n";
    int year;
    cin >> year;
    if (year % 4 == 0) cout << "The year is visokosna!\n";
    else cout << "Godinata ne e visokosna!\n";*/
    
    /*cout << "Exersice 2: \n";
    char c;
    cin >> c;
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            cout << "The letter is vowel!\n";
        }
        else cout << "The letter is not vowel!\n";
    }
    else cout << "The char is not in the latin alphabet!\n";*/
    
    cout << "Exercise 3: \n";
    int a, b;
    cin >> a;
    cin >> b;
    string biggerNumber = (a > b) ? "a" : "b";
    cout << "The bigger number is : " << biggerNumber;
}

