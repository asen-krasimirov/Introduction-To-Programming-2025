#include <iostream>

int main() {
	float bgn = 0.0f;
	std::cin >> bgn;

	float usd = bgn * 0.52;
	float eur = bgn * 0.51;

	std::cout << "USD: " << usd << std::endl;
	std::cout << "EUR: " << eur << std::endl;
}