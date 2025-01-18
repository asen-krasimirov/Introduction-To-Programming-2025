#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    int a = 0, b = 1;

    for (int i = 0; i < n; i++) {
        cout << a;
        if (i < n - 1) cout << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}
