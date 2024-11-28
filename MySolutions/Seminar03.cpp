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

//bool isRightTriangle(int a, int b, int c) {
//
//	if ((a + b > c) && (b + c > a) && (a + c > b)) {
//
//		if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
//
//			return true;
//		}
//	}
//
//	return false;
//}

int main()
{

	// Zad_1
	// 
	//int n;
	//cin >> n;

	//int counter = 1;
	//int factorial = 1;

	//while (counter != n + 1) {

	//	factorial *= counter;

	//	counter++;
	//}

	//cout << "Factorial: " << factorial;


	// Zad_2
	// 
	//int n, m;

	//cout << "Start: ";
	//cin >> n;
	//
	//cout << "End: ";
	//cin >> m;

	//if ( (n < 0) || (m > 255) ) {

	//	cout << "Invalid codes!";
	//	return 0;
	//}


	//for (int counter = n; counter <= m; counter++)
	//{

	//	cout << counter << " --> " << (char) counter << "\n";
	//}


	// Zad_3
	// 
	//int n;
	//cin >> n;

	//for (int x = 1; x < n; x++)
	//{
	//	for (int y = 1; y < n; y++)
	//	{

	//		if (x + y == n) {

	//			cout << "x = " << x << ", y = " << y << "\n";
	//		}
	//	}
	//}


	// Zad_4
	// 
	//int n;
	//cin >> n;

	//int sum = 0;

	//while (n != 0) {

	//	sum += n % 10;
	//	n /= 10;

	//}

	//cout << sum;

	//Bonus
	//int n;
	//cin >> n;

	//int sum = 0;

	//while (n != 0) {

	//	sum += n % 10;
	//	n /= 10;

	//	if ((n == 0) && (sum > 9)) {

	//		n = sum;
	//		sum = 0;
	//	}
	//}

	//cout << sum;


	// Zad_5
	// 
	//int num;
	//cin >> num;

	//int secondNum = num * num;
	//
	//while (secondNum != 0) {

	//	if (secondNum % 10 != 0) {

	//		cout << secondNum % 10;
	//	}

	//	secondNum /= 10;
	//}


	// Zad_6
	// 
	//int m, n;
	//cin >> m >> n;

	//int counter = 1;

	//for (int row = 1; row <= m; row++)
	//{
	//	for (int column = 1; column <= n; column++)
	//	{

	//		cout << counter++ << " ";
	//	}

	//	cout << "\n";
	//}


	// Zad_7
	// 
	//int sum = 0;
	//
	//for (int n = 101; n <+ 999; n += 2)
	//{
	//	if (isPrime(n)) {

	//		sum += n;
	//	}
	//}

	//cout << sum;


	// Zad_8
	// 
	//int n;
	//cin >> n;

	//int previousNum = 0;
	//int currentNum = 1;

	//if (n == 1) {

	//	cout << previousNum;
	//	return 0;

	//}
	//else if (n == 0) {

	//	return 0;
	//}

	//cout << previousNum << " " << currentNum << " ";

	//for (int i = 2; i < n; i++)
	//{

	//	int sum = previousNum + currentNum;
	//	cout << sum << " ";

	//	previousNum = currentNum;
	//	currentNum = sum;
	//}


	// Zad_9
	// 
	//int n, m;
	//cin >> n >> m;

	//int sum = 0;

	//for (int num = n; num <= m; num++)
	//{

	//	if (isPrime(num)) {

	//		sum += num;
	//	}
	//}

	//cout << "Sum of primes: " << sum;


	// Zad_10
	// 
	//int n;
	//cin >> n;

	//int sum = (n * (n + 1)) / 2;

	//for (int num = 1; num < n; num++)
	//{

	//	int tempNumber;
	//	cin >> tempNumber;

	//	sum -= tempNumber;
	//}

	//cout << sum;


	// Zad_11
	// 
	//int num;
	//bool isBadNum = true;

	//while (isBadNum) {

	//	cin >> num;

	//	int copyNum = num;
	//	int sum = 0;

	//	while (copyNum != 0) {

	//		sum += copyNum % 10;
	//		copyNum /= 10;
	//	}

	//	if ((num + sum) % 10 == 0) {

	//		isBadNum = false;
	//		continue;
	//	}

	//	cout << "Bad number. \n";
	//	}


	// Zad_12
	// 
	//int n;

	//cout << "n = ";
	//cin >> n;

	//int sum = 0;

	//for (int i = 1; i <= n; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{

	//cout << sum;


	// Zad_13

	//int hour1, minute1;
	//cin >> hour1 >> minute1;

	//int hour2, minute2;
	//cin >> hour2 >> minute2;

	//int time1 = hour1 * 60 + minute1;
	//int time2 = hour2 * 60 + minute2;

	//int biggerTime = (time1 > time2) ? time1 : time2;
	//int smallerTime = (time1 < time2) ? time1 : time2;

	//for (int t = smallerTime; t <= biggerTime; t++)
	//{

	//	string printStr1 = "";
	//	string printStr2 = ":";
	//	int hr = t / 60;
	//	int min = t % 60;

	//	if (hr < 10) {

	//		printStr1 = "0";

	//	}

	//	if (min < 10) {

	//		printStr2 = ":0";

	//	}
	//	

	//	cout << printStr1 << hr << printStr2 << min << "\n";
	//}


	// Zad_14

	/*int n;
	cin >> n;

	int sum = 0;

	while (true) {

		int num;
		cin >> num;

		if (num == -1) {

			break;
		}

		if (isPrime(num) && (n % num != 0)) {

			sum += num;
		}
	}

	cout << sum;*/

	// Zad_15

	//int n;
	//cin >> n;

	//for (int a = 1; a <= n; a++)
	//{
	//	for (int b = 1; b <= n; b++)
	//	{
	//		for (int c = 1; c <= n; c++)
	//		{

	//			if (isRightTriangle(a, b, c)) {

	//				cout << a << " " << b << " " << c << "\n";
	//			}
	//		}
	//	}
	//}


	// Zad_16

	//int m, n;
	//cin >> m >> n;

	//for (int count = m; count <= n; count++)
	//{

	//	int sum = 0;

	//	for (int i = 1; i < count; i++)
	//	{

	//		if (count % i == 0) {

	//			sum += i;
	//		}
	//	}

	//	if (count == sum) {

	//		cout << count << "\n";
	//	}
	//}


	// Zad_17

	/*int n;
	cin >> n;

	int previousSum = 0;
	int maxDiff = 0;

	for (int i = 1; i <= n; i++)
	{

		int num1, num2;
		cin >> num1 >> num2;

		if (i == 1) {

			previousSum = num1 + num2;
			continue;
		}

		int currentSum = num1 + num2;
		int difference = abs(previousSum - currentSum);

		if (currentSum != previousSum) {

			if (maxDiff < difference) {

				maxDiff = difference;
			}
		}

		previousSum = num1 + num2;
	}

	if (maxDiff != 0) {

		cout << "Different sums. Max Difference: " << maxDiff;

	}
	else {

		cout << "Equal sums: " << previousSum;
	}*/


	// Zad_18

	//int k;
	//cin >> k;

	//int n, m;
	//cin >> n >> m;

	//for (int num = n; num <= m; num++)
	//{

	//	int copyNum = num;
	//	bool isSpetial = true;

	//	while (copyNum != 0) {

	//		int copyNumNumber = copyNum % 10;

	//		if (copyNumNumber == 0 || k % copyNumNumber != 0) {

	//			isSpetial = false;
	//			break;
	//		}

	//		copyNum /= 10;
	//	}

	//	if (isSpetial) {

	//		cout << num << " ";
	//	}
	//}


	// Zad_19

	//int n;
	//cin >> n;

	//for (int i = 1; i <= n; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		cout << "$ ";
	//	}

	//	cout << "\n";
	//}


	// Zad_20 (KODA BACHKA SAMO ZA EDNOCIFRENI CHISLA)

	/*int n;
	cin >> n;

	for (int row = 1; row <= n; row++)
	{
		for (int num1 = 1; num1 <= row; num1++)
		{
			cout << num1 << " ";
		}

		for (int symbol = n; symbol > row; symbol--)
		{
			cout << "  ";
		}

		for (int symbol = 1; symbol <= n; symbol++)
		{
			if (row != n) {

				cout << " ";

			}
			else {

				cout << "-";

			}

		}

		for (int symbol = n; symbol > row; symbol--)
		{
			cout << "  ";
		}

		for (int num2 = 1; num2 <= row; num2++)
		{
			cout << " " << row - (num2 - 1);
		}

		cout << "\n";
	}

	int counter = 1;

	for (int row = 1; row < n; row++)
	{

		for (int num1 = 1; num1 <= n - row; num1++)
		{
			cout << num1 << " ";
		}

		for (int symbol = 1; symbol <= row; symbol++)
		{
			cout << "  ";
		}

		for (int symbol = 1; symbol <= n; symbol++)
		{
				cout << " ";
		}

		for (int symbol = 1; symbol <= row; symbol++)
		{
			cout << "  ";
		}

		for (int num2 = n - row; num2 >= 1; num2--)
		{
			cout << " " << num2;
		}

		cout << "\n";
	}*/


	// Zad_21


	// Zad_22

	// A)

	//int n;
	//cin >> n;

	//int minusCounter = (n * 2) - 1;
	//int plusCounter = 1;

	//for (int row = 1; row <= n; row++)
	//{
	//	int previousNum = row;

	//	for (int colm = 1; colm <= n; colm++)
	//	{

	//		if (colm == 1) {

	//			cout << row << " ";

	//		}
	//		else {

	//			if (colm % 2 == 0) {

	//				cout << previousNum + minusCounter << " ";

	//				previousNum += minusCounter;
	//			}
	//			else
	//			{

	//				cout << previousNum + plusCounter << " ";

	//				previousNum += plusCounter;
	//			}
	//		}
	//	}

	//	minusCounter -= 2;
	//	plusCounter += 2;

	//	cout << "\n";
	//}

	// B)

	/*int n;
	cin >> n;

	for (int row = 1; row <= n; row++)
	{
		if (row % 2 != 0) {

			for (int left = (row * n) - n + 1; left <= row * n; left++)
			{

				cout << left << " ";
			}

			cout << "\n";
		}
		else {

			for (int right = row * n; right >= (row * n) - n + 1; right--)
			{

				cout << right << " ";
			}

			cout << "\n";
		}
	}*/

}