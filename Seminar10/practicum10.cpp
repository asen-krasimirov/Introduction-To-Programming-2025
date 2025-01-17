#include <iostream>

using namespace std;

int numberLength(int n)
{
	int result = 0;
	while (n != 0)
	{
		n /= 10;
		result++;
	}
	return result;
}

//zad 1
void swap(int& num1, int& num2)
{
	/*int numRef = num1;
	num1 = num2;
	num2 = numRef;*/
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
}

//zad 2
char toLower(char c) 
{
	if (c >= 'A' && c <= 'Z') 
	{
		return c + ('a' - 'A');
	}
	return c;
}
char toLower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c + ('A' - 'a');
	}
	return c;
}

//zad 3
void sort3(int& min, int& mid, int& max) 
{
	if (min > mid) 
	{
		swap(min, mid);
	}
	if (min > max) 
	{
		swap(min, max);
	}
	if (mid > max) 
	{
		swap(mid, max);
	}
}

//zad 4 
int gcd(int a, int b)
{
	if (a < b)
	{
		int c = a;
		a = b;
		b = c;
	}
	for (int i = a; i > 1; i--)
	{
		if (a % i == 0 && b % i == 0)
			return i;
	}
}
void simplifyFraction(int& num1, int& num2) 
{
	int divisor = gcd(num1, num2);
	num1 /= divisor;
	num2 /= divisor;
}
void sumFractions(int num1, int den1, int num2, int den2) 
{
	int numerator = num1 * den2 + num2 * den1;
	int denominator = den1 * den2;
	simplifyFraction(numerator, denominator);
	cout << numerator << " " << denominator << endl;
}

//zad 5
void swapKthDigit(int& n, int& m, int k) {
	int nDigits[10], mDigits[10];
	int nLen = numberLength(n);
	int mLen = numberLength(m);

	for (int i = 0; n > 0; ++i) 
	{
		nDigits[i] = n % 10;
		n /= 10;
	}
	for (int i = 0; m > 0; ++i) 
	{
		mDigits[i] = m % 10;
		m /= 10;
	}

	if (k > nLen || k > mLen)
	{
		return;
	}
	swap(nDigits[k - 1], mDigits[k - 1]);

	n = 0;
	m = 0;
	for (int i = nLen - 1; i >= 0; --i)
	{
		n = n * 10 + nDigits[i];
	}
	for (int i = mLen - 1; i >= 0; --i)
	{
		m = m * 10 + mDigits[i];
	}
}

//zad 6
void printArray(int* arr, int size) 
{
	for (int i = 0; i < size; i++) 
	{
		cout << *(arr + i) << " ";  
	}
	cout << endl;
}

int main()
{
	
}

