#include <iostream>
using namespace std;

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int num;
    cin >> num; 
    cout << (isEven(num) ? "Even" : "Odd") << endl; 
    return 0;
}
