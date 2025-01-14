#include <iostream>
using namespace std;

void printBinary(int num) {
    for (int i = 31; i >= 0; i--) {
        cout << ((num >> i) & 1); 
    }
    cout << endl;
}

int main() {
    int num;
    cin >> num;

    printBinary(num);

    return 0;
}
