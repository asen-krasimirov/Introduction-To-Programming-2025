#include <iostream>

int main() {
	char ch = 0;
	std::cin >> ch;

	if (ch >= 'a' && ch <= 'z') {
		std::cout << (char)(ch - ' ') << std::endl;
	}
	else if (ch >= 'A' && ch <= 'Z') {
		std::cout << (char)(ch + ' ') << std::endl;
	}
	else {
		std::cout << "Invalid character" << std::endl;
	}
}