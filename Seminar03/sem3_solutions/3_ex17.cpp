
#include <iostream>
using namespace std;
int main()
{

	int n; std::cin >> n;
	if (n < 0) {
		return 1;
	}
	int max_sum = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		std::cin >> a >> b;
		int current_sum = a + b;
		sum += current_sum;
		if (current_sum > max_sum) {
			max_sum = current_sum;
		}
	
	}
	if (sum / n == n) {
		std::cout << "Equal sums: " << n;
	
	}
	else
	{
		std::cout << "Different sums. Max Difference: " << max_sum;
	}


}