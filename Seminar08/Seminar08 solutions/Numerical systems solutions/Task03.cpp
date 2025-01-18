#include <iostream>
using namespace std;

void convertBase12ToBase13(int num) {
    int result[100]; 
    int index = 0;

    int decimal = 0;
    int base = 1;
    while (num > 0) {
        decimal += (num % 10) * base;
        num /= 10;
        base *= 12; 
    }

    if (decimal == 0) {
        result[index++] = 0; 
    } else {
        while (decimal > 0) {
            result[index++] = decimal % 13; 
            decimal /= 13;
        }
    }

    for (int i = index - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int num;
    cin >> num;

    convertBase12ToBase13(num);

    return 0;
}
