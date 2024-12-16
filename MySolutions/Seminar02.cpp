// MK_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int main()
{

	// Zad_1
	//int year;
	//cin >> year;

	//if (year % 400 == 0) {

	//	cout << year << " is Leap year. \n";

	//}
	//else if (year % 100 == 0) {

	//	cout << year << " isn't Leap year. \n";

	//}else if (year % 4 == 0) {

	//	cout << year << " is Leap year. \n";

	//}
	//else {

	//	cout << year << " isn't Leap year. \n";

	//}

	// Zad_2
	//char symbol;
	//cin >> symbol;

	//if ((symbol >= 65 && symbol <= 90) || (symbol >= 97 && symbol <= 122)) {

	//	if ((symbol == 'a') || (symbol == 'e') || (symbol == 'i') || 
	//		(symbol == 'o') || (symbol == 'u')) {

	//		cout << symbol << " is Vowel letter. \n";

	//	}
	//	else
	//	{

	//		cout << symbol << " is Consonant letter. \n";

	//	}
	//}
	//else
	//{

	//	cout << symbol << " isn't a letter. \n";

	//}

	// Zad_3
	//int num1, num2;
	//cin >> num1 >> num2;

	//cout << ((num1 > num2) ? num1 : num2);

	// Zad_4
	//int percentage;
	//cout << "Result: ";
	//cin >> percentage;

	//cout << "Grade: ";

	//if (percentage >= 90) {

	//	cout << "6+";

	//} else if (percentage >= 80) {

	//	cout << "6";

	//}else if (percentage >= 70) {

	//	cout << "5";

	//}else if (percentage >= 60) {

	//	cout << "4";

	//}else if (percentage >= 40) {

	//	cout << "3";

	//}else  {

	//	cout << "2";

	//}

	// Zad_5
	//int a, b, c;
	//cin >> a >> b >> c;

	//if ((a + b > c) && (b + c > a) && (a + c > b)) {

	//	cout << "VALID";
	//}
	//else
	//{
	//	cout << "NOT VALID";
	//}

	// Zad_6
	//int trafficLightState;
	//cout << "Enter traffic light state: \n";

	//cin >> trafficLightState;
	// 
	//switch (trafficLightState) {
	// 
	//case 1: cout << "Green. You can pass! "; break;
	// 
	//case 0: cout << "Yellow. Warning!";
	// 
	//case -1: cout << "Red. You cannot pass!"; break;
	//}

	// Zad_7
	//char symbol;
	//cin >> symbol;

	//if ((symbol >= 65 && symbol <= 90) || (symbol >= 97 && symbol <= 122)) {

	//	if (islower(symbol)) {

	//		cout << ((char) toupper(symbol));

	//	}
	//	else 
	//	{

	//		cout << ((char) tolower(symbol));
	//	}
	//}
	//else
	//{
	//			
	//	cout << "Invalid character";
	//}

	// Zad_8
	//int number;

	//cout << "Arabic numeral: ";
	//cin >> number;

	//cout << "Roman numerals: ";

	//if (number == 1) {

	//	cout << "I";

	//}else if (number == 2) {

	//	cout << "II";

	//}else if (number == 3) {

	//	cout << "III";

	//}else if (number == 4) {

	//	cout << "IV";

	//}else if (number == 5) {

	//	cout << "V";

	//}else if (number == 6) {

	//	cout << "VI";

	//}else if (number == 7) {

	//	cout << "VII";

	//}else if (number == 8) {

	//	cout << "VIII";

	//}else if (number == 9) {

	//	cout << "IX";

	//}

	// Zad_9
	//int num1, num2, num3;
	//cin >> num1 >> num2 >> num3;

	//int sum = num1 + num2 + num3;
	//int maxNum = max(max(num1, num2), num3);
	//int minNum = min(min(num1, num2), num3);
	//int middle = sum - maxNum - minNum;

	//cout << minNum << " " << middle << " " << maxNum;

	// Zad_10
	//double num1, num2;
	//cin >> num1 >> num2;

	//char action;

	//cout << "Action: ";
	//cin >> action;

	//if (action == '+') {

	//	cout << num1 + num2;

	//}else if (action == '-') {

	//	cout << num1 - num2;

	//}else if (action == '*') {

	//	cout << num1 * num2;

	//}else if (action == '/') {

	//	if (num2 == 0) {

	//		cout << "undefined";

	//	}
	//	else
	//	{

	//		cout << num1 / num2;
	//	}
	//}

	// Zad_11
	//int num1, num2, num3;
	//cin >> num1 >> num2 >> num3;
	//
	//int sum = num1 + num2 + num3;
	//int maxNum = max(max(num1, num2), num3);
	//int minNum = min(min(num1, num2), num3);
	//int middle = sum - maxNum - minNum;
	//
	//cout << maxNum << middle << minNum;

	// Zad_12
	//int day, month;

	//cout << "Date: ";
	//cin >> day >> month;

	//day++;

	//if (month % 2 == 0) {

	//	if (month == 2) {

	//		if (day > 28) {

	//			day = 1;
	//			month++;
	//		}

	//	}
	//	else
	//	{
	//		if (month == 12) {

	//			if (day > 31) {

	//				day = 1;
	//				month = 1;
	//			}


	//		}else if (day > 31) {

	//			day = 1;
	//			month++;
	//		}

	//	}

	//}
	//else {

	//	if (day > 30) {

	//		day = 1;
	//		month = 1;
	//	}

	//}

	//cout << "Next date: " << day << " " << month;

	// Zad_13
	//int num1, num2, num3;
	//cin >> num1 >> num2 >> num3;

	//int maxNum = ( (num1 > num2) ? ( (num1 > num3) ? num1 : num3 ) : ( (num2 > num3) ? num2 : num3) );
	//cout << "Max: " << maxNum;

}