#include <iostream>
using namespace std;

int main() {
    int day, month;
    cout << "Date (day month): ";
    cin >> day >> month;

    bool isInvalid = (day < 1 || month < 1 || month > 12 || day > 31) ||
                     ((month == 2 && day > 28) || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30));
    if (isInvalid) {
        cout << "Invalid date!" << endl;
        return 0;
    }

    day++;
    if ((month == 2 && day > 28) || 
        ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) || 
        (day > 31)) {
        day = 1;
        month++;
        if (month > 12) month = 1;
    }

    cout << "Next date: " << day << " " << month << endl;

    return 0;
}
