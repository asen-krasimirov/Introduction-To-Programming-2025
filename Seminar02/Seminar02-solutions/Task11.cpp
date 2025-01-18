#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three digits: ";
    cin >> a >> b >> c;

    if (a < b) swap(a, b);
    if (a < c) swap(a, c);
    if (b < c) swap(b, c);

    int largest = a * 100 + b * 10 + c;
    cout << "Largest number: " << largest << endl;

    return 0;
}
