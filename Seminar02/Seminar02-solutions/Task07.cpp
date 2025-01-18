#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Uppercase: " << char(ch - ('a' - 'A')) << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "Lowercase: " << char(ch + ('a' - 'A')) << endl;
    } else {
        cout << "Invalid character" << endl;
    }

    return 0;
}
