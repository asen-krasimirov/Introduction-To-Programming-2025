
#include <iostream>
using namespace std;
int main()
{
int low_end; std :: cin >> low_end;
int high_end; std :: cin >> high_end;
int sum_of_prime_numbers = 0;
if (low_end < high_end && low_end >= 1 && high_end > 1)
{

	for (int posible_prime_num = low_end; posible_prime_num <= high_end; posible_prime_num++) {
		
		int count_of_divisions = 0;

		for (int i =  1; i <= posible_prime_num; i++)
		{
			if (posible_prime_num % i == 0) {
				count_of_divisions++;
			}
		}
		if (count_of_divisions == 2) {
			sum_of_prime_numbers += posible_prime_num;
		}


	}

}

std::cout << "Sum of primes: " << sum_of_prime_numbers;


}