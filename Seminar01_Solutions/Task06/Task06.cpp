#include <iostream>

int main() {
	int a = 0;
	int b = 0;

	std::cout << "Dividend: ";
	std::cin >> a;
	std::cout << "Divisor: ";
	std::cin >> b;

	std::cout << "The quotient of the division is : " << a / b << std::endl;
	std::cout << "The remainder of the division is : " << a % b << std::endl;
	
}