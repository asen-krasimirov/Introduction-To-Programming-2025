#include <iostream>

int main() {
	int seconds = 0;

	std::cout << "Seconds: ";
	std::cin >> seconds;

	int days = seconds / 86400;
	seconds %= 86400;

	int hours = seconds / 3600;
	seconds %= 3600;

	int minutes = seconds / 60;
	seconds %= 60;

	std::cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds." << std::endl;
}