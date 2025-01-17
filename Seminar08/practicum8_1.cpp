#include <iostream>

using namespace std;

long long pow(int num, int pow) 
{
    long long result = 1;
    while (pow > 0) 
    {
        result *= num;
        pow--;
    }
    return result;
}

int length(char* str) 
{
    int len = 0;
    while (*str != '\0') 
    {
        len++;
        str++;
    }
    return len;
}

long long toDecimal(char* num, int base) 
{
    long long result = 0;
    int powerIndex = 0;
    int digit;
    int len = length(num) - 1;

    for (int i = len; i >= 0; i--) 
    {
        if (num[i] >= 'A' && num[i] <= 'F') 
        {
            digit = num[i] - 'A' + 10;
        }
        else
        {
            digit = num[i] - '0';
        }
        result += pow(base, powerIndex++) * digit;
    }
    return result;
}

int countOnesInBinary(int num) 
{
    int count = 0;
    while (num != 0) 
    {
        if (num % 2 == 1)
        {
            count++;
        }
        num >>= 1; 
    }
    return count;
}

void fromDecimal(int num, int base) 
{
    char buffer[32];
    int index = 0;

    while (num != 0) 
    {
        char digit = (num % base < 10) ? '0' + num % base : 'A' + (num % base - 10);
        buffer[index++] = digit;
        num /= base;
    }

    // Отпечатване на резултата в обратен ред
    for (int i = index - 1; i >= 0; i--) {
        cout << buffer[i];
    }
}

void fromThreeToEight(char num[])
{
    int decimal = toDecimal(num, 3);
    fromDecimal(decimal, 8);
    cout << endl;
}

void fromEightToThree(char num[])
{
    int decimal = toDecimal(num, 8);
    fromDecimal(decimal, 3);
    cout << endl;
}

void showBinary(int num) 
{
    for (int i = 31; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main() 
{
    char num1[] = "102"; 
    char num2[] = "25"; 

    fromThreeToEight(num1);
    fromEightToThree(num2);

    int n = 29;
    cout << n << ": " << countOnesInBinary(n) << endl;
    showBinary(n);
}
