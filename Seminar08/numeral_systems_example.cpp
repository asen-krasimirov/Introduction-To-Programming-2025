#include <iostream>
#include <cstring>

using namespace std;


// 1   0   1   1   0   1   0   1
// 2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0

long long base_to_decimal_manual(const char number[], int base) {
    long long result = 0;
    long long power = 1;
    int len = strlen(number);

    for (int i = len - 1; i >= 0; --i) {
        char digit = number[i];
        int value;

        if (digit >= '0' && digit <= '9') {
            value = digit - '0';
        }
        else if (digit >= 'A' && digit <= 'Z') {
            value = digit - 'A' + 10;
        }
        else {
            cout << "Invalid character in number." << endl;
            return -1;
        }

        if (value >= base) {
            cout << "Digit out of range for base." << endl;
            return -1;
        }

        result += value * power;
        power *= base;
    }

    return result;
}

// 178 / 2 = 89 /2 = 44 / 2 = 22 / 2 = 11 / 2 = 5 / 2 = 2 / 2 = 1 / 2 = 0
// 0         1       0        0        1        1       0       1
// -> 1011 0010

void decimal_to_base_manual(long long number, int base, char result[]) {
    if (number == 0) {
        result[0] = '0';
        result[1] = '\0';
        return;
    }

    char buffer[65];
    int index = 0;
    bool is_negative = number < 0;

    if (is_negative) {
        number = -number;
    }

    while (number > 0) {
        int remainder = number % base;
        buffer[index++] = (remainder < 10) ? ('0' + remainder) : ('A' + remainder - 10);
        number /= base;
    }

    if (is_negative) {
        buffer[index++] = '-';
    }

    for (int i = 0; i < index; ++i) {
        result[i] = buffer[index - i - 1];
    }
    result[index] = '\0';
}

void calculate() {
    char operand1[65], operand2[65];
    int base1, base2, output_base;
    char operation;

    cout << "Enter first operand and its base (e.g., 10101101 2): ";
    cin >> operand1 >> base1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second operand and its base (e.g., 75383 9): ";
    cin >> operand2 >> base2;

    cout << "Enter output base: ";
    cin >> output_base;

    long long decimal_operand1 = base_to_decimal_manual(operand1, base1);
    long long decimal_operand2 = base_to_decimal_manual(operand2, base2);

    if (decimal_operand1 == -1) {
        return;
    } 

    if (decimal_operand2 == -1) {
        return;
    }

    long long result;

    switch (operation) {
    case '+':
        result = decimal_operand1 + decimal_operand2;
        break;
    case '-':
        result = decimal_operand1 - decimal_operand2;
        break;
    case '*':
        result = decimal_operand1 * decimal_operand2;
        break;
    case '/':
        if (decimal_operand2 == 0) {
            cout << "Division by zero is not allowed.";
            return;
        }

        result = decimal_operand1 / decimal_operand2;
  
        break;
    default:
        cout << "Error: Invalid operator." << endl;
        return;
    }

    char output[65];
        
    decimal_to_base_manual(result, output_base, output);
   
    cout << "Result: " << output << " in base " << output_base << endl;
}

int main() {
    calculate();
    return 0;
}
