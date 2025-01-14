#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer: ";
    cin >> N;

    if (N < 0) {
        cout << "Invalid input! Factorial is defined for non-negative integers only." << endl;
        return 0;
    }

    unsigned long long factorial = 1;

    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }

    cout << "Factorial: " << factorial << endl;

    return 0;
}
