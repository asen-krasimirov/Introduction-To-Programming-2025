#include <iostream>

int main() {
	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	int temp = a;
	a = b;
	b = temp;

	std::cout << "Values after switching with an additional variable: " << a << ", " << b << std::endl;

	a = a + b;
	b = a - b;
	a = a - b;

	std::cout << "Values after switching without an additional variable: " << a << ", " << b << std::endl;
}