#include <iostream>
#include <math.h>
#include <iomanip>

int main() {
	double x1 = 0, y1 = 0;
	double x2 = 0, y2 = 0;

	std::cout << "x1 = ";
	std::cin >> x1;
	std::cout << "y1 = ";
	std::cin >> y1;
	std::cout << "x2 = ";
	std::cin >> x2;
	std::cout << "y2 = ";
	std::cin >> y2;

	double dx = fabs(x1 - x2);
	double dy = fabs(y1 - y2);

	double distance = sqrt(dx * dx + dy * dy);

	std::cout << "Distance = " << std::setprecision(2) << std::fixed << distance << std::endl;
}