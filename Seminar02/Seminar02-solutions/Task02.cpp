#include <iostream>
using namespace std;

int main() {
    char symbol;
    cout << "Enter a character: ";
    cin >> symbol;

    if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')) {
        bool isVowel = (symbol == 'A' || symbol == 'E' || symbol == 'I' || symbol == 'O' || symbol == 'U' ||
                        symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol == 'u');
        cout << "It's a letter. It's a " << (isVowel ? "vowel." : "consonant.") << endl;
    } else {
        cout << "It's not a letter." << endl;
    }

    return 0;
}
