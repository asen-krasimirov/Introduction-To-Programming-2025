#include <iostream>

int main() {
	float a = 0;
	float b = 0;

	std::cout << "Please enter the length of the first side: ";
	std::cin >> a;
	std::cout << "Please enter the length of the second side: ";
	std::cin >> b;

	std::cout << "Perimeter: " << 2 * a + 2 * b << std::endl;
	std::cout << "Area: " << a * b << std::endl;
}