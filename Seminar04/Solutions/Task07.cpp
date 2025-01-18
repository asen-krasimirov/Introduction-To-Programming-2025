#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch; 

    if (ch >= 'A' && ch <= 'Z') {
        cout << ch + ('a' - 'A');
    }
    else if((ch >= 'a' && ch <= 'z')) {
        cout << ch - ('a' - 'A');
    }
    

    return 0;
}
