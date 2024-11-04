
#include <iostream>
using namespace std;
int main()
{

	int m, n; cin >> m >> n;

for (int number = m; number <= n; number++)
{
	int sum = 0;
	for (int divisor = 1; divisor < number; divisor++)
	{
		if (number % divisor == 0) {
			sum += divisor;
		}
	}

	if (sum == number) {
		std::cout << number<<endl;
	}


}



}