#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;

    int total = m * n;
    for (int i = 1; i <= total; i++) {
        cout << i << " ";
        if (i % n == 0) {
            cout << endl;
        }
    }

    return 0;
}
