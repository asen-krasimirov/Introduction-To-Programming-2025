#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the sides of a triangle: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Valid triangle" << endl;
    } else {
        cout << "Invalid triangle" << endl;
    }

    return 0;
}
