#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int sum = 0;

    for (int i = 100; i <= 999; i++) {
        int digitSum = (i / 100) + ((i / 10) % 10) + (i % 10);

        if (digitSum >= 10 && digitSum <= 99 && isPrime(digitSum)) {
            sum += i;
        }
    }

    cout << "Sum of numbers: " << sum << endl;

    return 0;
}
