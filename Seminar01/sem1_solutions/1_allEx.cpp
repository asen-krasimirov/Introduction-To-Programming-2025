#include <iostream>
using namespace std;


int main() {
	////1
	//cout << "Oh what\na happy day!\nOh yes,\nwhat a happy day!";

	////2
	//double s1 = 5.4*7.9;
	//double p1 = (5.4+7.9) * 2;
	//cout << "\nS = "<<s1;
	//cout << "\nP = " << p1;
	////3
	//double lev;
	//cout << "\n";
	//cin >> lev;
	//double dollar = lev * 0.56;
	//double euro = lev * 0.51;
	//cout << "\nDollar = " << dollar;
	//cout << "\nEuro = " << euro;

	////4
	//cout << "\nPlease enter length and width of the rectangle:\n";
	//double a, b;
	//cin >> a>> b;
	//double s2 = a * b;
	//double p2 = (a + b) * 2;
	//cout << "\nS = " << s2;
	//cout << "\nP = " << p2;

	////5
	//int c, d;
	//cin >> c >> d;
	//cout << "\n";
	//bool c_is_smaller = c < d;for
	//cout <<"" << c_is_smaller;

	////6
	//int dividend, divisor;

	//cout << "\nDividend: ";
	//cin >> dividend;
	//cout << "\nDivisor: ";
	//cin >> divisor;
	//cout << "\nThe quotient of the division is : " << (dividend / divisor);
	//cout << "\nThe remainder of the division is : " << (dividend % divisor);

	////7
	//int apples, pears, bananas;
	//cout << "Apples: ";
	//cin >> apples;
	//cout << "Pears: ";
	//cin >> pears;
	//cout << "Bananas: ";
	//cin >> bananas;
	//cout << "Pesho, don’t forget to buy " << apples << " apples, " << pears << " pears and " << bananas << " bananas!";


	////8
	//double r, length, S;
	//cin >> r;
	//length = 2 * 3.14159265 * r;
	//S = 3.14159265 * r * r;

	////9
	//int a, b, c;
	//cin >> a >> b >> c;

	//double D = (b * b) - (4 * a * c);
	//double x1, x2;

	//x1 = (-b + sqrt(D)) / (2 * a);
	//x2 = (-b - sqrt(D)) / (2 * a);
	//cout << "x1 = " << x1 << ", x2 = " << x2;

//	//10
//	int a, b, save;
//	cin >> a >> b;
//	
//	/*save = a;
//	a = b;
//	b = save;*/
//	a += b;
//	b = a - b;
//	a -= b;
//cout << a << " " << b;

	////11
	//int a, b;
	//cin >> a >> b;
	//bool is_a_bigger = a > b;
	//cout<< is_a_bigger*a + 


	////12
	//int seconds,days,hours,minutes;
	//cin >> seconds;
	//days = seconds / 60 / 60 / 24;
	//seconds -= days * 24 * 60 * 60;
	//hours = seconds / 60 / 60;
	//seconds -= hours * 60 * 60;
	//minutes = seconds / 60;
	//seconds -= minutes * 60;
	//cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds";


	//13
	cout << "Point1: ";
	int x1, y1, x2, y2;
	cin >> x1 >> y1;
	cout << "\nPoint2:";
	cin >> x2 >> y2;

	double length = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	int x = length * 100;
	cout << (double)x / 100.00 << std::endl;



	//14
	int n; std::cin >> n;
	std::cout << n * (n + 1) / 2<<std::endl;

}