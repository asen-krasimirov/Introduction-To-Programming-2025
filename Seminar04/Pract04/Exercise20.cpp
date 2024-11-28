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
int primeMultiplier(int num)
{
	for (int i = 2; i <=num; i++)
	{
		if ((num % i == 0) && isPrime(i))
		{
			return i;
		}
	}
}
void allPrimeMultipliers(int number)
{
	if (number > 1)
	{
		cout << primeMultiplier(number);
		number = number / primeMultiplier(number);
	}
	while (number != 1)
	{
		cout << "." << primeMultiplier(number);
		number = number / primeMultiplier(number);
	}
}
int main()
{
    int number;
    cin >> number;
	while (number < 1)
	{
		cout << "Enter a positive number."<<endl;
		cin >> number;
	}
	allPrimeMultipliers(number);
}
