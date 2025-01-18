#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    if (n < 1) {
        cout << "Invalid input! n must be a natural number." << endl;
        return 0;
    }

    for (int x = 1; x < n; x++) {
        int y = n - x;
        cout << "x = " << x << ", y = " << y << endl;
    }

    return 0;
}
