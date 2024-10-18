// prac2Yasen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//1

	//int year;
	// cin >> year;
	// cout << ((year % 100 == 0) ? ((year % 400 == 0) ? "Leap" : "Not Leap") : ((year % 4 == 0) ? "Leap" : "Not leap"));

	 //2

	/*char c;
	cin >> c;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
		{
			cout << "This character ( " << c << " ) is vowel.";
		}
		else cout << "This character ( " << c << " ) is not a vowel.";
	}
	else cout << "This character is not in Latin";*/

	//3

	/*int a;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	int b;
	cin >> b;
	cout << "The bigger number is "<< ((a>b)? a : b);*/

	//4

	//int grade;
	//cin >> grade;
	//int res;
	//if (grade < 0 || grade > 100) cout << "Invalid";
	//else {
	//	if (grade >= 80) res = 6;
	//	else if (grade >= 70) res = 5;
	//	else if (grade >= 60) res = 4;
	//	else if (grade >= 40) res = 3;
	//	else res = 2;
	//	cout << "Grade: " << res << ((grade >= 90) ? "+" : "");
	//}

	//5

	//int a;
	//cin >> a;
	//int b;
	//cin >> b;
	//int c;
	//cin >> c;

	//if (a + b > c && a + c > b && b + c > a) cout << "Valid triangle";
	//else cout << "Invalid triangle";

	//6 
	//int num;
	//cin >> num;
	//switch (num)
	//{
	//case 1: cout << "green"; break;
	//case 2: cout << "yellow\n";
	//case 3: cout << "red";
	//}

	//7
	//char c;
	//cout << "Enter a letter: ";
	//cin >> c;
	//if (c < 'A' || c>'z') cout << "Invalid letter";

	//else {
	//	if (c >= 'A' && c <= 'Z') c += 32;
	//	else c -= 32;
	//	cout << "New Letter: " << c;
	//}

	//8
	/*cout << "Arabic numeral: ";
	int a;
	cin >> a;
	cout << "Roman numeral: ";

		switch (a) {
		case 1: cout << "I"; break;
		case 2: cout << "II"; break;
		case 3: cout << "III"; break;
		case 4: cout << "IV"; break;
		case 5: cout << "V"; break;
		case 6: cout << "VI"; break;
		case 7: cout << "VII"; break;
		case 8: cout << "VIII"; break;
		case 9: cout << "IX"; break;
		default: cout << "Invalid number";
		}*/

		//9
		//int a, b, c;
		//cin >> a >> b >> c;

		//if (a > b && a > c)
		//{
		//	if (b > c) cout << a << " " << b << " " << c;
		//	else cout << a << " " << c << " " << b;
		//}
		//else if (b > c && b > a) {
		//	if (a > c) cout << b << " " << a << " " << c;
		//	else cout << b << " " << c << " " << a;
		//}
		//else {
		//	if (a > b) cout << c << " " << a << " " << b;
		//	else cout << c << " " << b << " " << a;
		//}

		    //10

			/*cout << "Enter first number: ";
			int a, b;
			cin >> a;
			cout << "Enter second number: ";
			cin >> b;
			cout << "Enter operation ( +, -, * or /): ";
			char c; cin >> c;
			int res = 0;
			if (c == '+') {
				res = a + b;
			}
			else if (c == '-') res = a - b;
			else if (c == '*') res = a * b;
			else if (c == '/') {
				if (b == 0) {
					cout << "You can't divide by 0!"; return 0;
				}
				res = a / b;
			}
			cout << "The result of operation ( " << c << " ) is: " << res;*/

			//11

			/*int a, b, c;
			cin >> a>>b>>c;*/
			/*if (a < 0 || b < 0 || c < 0) cout << "Invalid number/s!";
			else if (a == b == c == 0) cout << 0;
			else if (a > b && a > c) {
				if (b > c) cout << a << b << c;
				else cout << a << c << b;
			}
			else if (b > a && b > c)
			{
				if (a > c) cout << b << a << a;
				else cout << b << c << a;
			}
			else
			{
				if (a > b) cout << c << a << b;
				else cout << c << b << a;
			}*/

			//12
			/*cout << "Enter a day: ";
			int day; cin >> day;
			cout << "Enter a month: ";
			int month; cin >> month;
			if (day<1 || day > 31) { cout << "Invalid day!"; }
			switch (month)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10: if (day == 31) { day = 1; month += 1; }
				   else day += 1; 
				   break;
			case 2:if (day > 28) { cout << "Invalid day!"; return -1; } else if (day == 28) { day = 1; month += 1; }
				  else day += 1; 
				  break;
			case 4:
			case 6:
			case 9:
			case 11:if (day == 31) { cout << "Invalid day!"; return -1; } if (day == 30) { day = 1; month += 1; }
				   else day += 1; break;
			case 12: if (day == 31) { day = 1; month = 1; }
				   else day += 1; break;
			default: cout << "Invalid month!"; return -1;
			}
			cout <<"Next date: "<< day << " " << month;*/



		}

		// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
		// Debug program: F5 or Debug > Start Debugging menu

		// Tips for Getting Started: 
		//   1. Use the Solution Explorer window to add/manage files
		//   2. Use the Team Explorer window to connect to source control
		//   3. Use the Output window to see build output and other messages
		//   4. Use the Error List window to view errors
		//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
		//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
