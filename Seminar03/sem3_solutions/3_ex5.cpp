
#include <iostream>
using namespace std;
int main()
{


	int number;
	cin >> number;
	number *= number;
	int reversed = 0;


	while (number != 0) {

		int last_digit = number % 10;

		reversed = reversed * 10 + last_digit;
		number /= 10;
	}
	cout << "Reversed:" << reversed;


}	