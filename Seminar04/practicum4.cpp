#include <iostream>

using namespace std;
//Да се състави функция sum(int a, int b), която приема две числа и връща като резултат сбора им.
	void sum1(int a, int b)
	{

		std::cout << "Result is: " << a + b;
	}
	/*int main()
	{
		int a;
		std::cin >> a;
		int b;
		std::cin >> b;
		sum(a, b);
	}*/
//Да се напише функция isEven(int num), която връща дали дадено число е четно или не.
	void isEven(int num)
	{
		if (num % 2 == 0)
		{
			std::cout << "Even!";
		}
		else
		{
			std::cout << "Not even!";
		}
	}
	/*int main()
	{
		int num;
		std::cin >> num;
		isEven(num);
	}*/
//Да се напише функция
	//isPositive(int num), която връща дали дадено число е положително или не
	//isNegative(int num), която връща дали дадено число е отрицателно или не.

		void isPositive(int num)
		{
			if (num > 0)
			{
				std::cout << "Positive!";
			}
			else
			{
				std::cout << "Negative!";
			}
		}
		/*int main()
		{
			int num;
			std::cin >> num;
			isPositive(num);
		}*/

	void isNegative(int num)
	{
		if (num < 0)
		{
			std::cout << "Negative";
		}
		else
		{
			std::cout << "Positive";
		}
	}
	//int main()
	//{
	//	int num;
	//	std::cin >> num;
	//	isNegative(num);
	//}

//Напишете функция
	//abs(int num), която връща като резултат абсолютната стойност на числото num.
	//fabs(double num), която връща като резултат абсолютната стойност на числото num.
	//Hint: Epsilon

		int abs(int num)
		{
			if (num < 0)
			{
				return -num;
			}
			else
			{
				return num;
			}
			return 0;
		}
		//int main()
		//{
		//	int num;
		//	std::cin >> num;
		//	std :: cout << abs(num);
		//}


		double fabs(double num)
		{
			if (num < 0.000001)
			{
				return -num;
			}
			else
			{
				return num;
			}
		}
		//int main()
		//{
		//	double num;
		//	std::cin >> num;
		//	std::cout << fabs(num);
		//}

 //?//Напишете функция print(char S, int N), която извежда на екрана N-пъти символа S.
	void print(char s, int n)
	{
		for (int i = 0; i < n; i++)
		{
			std::cout << s << " ";
		}
	}
	/*int main()
	{
		int n;
		std::cin >> n;
		char s = 83;
		print(s, n);
	}*/
//Напишете функция isCapitalLetter(char S), която проверява дали даден символ е главна буква.
//Реализирайте функция checkSymbol(char S), която да проверява дали символът е буква.
	void isCapitalLetter(char s)
	{
		if (s >= 'a' && s <= 'z')
		{
			std::cout << "The letter is small!";
		}
		else if (s >= 'A' && s <= 'Z')
		{
			std :: cout << "The letter is big!";
		}
		
	}
	/*int main()
	{
		char s;
		std::cin >> s;
	   isCapitalLetter(s);
	}*/
	// sedma
	char to_lower(char S)
	{
		return ((S >= 'A' && S <= 'Z') ? (S + 32) : S);
	}
	char to_upper(char S)
	{
		return ((S >= 'a' && S <= 'z') ? (S - 32) : S);
	}


	//int main()
	//{
	//	char a, b;

	//	cout << "a: ";
	//	cin >> a;
	//	cout << "b: ";
	//	cin >> b;

	//	if (
	//		!((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) ||
	//		!((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
	//		)
	//	{
	//		cout << "Invalid input";
	//		return 0;
	//	}



	//	cout << "to_lower(a): " << to_lower(a) << endl << "to_upper(b): " << to_upper(b);

	//	return 0;
	//}

	//osma
	int length(int a)
	{
		int len = 0;

		do
		{
			len++;
			a /= 10;
		} while (a != 0);

		return len;
	}

	/*int main()
	{
		int a;
		cin >> a;
		cout << "Length: " << length(a);
		return 0;
	}*/

	//deset 
	 void hasWholeSqrt(int n)
	{
		for (int i = 1; i * i <= n; i++)
		{
			if (i * i == n)
			{
				cout << "yes (" << i << "^2)";
				return;
			}
		}
		cout << "no (?^2)";
	}

	//dvanaista
	int concat(int first, int second)
	{
		int temp = 0;
		while (second != 0) 
		{
			temp *= 10;
			temp += second % 10;
			second /= 10;
		}
		while (temp != 0)
		{
			first *= 10;
			first += temp % 10;
			temp /= 10;
		}

		return first;
	}

	//trinaista
	int askUser(int from, int to)
	{
		int input;

		while (true)
		{
			cin >> input;
			if (input<from || input>to)
			{
				break;
			}
		}

		return input;
	}


	//petnaista
	int sum(int a, int b)
	{
		return a + b;
	}
	int subtract(int a, int b)
	{
		return a - b;
	}
	int multiply(int a, int b)
	{
		return a * b;
	}
	int divide(int a, int b)
	{
		if (b != 0)
		{
			return a / b;
		}
		cout << "Error 0\n";
		return 0;
	}
	int remainder(int a, int b)
	{
		if (b != 0)
		{
			return a % b;
		}
		return 0;
	}
	int calculate(int a, int b)
	{
		return sum(a, b);
	}
	int calculate(int a, int b, char action)
	{
		switch (action)
		{
		case '+':
			return sum(a, b);
		case '-':
			return subtract(a, b);
		case '*':
			return multiply(a, b);
		case '/':
			return divide(a, b);
		case '%':
			return remainder(a, b);
		default:
			cout << "Error: Invalid symbol was entered\n";
			return 0;
		}
	}

	//shestnaiset
	int leastNumber(int a, int b, int c, int d)
	{
		int min = (a < b) ? a : b;
		min = (min < c) ? min : c;
		min = (min < d) ? min : d;

		return min;
	}

	//Greatest Common Divisor
	int gcd(int a, int b, int c, int d)
	{
		int min = leastNumber(a, b, c, d);
		min *= ((min < 0) ? -1 : 1);

		for (; min > 0; min--)
		{
			if (
				a % min == 0 &&
				b % min == 0 &&
				c % min == 0 &&
				d % min == 0
				)
			{
				return min;
			}
		}
		return 1;
	}

	
