#include <iostream>
using namespace std;


int octalToTernary(int octal) {
 
    int decimal = 0, base = 1;
    while (octal > 0) {
        decimal += (octal % 10) * base;
        octal /= 10;
        base *= 8; 
    }

    int ternary = 0, power = 1;
    while (decimal > 0) {
        ternary += (decimal % 3) * power;
        decimal /= 3;
        power *= 10; 
    }

    return ternary;
}

int main() {
    int octal;
    cin >> octal; 

    cout << octalToTernary(octal) << endl;

    return 0;
}
