#include <iostream>
using namespace std;

int main()
{
    char letter;

    cin >> letter;

    switch(letter)
    {
        //Char    ASCI Dec Code
        case 'A':    //65
        case 'a':    //97
        case 'E':    //69
        case 'e':   //101
        case 'I':    //73
        case 'i':   //105
        case 'O':    //79
        case 'o':   //111
        case 'U':    //85
        case 'u':   //117
            cout << "Vowel";
            break;
        default:
            cout << "Consonant";
            break;
    }
    
    return 0;
}