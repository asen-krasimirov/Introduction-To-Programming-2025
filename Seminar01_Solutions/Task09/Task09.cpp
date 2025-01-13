#include <iostream>
#include <math.h>

int main() {
	float a = 0.0f;
	float b = 0.0f;
	float c = 0.0f;

	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;


	float D = b * b - 4 * a * c;

	float x1 = (-b - sqrt(D)) / 2 * a;
	float x2 = (-b + sqrt(D)) / 2 * a;

	std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
}