
#include <iostream>
using namespace std;
int main()
{

	long long number; cin >> number;
	int sum = 0;
	while (number != 0) {

		sum += (number % 10);
		number /= 10;

	}
	cout << "Sum:" << sum;

}