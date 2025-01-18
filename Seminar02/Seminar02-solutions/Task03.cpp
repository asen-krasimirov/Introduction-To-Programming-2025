#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two different numbers: ";
    cin >> a >> b;

    cout << "Larger number: " << (a > b ? a : b) << endl;

    return 0;
}
