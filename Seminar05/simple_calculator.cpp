#include <iostream>

using namespace std;

int get_user_choice() {
    int choice = 0;

    cout << "Simple Calculator" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";

    cin >> choice;

    return choice;
}

void get_numbers(double& num1, double& num2) {
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

void calculate_numbers(int choice, double num1, double num2) {
    double result;

    switch (choice) {
        case 1:
            result = add(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = subtract(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = multiply(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 4:
            result = divide(num1, num2);
            if (num2 != 0) {
                cout << "Result: " << result << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please select an option from 1 to 5." << endl;
            break;
    }
}

void calculator() {
    double num1, num2;
    int choice;

    while (true) {
        choice = get_user_choice(); // 1...5

        if (choice == 5) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        get_numbers(num1, num2); // number1 and number2

        calculate_numbers(choice, num1, num2);
    }
}

int main() {
    
    calculator();

    return 0;
}
