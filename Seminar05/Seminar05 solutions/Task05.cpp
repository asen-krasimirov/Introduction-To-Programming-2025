#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplifyFraction(int &numerator, int &denominator) {
    int divisor = gcd(numerator, denominator); 
    numerator /= divisor; 
    denominator /= divisor; 
}

int main() {
    int numerator, denominator;
    cin >> numerator >> denominator; 

    simplifyFraction(numerator, denominator);

    cout << numerator << " " << denominator << endl;

    return 0;
}
