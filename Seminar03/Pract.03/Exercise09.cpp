#include <iostream>
using namespace std;
int main()
{
    int start, end, sum=0;
	bool isPrime = 1;
    cin >> start >> end;
	for (int i = start; i <= end; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrime = 0;
			}
		}
		if (isPrime) sum += i;
		isPrime = 1;
	}
	cout << "Sum of primes: " << sum;
}