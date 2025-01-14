#include <iostream>
using namespace std;

bool isBinarySubstring(int n, int k) {
    while (n >= k) {
        if ((n & k) == k) {
            return true; 
        }
        n >>= 1; 
    }
    return false; 
}

int main() {
    int n, k;
    cin >> n >> k; 

    cout << (isBinarySubstring(n, k) ? "true" : "false") << endl;

    return 0;
}
