
#include <iostream>
using namespace std;
int main()
{


	int first_hour, first_min;
	cin >> first_hour >> first_min;
	
	int second_hour, second_min;
	cin >> second_hour >> second_min;
	
	int early_hour, early_min;
	int late_hour, late_min;
	
	if ((first_hour * 60) + first_min > (second_hour * 60) + second_min) {
		late_hour = first_hour;
		late_min = first_min;
	
		early_hour = second_hour;
		early_min = second_min;
	}
	else
	{
		late_hour = second_hour;
		late_min = second_min;
	
		early_hour = first_hour;
		early_min = first_min;
	}
	
	
	
	
	
	for (int hours = early_hour; hours <= late_hour; hours++)
	{
	
	
		if (hours == early_hour) {
			for (int minutes = early_min; minutes < 60; minutes++)
			{
	
				if (minutes >= 0 && minutes <= 9)
				{
	
					std::cout << hours << ":"<< "0" << minutes << endl;
	
				}
				else {
	
					std::cout << hours << ":" << minutes << endl;
	
				}
	
			}
		}
		else if (hours == late_hour)
		{
			for (int minutes = 0; minutes <= late_min; minutes++)
			{
				if (minutes >= 0 && minutes <= 9)
				{
	
					std::cout << hours << ":" << "0" << minutes << endl;
	
				}
				else {
	
					std::cout << hours << ":" << minutes << endl;
	
				}
			}
		}
		else
		{
			for (int minutes = 0; minutes < 60; minutes++)
			{
				if (minutes >= 0 && minutes <= 9)
				{
	
					std::cout << hours << ":" << "0" << minutes << endl;
	
				}
				else {
	
					std::cout << hours << ":" << minutes << endl;
	
				}
			}
		}
		
	}


}