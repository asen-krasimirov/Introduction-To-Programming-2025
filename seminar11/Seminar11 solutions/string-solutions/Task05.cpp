#include <iostream>
using namespace std;

void replaceOddEvenOccurrences(char* str, char x, char a, char b) {
    int count = 0; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == x) {
            count++;
            if (count % 2 != 0) {
                str[i] = a; 
            } else {
                str[i] = b; 
            }
        }
    }
}

int main() {
    char str[1024];
    char x, a, b;

    cin.getline(str, 1024);
    cin >> x >> a >> b;

    replaceOddEvenOccurrences(str, x, a, b);

    cout << str << endl;

    return 0;
}
