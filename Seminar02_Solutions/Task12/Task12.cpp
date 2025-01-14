#include <iostream>

int main() {
    int month = 0;
    int day = 0;

    std::cout << "Date: ";
    std::cin >> day >> month;

    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10:
        if (day == 31) {
            day = 1;
            month++;
        }
        else {
            day++;
        }
        break;
    case 12:
        if (day == 31) {
            day = 1;
            month = 1;
        }
        else {
            day++;
        }
        break;
    case 4: case 6: case 9: case 11:
        if (day == 30) {
            day = 1;
            month++;
        }
        else {
            day++;
        }
        break;
    case 2:
        if (day == 28) {
            day = 1;
            month++;
        }
        else {
            day++;
        }
        break;
    }

    std::cout << "Next date: " << day << " " << month << std::endl;
}