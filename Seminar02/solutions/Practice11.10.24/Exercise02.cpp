#include <iostream>
using namespace std;
int main()
{
    char symbol;
    cin >> symbol;
    if (symbol >= 'A' && symbol <='z')
    {
        cout << "The symbol is a latin letter!\n";
        switch (symbol)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': cout << "The letter is a vowel."; break;
        default: cout << "The letter is a consonant."; break;
        }
    }
    else cout << "The symbol is not a latin letter!";
}
