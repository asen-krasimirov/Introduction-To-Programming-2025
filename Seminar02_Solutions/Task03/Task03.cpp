#include <iostream>

int main() {
	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	int max = a > b ? a : b;

	std::cout << "Bigger: " << max;
}