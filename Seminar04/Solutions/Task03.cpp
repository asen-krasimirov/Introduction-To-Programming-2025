#include <iostream>
using namespace std;

bool isPositive(int num) {
    return num > 0;
}

bool isNegative(int num) {
    return num < 0;
}

int main() {
    int num;
    cin >> num; 

    if (isPositive(num)) {
        cout << "Positive" << endl;
    } else if (isNegative(num)) {
        cout << "Negative" << endl;
    } else {
        cout << "Zero" << endl; 
    }

    return 0;
}
