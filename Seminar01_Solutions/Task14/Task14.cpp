#include <iostream>

int main() {
	int n = 0;
	std::cin >> n;

	int sum = (n * (n + 1)) / 2;

	std::cout << "Sum: " << sum;
}