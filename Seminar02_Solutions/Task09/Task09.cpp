#include <iostream>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;

    std::cin >> a >> b >> c;

    if (a <= b && a <= c) {
        if (b <= c) {
            std::cout << a << " " << b << " " << c << std::endl;
        }
        else {
            std::cout << a << " " << c << " " << b << std::endl;
        }
    }
    else if (b <= a && b <= c) {
        if (a <= c) {
            std::cout << b << " " << a << " " << c << std::endl;
        }
        else {
            std::cout << b << " " << c << " " << a << std::endl;
        }
    }
    else {
        if (a <= b) {
            std::cout << c << " " << a << " " << b << std::endl;
        }
        else {
            std::cout << c << " " << b << " " << a << std::endl;
        }
    }
}