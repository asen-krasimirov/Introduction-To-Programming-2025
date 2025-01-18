#include <iostream>

int main()
{
    char letter;
    std::cin >> letter;
    int letterASCIICode = (int)letter;
    if (letterASCIICode >= 65 && letterASCIICode <= 90)
    {
        switch (letter)
        {
        case 'A':
        case 'E':
        case 'O':
        case 'I':
        case 'U':std::cout<<"Vowel"; break;
        default: std::cout << "Consonant"; break;
        }
    }
    else if (letterASCIICode >= 97 && letterASCIICode <= 122)
    {
        switch (letter)
        {
        case 'a':
        case 'e':
        case 'o':
        case 'i':
        case 'u':std::cout << "Vowel"; break;
        default: std::cout << "Consonant"; break;
        }
    }
    else
    {
        std::cout << "Not a latin letter!";
    }
    return 0;
}