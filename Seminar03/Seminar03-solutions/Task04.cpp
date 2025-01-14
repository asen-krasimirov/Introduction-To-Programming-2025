#include <iostream>
using namespace std;

int main() {
    long long N;
    cout << "Enter a number: ";
    cin >> N;

    int sum = 0;
    do {
        sum = 0;
        while (N > 0) {
            sum += N % 10;
            N /= 10;
        }
        N = sum;
    } while (sum >= 10);

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
