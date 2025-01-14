#include <iostream>

int main() {
	int percent = 0;

	std::cin >> percent;

	if (percent >= 90) {
		std::cout << "6+" << std::endl;
	}
	else if (percent >= 80) {
		std::cout << "6" << std::endl;
	}
	else if (percent >= 70) {
		std::cout << "5" << std::endl;
	}
	else if (percent >= 60) {
		std::cout << "4" << std::endl;
	}
	else if (percent >= 40) {
		std::cout << "3" << std::endl;
	}
	else {
		std::cout << "2" << std::endl;
	}
}