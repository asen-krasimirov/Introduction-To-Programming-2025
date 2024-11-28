// MK_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

//bool isPrime(int num) {
//
//	for (int i = 2; i <= num / 2; i++)
//	{
//
//		if (num % i == 0) {
//
//			return false;
//		}
//	}
//
//	return true;
//}
//
//int sum(int a, int b) {
//
//	return a + b;
//}
//
//bool isEven(int num) {
//
//	return num % 2 == 0;
//}
//
//bool isPositive(int num) {
//
//	return num > 0;
//}
//
//bool isNegative(int num) {
//
//	return num < 0;
//}
//
//int abs(int num) {
//
//	if (isNegative(num)) {
//
//		return num * -1;
//	}
//
//	return num;
//}
//
//double fabs(double num) {
//
//	if (isNegative(num)) {
//
//		return num * -1;
//	}
//
//	return num;
//}
//
//void print(char S, int N) {
//
//	for (int i = 1; i <= N; i++)
//	{
//		cout << S;
//	}
//}
//
//bool checkSymbol(char S) {
//
//	return (S >= 65 && S <= 90) || (S >= 97 && S <= 122);
//}
//
//bool  isCapitalLetter(char S) {
//
//	return checkSymbol(S) && (S >= 65 && S <= 90);
//}
//
//char to_lower(char ch) {
//
//	if (isCapitalLetter(ch)) {
//
//		return ch + 32;
//	}
//
//	return ch;
//}
//
//char to_upper(char ch) {
//
//	if (!isCapitalLetter(ch)) {
//
//		return ch - 32;
//	}
//
//	return ch;
//}
//
//int numLenght(int n) {
//
//	int counter = 0;
//
//	while (n != 0) {
//
//		counter++;
//		n /= 10;
//	}
//
//	return counter;
//}
//
//int numLooker(int n, int k) {
//
//	int lenght = numLenght(n);
//	int num = -1;
//
//	if (k > lenght || k < 1) {
//
//		return 0;
//	}
//
//	for (int i = lenght; i >= k; i--)
//	{
//		num = n % 10;
//
//		n /= 10;
//	}
//
//	return num;
//}
//
//void isSquareRoot(int n) {
//
//	for (int i = 1; i <= n / 2; i++)
//	{
//		if (i * i == n) {
//
//			cout << n << " - yes (" << i << "^2)";
//			return;
//		}
//	}
//
//	cout << n << " - no " << "(?^2)";
//}
//
//int NOK(int a, int b, int c) {
//
//	int nok = 1;
//	int maxNum = ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
//
//	while (a != 1 && b != 1 && c != 1) {
//
//		for (int i = 2; i <= maxNum; i++)
//		{
//
//			bool devided = false;
//
//			if (!isPrime(i)) {
//
//				continue;
//			}
//
//			if (a % i == 0) {
//
//				a /= i;
//				devided = true;
//			}
//
//			if (b % i == 0) {
//
//				b /= i;
//				devided = true;
//			}
//
//			if (c % i == 0) {
//
//				c /= i;
//				devided = true;
//			}
//
//			if (devided) {
//
//				nok *= i;
//				i--;
//			}
//		}
//	}
//
//	return nok;
//}
//
//bool inBetween(int start, int end, int num) {
//
//	return (num >= start) && (num <= end);
//}
//
//int askUser(int from, int to) {
//
//	int n;
//	cin >> n;
//
//	while (!inBetween(from, to, n)) {
//
//		cin >> n;
//	}
//
//	return n;
//}
//
//int myPow(int num, unsigned N) {
//
//	int powNum = 1;
//
//	for (int i = 1; i <= N; i++)
//	{
//		powNum *= num;
//	}
//
//	return powNum;
//}
//
//int concat(int first, int second) {
//
//	unsigned lenght = numLenght(second);
//
//	return (first * myPow(10, lenght)) + second;
//}
//
//int NOD(int a, int b, int c, int d) {
//
//	int maxNum = max(max(a, b), max(c, d));
//
//	for (int i = maxNum; i >= 1; i--)
//	{
//		if ((a % i == 0) && (b % i == 0)
//			&& (c % i == 0) && (d % i == 0)) {
//
//			return i;
//		}
//	}
//}
//
//bool isNumPowerOfTwo(int num) {
//
//	for (int i = 1; i <= num; i++)
//	{
//		if (myPow(2, i) == num) {
//
//			return true;
//		}
//	}
//
//	return false;
//}
//
//int closestToPowerOfTwo(int num) {
//
//	int answer1 = 0;
//	int answer2 = 0;
//
//	for (int i1 = num; i1 >= 100; i1--)
//	{
//		if (isNumPowerOfTwo(i1)) {
//
//			answer1 = i1;
//			break;
//		}
//	}
//
//	for (int i2 = num; i2 <= 100000; i2++)
//	{
//		if (isNumPowerOfTwo(i2)) {
//
//			answer2 = i2;
//			break;
//		}
//	}
//
//	if (answer1 == 0) {
//
//		return answer2;
//	}
//	else if (answer2 == 0) {
//
//		return answer1;
//	}
//
//	answer1 -= num;
//	answer2 -= num;
//
//	return (abs(answer1) < abs(answer2)) ? answer1 + num : answer2 + num;
//}
//
//void allPrimesTo(int n) {
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (isPrime(i)) {
//
//			cout << i << " ";
//		}
//	}
//}
//
//bool isnumTwoPrimeNumber(int n) {
//
//	for (int i1 = 1; i1 <= n; i1++)
//	{
//		for (int i2 = 1; i2 <= n; i2++)
//		{
//			if (isPrime(i1) && isPrime(i2) && (i1 + i2 == n)) {
//
//				return true;
//			}
//		}
//	}
//
//	return false;
//}
//
//long sumOfNumbers(long n) {
//
//	long sum = 0;
//
//	while (n != 0) {
//
//		sum += n % 10;
//		n /= 10;
//	}
//
//	return sum;
//}
//
//void factorization(int num) {
//
//	if (num == 1) {
//
//		cout << 1;
//		return;
//	}
//
//	for (int i = 2; i <= num; i++)
//	{
//		if (isPrime(i) && num % i == 0) {
//
//			cout << i;
//
//			num /= i;
//
//			if (num == 1) {
//
//				return;
//			}
//			else {
//
//				cout << ".";
//			}
//
//			i--;
//		}
//	}
//}
//
//int sortNum(int num) {
//
//	int number = 0;
//	int plusCounter = 0;
//
//	for (int i1 = 9; i1 >= 0; i1--)
//	{
//		int counter = 0;
//
//		for (int i2 = 1; i2 <= numLenght(num); i2++)
//		{
//			if (numLooker(num, i2) == i1) {
//
//				counter++;
//			}
//		}
//
//		for (int i3 = 1; i3 <= counter; i3++)
//		{
//			number += i1 * myPow(10, plusCounter);
//			plusCounter++;
//		}
//	}
//
//	return number;
//}

int main()
{
	// Zad_1

	// << sum(13, 21);


	// Zad_2

	//cout << isEven(69);


	// Zad_3

	//cout << isPositive(10);
	//cout << isNegative(-10);


	// Zad_4

	//cout << abs(-10);
	//cout << fabs(-10.55);


	// Zad_5

	//print('$', 20);


	// Zad_6

	//cout << isCapitalLetter('G');


	// Zad_7

	//cout << to_lower('G');
	//cout << to_upper('g');


	// Zad_8

	//cout << numLenght(1022402952);


	// Zad_9

	//cout << numLooker(98765432, 3);


	// Zad_10

	//isSquareRoot(100);


	// Zad_12

	//cout << NOK(12, 18, 6);


	// Zad_13

	/*cout << concat(123, 456);*/


	// Zad_14

	/*cout << askUser(10, 50);*


	// Zad_15

	/*cout << myPow(10, 5);*/


	// Zad_16

	//int a, b, c, d;


	//cout << "A = ";
	//cin >> a;

	//cout << "B = ";
	//cin >> b;

	//cout << "C = ";
	//cin >> c;

	//cout << "D = ";
	//cin >> d;


	//cout << "NOD = " << NOD(a, b, c, d);

	// Zad_17

	//int n;
	//cin >> n;

	//while (!inBetween(100, 100000, n)) {
	//	cin >> n;
	//}

	//cout << closestToPowerOfTwo(n);


	// Zad_18

	/*allPrimesTo(100);
	cout << isnumTwoPrimeNumber(100);*/


	// Zad_19

	/*long n;
	cin >> n;

	cout << sumOfNumbers(n) << "\n";

	long sum = 0;

	while (n != 0) {

		sum += n % 10;
		n /= 10;

		if ((n == 0) && (sum > 9)) {

			n = sum;
			sum = 0;
		}
	}

	cout << sum << "\n";*/


	// Zad_20

	//factorization(31668);


	// Zad_21

	//int n;
	//cin >> n;

	//cout << sortNum(n);

}