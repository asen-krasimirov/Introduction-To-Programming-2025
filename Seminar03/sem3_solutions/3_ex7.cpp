
#include <iostream>
using namespace std;
int main()
{

	int sum = 0;
for (int start = 100; start <= 999; start++) {
	int sum_of_digits = 0;
	int number = start;
	for (int i = 0; i < 3; i++) {

		sum_of_digits += number % 10;
		number /= 10;

	}
	


}

}