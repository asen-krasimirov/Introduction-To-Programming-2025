#include <iostream>
using namespace std;

char toUpper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A'); 
    }
    return c; 
}

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A'); 
    }
    return c; 
}

int main() {
    char c;
    cin >> c; 

    cout << toUpper(c) << endl;
    cout << toLower(c) << endl;

    return 0;
}
