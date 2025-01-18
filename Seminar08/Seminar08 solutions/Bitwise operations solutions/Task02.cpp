#include <iostream>
using namespace std;

int extractLastKBits(int n, int k) {
    int mask = (1 << k) - 1; 
    return n & mask; 
}

int main() {
    int n, k;
    cin >> n >> k; 

    cout << extractLastKBits(n, k) << endl; 

    return 0;
}
