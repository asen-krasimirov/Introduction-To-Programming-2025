#include <iostream>
using namespace std;

//task 1
int sum(int a, int b)
{
	return a + b;
}

//task 2
bool isEven(int num)
{
	return num % 2 == 0;
}

//task 3
bool isPositive(int num)
{
	return num > 0;
}

bool isNegative(int num)
{
	return num < 0;
}

//task 4
int abs(int num)
{
	return num >= 0 ? num : -num;
}

double EPSILON = 0.00001;
double fabs(double num)
{
	return num >= -EPSILON ? num : -num;
}

//task 5
void print(char s, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << s << " ";
	}
	cout << endl;
}

//task 6
bool isCapitalLetter(char s)
{
	return 'A' <= s && s <= 'Z';
}

bool isSmallLetter(char s)
{
	return 'a' <= s && s <= 'z';
}

bool checkSymbol(char s)
{
	return isCapitalLetter(s) || isSmallLetter(s);
}

//task 7
char toLower(char ch)
{
	if (isSmallLetter(ch))
	{
		return ch;
	}
	return ch - 'A' + 'a';
}

char toUpper(char ch)
{
	if (isCapitalLetter(ch))
	{
		return ch;
	}
	return ch - 'a' + 'A';
}

//task 8
int numLength(int num)
{
	int length = 1;
	while (num > 9 || num < 0) //counting the minus sign as well
	{
		num /= 10;
		length++;
	}
	return length;
}

//task 9
char getKthDigit(int n, int k)
{
	int length = numLength(n);
	if (k < 0 || k >= length)
	{
		return '?';
	}
	if (n < 0)
	{
		if (k == length - 1)
		{
			return '-';
		}
		length--;
		n = abs(n);
	}

	for (int i = 0; i < k; i++)
	{
		n /= 10;
	}
	return (n % 10) + '0';

}

//task 10
bool isSquare(int num)
{
	if (num < 0)
	{
		return false;
	}
	for (size_t i = 0; i * i <= num; i++)
	{
		if (i * i == num)
		{
			return true;
		}
	}
	return false;
}

//task 12
int gcd(int a, int b)
{
	while (a > 0)
	{
		int temp = b % a;
		b = a;
		a = temp;
	}
	return b;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int lcm(int a, int b, int c)
{

	return lcm(a, lcm(b, c));
}

//task 13
int concat(int first, int second)
{
	if (second < 0)
	{
		return -1;
	}
	first *= 10;
	int temp = second;
	while (temp > 9)
	{
		temp /= 10;
		first *= 10;
	}
	if (first >= 0)
	{
		return first + second;
	}
	return first - second;

}

//task 14
bool isInInterval(int value, int from, int to)
{
	return from <= value && value <= to;
}

int askUser(int from, int to)
{
	int input;
	do
	{
		cout << "Enter a number between " << from << " and " << to << ": ";
		cin >> input;
	} while (!isInInterval(input, from, to));
	return input;
}

//another task 14
int my_pow(int number, unsigned n)
{
	int result = 1;
	for (size_t i = 0; i < n; i++)
	{
		result *= number;
	}
	return result;
}

//task 15
int calculate(int a, int b, char action)
{
	switch (action)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		if (!b)
		{
			return -1;
		}
		return a / b;
	case '%':
		if (!b)
		{
			return -1;
		}
		return a % b;
	default:
		return a + b;
	}
}

//task 16
int gcd(int a, int b, int c, int d)
{
	return gcd(a, gcd(b, gcd(c, d)));
}

//task17
int getValidInput()
{	
	int n = 0;
	while (true)
	{
		std::cin >> n;
		if (n >= 100 && n <= 100000)
		{
			return n;
		}
	}
}
int closestPowerOfTwo() {
	int n = getValidInput();
	int power = 1;
	while (power <= n) {
		power *= 2; 
	}

	int lower = power / 2;
	int upper = power;

	if (std::abs(lower - n) <= std::abs(upper - n)) {
		return lower;
	}
	else {
		return upper;
	}
}

//task18
bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void printPrimesUpTo(int n) {
	for (int i = 2; i <= n; i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
	cout << std::endl;
}

bool canBeExpressedAsSumOfTwoPrimes(int n) {
	for (int i = 2; i <= n / 2; i++) {
		if (isPrime(i) && isPrime(n - i)) { 
			return true;
		}
	}
	return false;
}

//task19
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

long long sumTillSingleDigit(long long n)
{
	while (n > 9)
	{
		n = sumOfNum(n);
	}
	return n;
}

//task20
void defactorization(int n) {
	bool first = true;

	while (n % 2 == 0) {
		if (!first) {
			cout << ".";
		}
		cout << 2;
		n /= 2;
		first = false;
	}

	for (int i = 3; i * i <= n; i += 2) {
		while (n % i == 0 && isPrime(i)) {
			cout << (first ? "" : ".") << i;
			n /= i;
			first = false;
		}
	}

	if (n > 2 && isPrime(n)) {
		cout << (first ? "" : ".") << n;
	}
}
