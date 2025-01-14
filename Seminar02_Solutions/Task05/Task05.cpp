#include <iostream>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;

	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;

	if (a + b > c && a + c > b && b + c > a) {
		std::cout << "Valid." << std::endl;
	}
	else {
		std::cout << "Not valid." << std::endl;
	}

}