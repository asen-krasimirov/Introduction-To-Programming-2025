#include <iostream>
using namespace std;

// 1. Функция, която проверява дали число е четно
bool is_even(int n) {
    return (n & 1) == 0;
}

// 2. Функция, която повдига 2 на степен k
int power_of_two(int k) {
    return 1 << k;
}

// 3. Изчистване на бит (да стане 0)
int clear_bit(int n, int i) {
    return n & ~(1 << i);
}

// 4. Вдигане на бит (да стане 1)
int set_bit(int n, int i) {
    return n | (1 << i);
}

// 5. Връщане на стойност на бит
bool get_bit(int n, int i) {
    return (n & (1 << i)) != 0;
}

// 6. Слагане на подадена стойност на бит
int set_bit_to_value(int n, int i, bool value) {
    if (value) {
        // return n | (1 << i);  // Вдигаме битa до 1
        return set_bit(n, i);
    } else {
        // return n & ~(1 << i);  // Изчистваме битa до 0
        return clear_bit(n, i);
    }
}

// 7. Toggle на бит
int toggle_bit(int n, int i) {
    return n ^ (1 << i);
}

int main() {
    int num = 42;  // Примерно число
    int bit_position = 3;  // Примерна позиция на бит

    cout << "Number is even: " << is_even(num) << endl;
    cout << "2 raised to the power of 3: " << power_of_two(3) << endl;
    cout << "Number after clearing bit 3: " << clear_bit(num, bit_position) << endl;
    cout << "Number after setting bit 3: " << set_bit(num, bit_position) << endl;
    cout << "Value of bit 3: " << get_bit(num, bit_position) << endl;
    cout << "Number after setting bit 3 to 0: " << set_bit_to_value(num, bit_position, false) << endl;
    cout << "Number after toggling bit 3: " << toggle_bit(num, bit_position) << endl;

    return 0;
}
