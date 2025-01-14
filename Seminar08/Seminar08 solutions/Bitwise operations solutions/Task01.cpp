#include <iostream>
using namespace std;

int RightmostOne(int n) {
    if (n == 0) {
        
        return 0;
    }
    return n ^ (n & -n);
}

int main() {
    int number;
    cin >> number;
    int result = RightmostOne(number);
    cout << "Най-дясна единица: " << result << endl;

    return 0;
}
