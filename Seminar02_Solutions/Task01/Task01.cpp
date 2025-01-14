#include <iostream>

int main() {
	int year = 0;

	std::cout << "Year: ";
	std::cin >> year;

	if (year % 100 == 0 && year % 400 != 0) {
		std::cout << "Not leap." << std::endl;
	}
	else if (year % 4 == 0) {
		std::cout << "Leap." << std::endl;
	}
	else {
		std::cout << "Not leap.";
	}
}