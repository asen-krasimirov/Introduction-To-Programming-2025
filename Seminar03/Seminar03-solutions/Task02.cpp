#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Start: ";
    cin >> n;
    cout << "End: ";
    cin >> m;

    if (n < 0 || m < 0 || n > 255 || m > 255 || n > m) {
        cout << "Invalid codes!" << endl;
        return 0;
    }

    for (int i = n; i <= m; i++) {
        cout << i << " --> " << static_cast<char>(i) << endl;
    }

    return 0;
}
