#include <iostream>
using namespace std;

int main() {
    char S;
    cin >> S; 

    if (S >= 'A' && S <= 'Z') {
        cout << S << " is a capital letter." << endl;
    } else {
        cout << S << " is not a capital letter." << endl;
    }

    if ((S >= 'A' && S <= 'Z') || (S >= 'a' && S <= 'z')) {
        cout << S << " is a letter." << endl;
    } else {
        cout << S << " is not a letter." << endl;
    }

    return 0;
}
