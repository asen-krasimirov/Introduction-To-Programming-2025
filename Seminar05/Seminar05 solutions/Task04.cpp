#include <iostream>
using namespace std;

void validateStudent(int &age, int &facultyNumber) {
    if (age < 15) age = 15;
    if (age > 100) age = 100;

    if (facultyNumber < 10000) facultyNumber = 10000;
    if (facultyNumber > 99999) facultyNumber = 99999;
}

int main() {
    int age, facultyNumber;
    cin >> age >> facultyNumber; 

    validateStudent(age, facultyNumber);

    cout << age << " " << facultyNumber << endl;

    return 0;
}
