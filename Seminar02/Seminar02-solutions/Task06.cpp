#include <iostream>
using namespace std;

int main() {
    int state;
    cout << "Enter the traffic light state (1: Red, 2: Yellow, 3: Green): ";
    cin >> state;

    switch (state) {
        case 1:
            cout << "Stop! Wait for green light." << endl;
            break;
        case 2:
            cout << "Get ready to go!" << endl;
            break;
        case 3:
            cout << "Go!" << endl;
            break;
        default:
            cout << "Invalid state!" << endl;
            break;
    }

    return 0;
}
