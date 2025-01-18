#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    long long square = static_cast<long long>(N) * N;

    cout << "Reversed square: ";
    while (square > 0) {
        cout << square % 10;
        square /= 10;
    }
    cout << endl;

    return 0;
}
