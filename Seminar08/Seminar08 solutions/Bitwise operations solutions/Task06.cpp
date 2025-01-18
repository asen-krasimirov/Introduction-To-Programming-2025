#include <iostream>
using namespace std;

int extractBits(int x, int m, int n) {
    int mask = (1 << n) - 1; 
    return (x >> (m - 1)) & mask; 
}

int main() {
    int x, m, n;
    cin >> x >> m >> n; 

    cout << extractBits(x, m, n) << endl;

    return 0;
}
