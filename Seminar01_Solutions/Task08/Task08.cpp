#include <iostream>

int main() {
	const double PI = 3.14159265;

	float r = 0;
	std::cout << "Radius: ";
	std::cin >> r;

	std::cout << "Circumference: " << 2 * PI * r << std::endl;
	std::cout << "Area: " << PI * r * r << std::endl;
}