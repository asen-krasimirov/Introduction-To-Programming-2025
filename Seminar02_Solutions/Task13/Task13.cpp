#include <iostream>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;

	int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

	std::cout << max << std::endl;
}