#include <iostream>

int main() {
	char ch = 0;

	std::cin >> ch;

	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
		if (ch == 'a' || ch == 'o' || ch == 'u' || ch == 'e' || ch == 'i') {
			std::cout << "Vowel." << std::endl;
		}
		else if (ch == 'A' || ch == 'O' || ch == 'U' || ch == 'E' || ch == 'I') {
			std::cout << "Vowel." << std::endl;
		}
		else {
			std::cout << "Consnant." << std::endl;
		}
	}
	else {
		std::cout << "Not a letter." << std::endl;
	}
}