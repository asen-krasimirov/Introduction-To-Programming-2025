
#include <iostream>
using namespace std;
int main()
{

	int k; std::cin >> k;
if (k < 0) {
	return 1;
}

int n, m;
std::cin >> n >> m;

for (int number = n; number <= m; number++)
{
	bool is_div = true;
	int num_for_use = number;

	while (is_div) {

		int last_digit = num_for_use % 10;
		num_for_use /= 10;

		if (last_digit == 0 || k % last_digit != 0)
		{
			is_div = false;
			break;
		}

		if (num_for_use == 0) {
			break;
		}

	}

if (is_div) {
		std::cout << number << " ";
	}

}




}