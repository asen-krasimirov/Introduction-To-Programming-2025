include <iostream>
using namespace std;

int main()
{

	// Zad_1
	//int year;
	//cin >> year;
	//if (year % 400 == 0) {
	//	cout << year << " is Leap year. \n";
	//}
	//else {
	//
	//	cout << year << " isn't Leap year. \n";
	//
	//}
	//
	//// Zad_2
	//char symbol;
	//cin >> symbol;
	//
	//if ((symbol >= 65 && symbol <= 90) || (symbol >= 97 && symbol <= 122)) {
	//
	//	switch(symbol) {

	//	case'a':
	//	case'A':
	//	case'o':
	//	case'O':
	//	case'e':
	//	case'E':
	//	case'i':
	//	case'I':
	//	case'u':
	//	case'U':
	//	case'y':
	//	case'Y':
	//		cout << symbol << " is Vowel letter. \n";
	//		break;

	//	
	//	default:
	//		cout << symbol << " is Consonant letter. \n";
	//
	//
	//	}
	//}
	//else
	//{
	//
	//	cout << symbol << " isn't a letter. \n";
	//
	//}
	//
	//// Zad_3
	//int num1, num2;
	//cin >> num1 >> num2;
	//
	//cout << ((num1 > num2) ? num1 : num2);
	//
	//// Zad_4
	//int percentage;
	//cout << "Result: \n";
	//cin >> percentage;
	//
	//cout << "Grade: \n";
	//
	//if (percentage >= 90) {
	//
	//	cout << "6+";
	//
	//} else if (percentage >= 80) {
	//
	//	cout << "6";
	//
	//}else if (percentage >= 70) {
	//
	//	cout << "5";
	//
	//}else if (percentage >= 60) {
	//
	//	cout << "4";
	//
	//}else if (percentage >= 40) {
	//
	//	cout << "3";
	//
	//}else  {
	//
	//	cout << "2";
	//
	//}
	//
	// //Zad_5
	//int a, b, c;
	//cin >> a >> b >> c;
	//
	//if ((a + b > c) && (b + c > a) && (a + c > b)) {
	//
	//	cout << "VALID";
	//}
	//else
	//{
	//	cout << "NOT VALID";
	//}

	//// Zad_6
	//int trafficLightState;
	//cout << "Enter traffic light state: \n";
	//
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
	//
	//// Zad_7
	//char symbol;
	//cin >> symbol;
	//
	//if ((symbol >= 'A' && symbol <= 'Z')) {
	//
	//	std::cout << (char)(symbol + 32)<<std::endl;

	//
	//}
	//else if ((symbol >= 'a' && symbol <= 'z')) {
	//	std::cout << (char)(symbol - 32) << std::endl;
	//}
	//else
	//{
	//			
	//	cout << "Invalid character";
	//}
	
	// Zad_8
	//int number;

	//cout << "Arabic numeral: \n";
	//cin >> number;

	//cout << "Roman numerals: \n";

//switch (number) {
//
//case 1:
//
//	std::cout << "I" << std::endl;
//	break;
//
//case 2:
//	std::cout << "II" << std::endl;
//	break;
//case 3:
//	std::cout << "III" << std::endl;
//	break;
//case 4:
//	std::cout << "IV" << std::endl;
//	break;
//case 5:
//	std::cout << "V" << std::endl;
//	break;
//case 6:
//	std::cout << "VI" << std::endl;
//	break;
//case 7:
//	std::cout << "VII" << std::endl;
//	break;
//case 8:
//	std::cout << "VIII" << std::endl;
//	break;
//case 9:
//	std::cout << "IX" << std::endl;
//	break;
//
//	}

	// Zad_9
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	int temp;
	if (num1 > num3) {
		temp = num1;
		num1 = num3;
		num3 = temp;
		}
	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num2 > num3) {
		temp = num3;
		num3 = num2;
		num2 = temp;
	}

	cout << num1 << " " << num2 << " " << num3;

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