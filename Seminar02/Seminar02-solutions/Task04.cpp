#include <iostream>
using namespace std;

int main() {
    int result;
    cout << "Result: ";
    cin >> result;

    if (result >= 90) {
        cout << "Grade: 6+" << endl;
    } else if (result >= 80) {
        cout << "Grade: 6" << endl;
    } else if (result >= 70) {
        cout << "Grade: 5" << endl;
    } else if (result >= 60) {
        cout << "Grade: 4" << endl;
    } else if (result >= 40) {
        cout << "Grade: 3" << endl;
    } else {
        cout << "Grade: 2" << endl;
    }

    return 0;
}
