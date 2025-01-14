#include <iostream>
#include <cmath>
using namespace std;

void swapDigits(int &n, int &m, int k) {
    int nDigit = (n / (int)pow(10, k - 1)) % 10;
    
    int mDigit = (m / (int)pow(10, k - 1)) % 10;
    
    n = n - nDigit * pow(10, k - 1) + mDigit * pow(10, k - 1);
    m = m - mDigit * pow(10, k - 1) + nDigit * pow(10, k - 1);
}

int main() {
    int n, m, k;
    cin >> n >> m >> k; 

    swapDigits(n, m, k);

    cout << n << " " << m << endl;

    return 0;
}
