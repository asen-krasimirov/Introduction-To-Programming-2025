#include <iostream>
using namespace std;
void simpleFraction(int& a, int& b)
{
	int min = ((a < b) ? a : b)/2;
	for (int i = 2; i <= min; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			a = a / i;
			b = b / i;
			i--;
		}
	}
}

int main()
{
	int numerator, denumerator;
	cin >> numerator >> denumerator;
	simpleFraction(numerator, denumerator);
	cout << numerator << " " << denumerator;
}
