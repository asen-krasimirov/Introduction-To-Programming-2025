#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Arabic numeral: ";
    cin >> number;

    if (number < 1 || number > 9) {
        cout << "Invalid input! Enter a number between 1 and 9." << endl;
    } else {
        cout << "Roman numerals: ";
        if (number == 9) cout << "IX";
        else if (number >= 5) {
            cout << "V";
            for (int i = 0; i < number - 5; i++) cout << "I";
        } else if (number == 4) cout << "IV";
        else {
            for (int i = 0; i < number; i++) cout << "I";
        }
        cout << endl;
    }

    return 0;
}
