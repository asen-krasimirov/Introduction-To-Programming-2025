//Да се напише функция, която приема число в триична бройна система и го връща в осмична без да използва масив.
#include <iostream>
using namespace std;

long long base_to_decimal(const char number[], int base)
{
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

void decimal_to_base(long long number, int base, char result[])
{
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

int main()
{
    int oct;
    char input[32], result[32];
    cout << "Въведи число в триична бройна с-ма: " << endl;
    cin.getline(input, 32);
  
    oct = base_to_decimal(input, 3); 
    decimal_to_base(oct, 8, result); 
    
}