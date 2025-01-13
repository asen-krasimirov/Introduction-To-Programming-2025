#include <iostream>

int main() {
	int a = 0;
	int p = 0;
	int b = 0;

	std::cout << "Apples: ";
	std::cin >> a;
	std::cout << "Pears: ";
	std::cin >> p;
	std::cout << "Bananas: ";
	std::cin >> b;

	std::cout << "Pesho, don't forget to buy " << a << " apples, " << p << " pears and " << b << " bananas!" << std::endl;
}