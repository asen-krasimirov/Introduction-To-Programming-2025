#include <iostream>

//task1
void returnFactorial(int n) 
{
	int factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	std::cout << "Factorial: " << factorial;
}

//task2
void printAscii(int start, int end)
{
	if (start < 0 || start > 255 || end < 0 || end > 255)
	{
		std::cout << "Invalid codes!";
		return;
	}
	for (int i = start; i <= end; i++)
	{
		std::cout << i << " --> " << (char)i << std::endl;
	}
}

//task3
void twoSum(int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (i + j == n)
			{
				std::cout << "x = " << i << ", y = " << j << std::endl;
			}
		}
	}
}

//task4
long long sumOfNum(long long n)
{
	int sum = 0;
	while (n)
	{
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

long long bonus(long long n)
{
	while (n > 9)
	{
		n = sumOfNum(n);
	}
	return n;
}

//task5
int reversedNumber(int num)
{
	int n = num * num;
	int result = 0;
	while (n)
	{
		int digit = n % 10;
		n /= 10;
		result += digit;
		result *= 10;
	}
	result /= 10;
	return result;
}

//task6
void printNumbersInOrder(int m, int n)
{
	int ind = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << ind++ << " ";
		}
		std::cout << std::endl;
	}
}

//task7
int doubleDigitSum()
{
	int count = 0;
	for (int i = 100; i <= 999; i++)
	{
		int currSum = sumOfNum(i);
		if (currSum >= 10 && currSum <= 99)
		{
			count += i;
		}
	}
	return count;
}

bool isPrime(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int primeDigitSum()
{
	int count = 0;
	for (int i = 100; i <= 999; i++)
	{
		int currSum = sumOfNum(i);
		if (isPrime(currSum))
		{
			count += i;
		}
	}
	return count;
}

//task8
void printFibonacci(int n)
{
	int previous = 0;
	int current = 1;

	int next = 0;
	for (int i = 0; i < n; i++)
	{
		std::cout << previous << " ";
		next = current + previous;
		previous = current;
		current = next;
	}
}

//task9
int getPrimesCount(int n, int m)
{
	int sum = 0;
	for (int i = n; i <= m; i++)
	{
		if (isPrime(i))
		{
			sum += i;
		}
	}
	return sum;
}

//task10
int missedNumber()
{
	int n = 0;
	std::cin >> n;

	int current = 0;
	int currentSum = 0;

	int totalSum = n * (n + 1) / 2;
	for (int i = 0; i < n - 1; i++)
	{
		std::cin >> current;
		currentSum += current;
	}
	return totalSum - currentSum;
}

//task11
void SumOfNumDivisibleByTen()
{
	int n = 0;
	while (true)
	{
		std::cin >> n;
		int result = n + sumOfNum(n);
		if (result % 10 == 0)
		{
			std::cout << "Number is devisible by ten!";
			break;
		}
		else
		{
			std::cout << "Bad Number";
		}
	}
}

//task12
int getSumToN(int n)
{
	if (n <= 0)
		return 0;

	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i * (i + 1) / 2;
	}
	return result;
}

//task13
void printHours(int firstHours, int firstMinutes, 
	int secondHours, int secondMinutes)
{
	while (true)
	{
		if (firstHours == secondHours && firstMinutes == secondMinutes)
		{
			break;
		}
		firstMinutes++;
		if (firstMinutes == 60)
		{
			firstMinutes = 0;
			firstHours++;
		}
		if (firstMinutes <= 9)
		{
			std::cout << firstHours << ":0" << firstMinutes << std::endl;
			continue;
		}
		std::cout << firstHours << ":" <<  firstMinutes << std::endl;
	}
}

//task14
int gcd(int a, int b) //NOD
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int SumOfCoprimes()
{
	int n = 0;
	std::cin >> n;
	
	if (n <= 0)
		return 0;

	int sum = 0;
	int input = 0;
	while (true)
	{
		std::cin >> input;
		if (input == -1)
		{
			break;
		}
		if (gcd(n, input) == 1)
		{
			sum += input;
		}
	}
	return sum;
}

//task 15
bool isRightTriangle(int a, int b, int c)
{
	return (a * a + b * b) == c * c;
}

void returnAllTriplesThatMakeTriangle(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			for (int k = j; k <= n; k++)
			{
				if (isRightTriangle(i, j, k))
				{
					std::cout << i << " " << j << " " << k << std::endl;
				}
			}
		}
	}
}

//task16
int getDivisorsSum(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}

void returnPerfectNumbers(int start, int end)
{
	if (start < 0 || end < 0)
		return;

	for (int i = start; i <= end; i++)
	{
		if (i > 1 && getDivisorsSum(i) == i)
		{
			std::cout << i << std::endl;
		}
	}
}

//task17
void getEqualSums() {
	int n;
	std::cin >> n;

	int first, second;
	std::cin >> first >> second;
	int previousSum = first + second;

	int maxDiff = 0;
	bool allEqual = true;

	for (int i = 1; i < n; i++) 
	{
		std::cin >> first >> second;
		int currentSum = first + second;

		if (currentSum != previousSum) 
		{
			if (std::abs(currentSum - previousSum) > maxDiff)
			{
				maxDiff = std::abs(currentSum - previousSum);
			}
			allEqual = false;
		}

		previousSum = currentSum;
	}

	if (allEqual) 
	{
		std::cout << "Equal sums: " << previousSum << std::endl;
	}
	else 
	{
		std::cout << "Different sums. Max Difference: " << maxDiff << std::endl;
	}
}

//task18

bool isSpecial(int number, int k) {
	while (number > 0) {
		int digit = number % 10;
		if (digit == 0 || k % digit != 0) {
			return false; 
		}
		number /= 10;
	}
	return true; 
}

void printSpecialNumbers(int k, int n, int m)
{
	for (int i = n; i <= n; i++) {
		if (isSpecial(i, k)) {
			std::cout << i << " ";
		}
	}
}

//task19
void printDollars(int n)
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << "$" << " ";
		}
		std::cout << std::endl;
	}
}