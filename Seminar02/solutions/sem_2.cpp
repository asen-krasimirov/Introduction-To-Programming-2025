
#include <iostream>
using namespace std;
int main() {
		    //zad1
			/*int year;
			cin >> year;
			if (year % 100 == 0) {
				if (year % 400 == 0) {
					cout << "leap";
				} else{
					cout << "not leap";
				}
			} else if (year % 4 == 0) {
				cout << "leap";
			} else {
				cout << "not leap";
			}*/

			//zad2
			/*char symbol;
			cin >> symbol;
			if (symbol >= 'a' && symbol <= 'z' || symbol >= 'A' && symbol <= 'Z') {
				switch (symbol) {
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					cout << "Vowel";
					break;
				default: cout << "Consonant";
				}
			}
			else {
				cout << "Not a latin letter";
			}*/

			//zad3
			/*int a, b;
			cin >> a >> b;
			if(a!=b){
				int result = (a > b) ? a : b;
			cout << result;
			}
			else {
				cout << "Invalid input";

			}*/

			//zad4
			/*double grade;
			cin >> grade;
			if (grade >= 90 && grade <= 100) {
				cout << "6+";
			}
			else if (grade >= 80) {
				cout << "6";
			}
			else if (grade >= 70) {
				cout << "5";
			}
			else if (grade >= 60) {
				cout << "4";
			}
			else if (grade >= 40) {
				cout << "3";
			}
			else if (grade < 40 && grade >= 0) {
				cout << "2";
			}*/

			//zad5
			/*double a, b, c;
			cin >> a >> b >> c;
			if (a + b > c && a + c > b && b + c > a) {
				cout << "Valid triangle";
			}
			else {
				cout << "Invalid triangle";
			}*/

			//zad6
			/*int input;
			cin >> input;
			switch (input) {
			case 1:
				cout << "Yellow! Caution!"<<endl;
			case 2:
				cout << "Red! Stop!"<<endl;
			case 3:
				cout << "Yellow! Get ready!"<<endl;
			case 4:
				cout << "Green! Go!"<<endl;
				break;
			default: cout << "Please enter a number between 1 and 4";
				}*/

				//zad7
				/*char symbol;
				cin >> symbol;
				if (symbol >= 'a' && symbol <= 'z') {
					char uppercase = symbol - 32;
					cout << uppercase;

				} else if (symbol >= 'A' && symbol <= 'Z') {
					char lowercase = symbol + 32;
					cout << lowercase;
				}
				else {
					cout << "Invalid character";
				}*/

				//zad8
				/*int a;
				cout << "Arabic numeral: ";
				cin >> a;
				cout << "Roman numeral: ";
				switch (a) {
					case 1:
						cout << "I";
						break;
					case 2:
						cout << "II";
						break;
					case 3:
						cout << "II";
						break;
					case 4:
						cout << "IV";
						break;
					case 5:
						cout << "V";
						break;
					case 6:
						cout << "VI";
						break;
					case 7:
						cout << "VII";
						break;
					case 8:
						cout << "VIII";
						break;
					case 9:
						cout << "IX";
						break;
				}*/


				//zad9
				/*int a, b, c;
				cin >> a >> b >> c;

				if (a <= b && a <= c) {
					cout << a << " ";
					if (b <= c || a == b) {
						cout << b << " " << c;
					}
					else if(c <= b || a == c){
						cout << c << " " << b;
					}
				}
				else if (b <= a && b <= c) {
					cout << b << " ";
					if (a <= c || b == a) {
						cout << a << " " << c;
					}
					else if( c <= a || b == c){
						cout << c << " " << a;
					}
				}
				else if (c <= a && c <= b) {
					cout << c << " ";
					if (a <= b || c == a) {
						cout << a << " " << b;
					}
					else if(b <= a || c == b){
						cout << b << " " << a;
					}
				}*/

				//zad10
				/*int a, b;
				char operation;
				cin >> a >> operation >> b;
				if (a == 0 || b == 0 && operation == '/') {
					cout << "Invalid operation";
				}
				else {
					int result = 0;
					switch (operation) {
						case '+':
							result = a + b;
							break;
						case '-':
							result = a - b;
							break;
						case '*':
							result = a * b;
							break;
						case '/':
							result = a / b;
							break;
					}
					cout << result;
				}*/

				//zad11
				/*int a, b, c;
				cin >> a >> b >> c;
				if (a == 0 && b == 0 && c == 0) {
					cout << "Invalid input";
				}
				else if (a >= b && a >= c) {
					cout << a;
					if (b >= c || a == b) {
						cout << b << c;
					}
					else if(c >= b || a == c){
						cout << c << b;
					}
				}
				else if (b >= a && b >= c) {
					cout << b;
					if (a >= c || b == a) {
						cout << a << c;
					}
					else if( c >= a || b == c){
						cout << c << a;
					}
				}
				else if (c >= a && c >= b) {
					cout << c;
					if (a >= b || c == a) {
						cout << a << b;
					}
					else if(b >= a || c == b){
						cout << b << a;
					}
				}*/

				//zad12
				/*int day, month;
				cin >> day >> month;
				bool validDay = true;
				bool validMonth = true;
				switch (month) {

					case 1://31 days
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
						if (day >= 1 && day <= 30) {
							day += 1;
						}
						else if (day == 31) {
							day = 1;
							month += 1;
						}
						else {
							validDay = false;
						}
						break;

					case 12://december
						if (day >= 1 && day <= 30) {
							day += 1;
						}
						else if (day == 31) {
							day = 1;
							month = 1;
						}
						else {
							validDay = false;
						}
						break;

					case 4://30 days
					case 6:
					case 9:
					case 11:
						if (day >= 1 && day <= 29) {
							day += 1;
						}
						else if (day == 30) {
							day = 1;
							month += 1;
						}
						else {
							validDay = false;
						}
						break;

					case 2://28 days
						if (day >= 1 && day <= 27) {
							day += 1;
						}
						else if (day == 28) {
							day = 1;
							month = 3;
						}
						else {
							validDay = false;
						}
						break;

					default: validMonth = false;
				}

				if (validDay && validMonth) {
				std:: cout << day << " " << month;
				}
				else {
					std::cout << "Invalid day or month";
				}*/

				//zad13
	            int a, b, c;
	            cin >> a >> b >> c;
	           	int largest = ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
		        cout << largest;
return 0;
            



           }


