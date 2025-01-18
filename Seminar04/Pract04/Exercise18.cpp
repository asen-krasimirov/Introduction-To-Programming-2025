#include <iostream>
using namespace std;
bool isPrime(int a)
{
	if (a == 1)return 0;
	else
	{
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0) return 0;
		}
		return 1;
	}
}
void primeNumsToN(int n)
{
	for (int i = 2; i <=n; i++)
	{
		if (isPrime(i)) cout << i << " ";
	}
}
int isSumOfPrimes(int n)
{
	for (int i = 2; i < n/2; i++)
	{
		if (isPrime(i) && isPrime(n - i)) return i;
	}
	return 0;
}
int main()
{
	int input;
	cin >> input;
	while (input < 0)
	{
		cout << "Input should be a positive number." << endl;
		cin >> input;
	}
	if (isPrime(input)) cout << "Input is a prime." << endl;
	else cout << "Input is not a prime." << endl;
	cout << "The primes smaller than " << input << " are: ";
	primeNumsToN(input);
	cout << endl;
	if (isSumOfPrimes(input)) cout << "Input is a sum of the primes " << isSumOfPrimes(input) <<" and "<< input - isSumOfPrimes(input) <<"."<< endl;
	else cout << "Input is not a sum of primes.";
}
