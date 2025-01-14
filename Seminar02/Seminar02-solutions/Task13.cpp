#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout << "Largest number: " << largest << endl;

    return 0;
}
