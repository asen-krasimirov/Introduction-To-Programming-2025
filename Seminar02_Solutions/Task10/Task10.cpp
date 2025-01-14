#include <iostream>

int main() {
	float a = 0;
	float b = 0;
	char operation = 0;

	std::cin >> a >> operation >> b;

	switch (operation) {
	case '+':
		std::cout << a + b << std::endl;
		break;
	case '-':
		std::cout << a - b << std::endl;
		break;
	case '*':
		std::cout << a * b << std::endl;
		break;
	case '/':
		if (b == 0) {
			std::cout << "Invalid operation." << std::endl;
		}
		else {
			std::cout << a / b << std::endl;
		}
		break;
	default:
		std::cout << "Invalid operation." << std::endl;
	}
}