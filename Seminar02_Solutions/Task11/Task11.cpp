#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    std::cin >> a >> b >> c;

    int first = 0;
    int second = 0;
    int third = 0;

    if (a >= b && a >= c) {
        first = a;
        if (b >= c) {
            second = b;
            third = c;
        }
        else {
            second = c;
            third = b;
        }
    }
    else if (b >= a && b >= c) {
        first = b;
        if (a >= c) {
            second = a;
            third = c;
        }
        else {
            second = c;
            third = a;
        }
    }
    else {
        first = c;
        if (a >= b) {
            second = a;
            third = b;
        }
        else {
            second = b;
            third = a;
        }
    }

    int num = first * 100 + second * 10 + third;

    std::cout << num << std::endl;
}