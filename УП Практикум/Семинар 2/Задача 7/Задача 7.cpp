#include <iostream>

int main()
{
    char letter;
    std::cin >> letter;
    int letterASCIICode = (int)letter;

    if (letterASCIICode >= 65 && letterASCIICode <= 90)
    {
        std::cout << ((char)(letterASCIICode + 32));
    }
    else if (letterASCIICode >= 97 && letterASCIICode <= 122)
    {
        std::cout << ((char)(letterASCIICode - 32));
    }
    else
    {
        std::cout << "Invalid character!";
    }
}