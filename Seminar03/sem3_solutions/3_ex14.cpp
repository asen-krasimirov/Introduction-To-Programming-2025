
#include <iostream>
using namespace std;
int main()
{
	int n; std::cin >> n;
int input_num; std::cin >> input_num;
int sum = 0;
while (input_num != -1) {
	
	int count = 0;

	if (input_num > 1) {

		for (int i = 1; i <= input_num; i++)
		{
			if (input_num % i == 0) {
				count++;
			}


		}

		if (count == 2 && n % input_num != 0) {
			sum += input_num;
		}
	}


	std::cin >> input_num;
}

std::cout << sum;



}